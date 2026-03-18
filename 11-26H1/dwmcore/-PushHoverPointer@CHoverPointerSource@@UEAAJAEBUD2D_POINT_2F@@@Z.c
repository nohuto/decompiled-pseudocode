/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800E5170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(CHoverPointerSource *this, const struct D2D_POINT_2F *a2)
{
  unsigned int v2; // esi
  struct IMessageCallSendHost *v4; // rbx
  CComposition *v5; // rdi
  int ManipulationManager; // eax
  struct CManipulationManager *v7; // rdi
  __int64 v8; // rsi
  int savedregs; // [rsp+40h] [rbp+0h]
  struct CManipulationManager *v11; // [rsp+70h] [rbp+30h] BYREF
  CHoverPointerSource *v12; // [rsp+78h] [rbp+38h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  if ( *((float *)this + 20) == a2->x && *((float *)this + 21) == a2->y )
    return v2;
  *((struct D2D_POINT_2F *)this + 10) = *a2;
  if ( CMit::s_pMessageSession )
  {
    v4 = CMit::s_pMessageCallSendHost;
    if ( CMit::s_pMessageCallSendHost )
      goto LABEL_4;
    if ( (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
      RaiseFailFastException(0LL, 0LL, 0);
  }
  v4 = CMit::s_pMessageCallSendHost;
LABEL_4:
  v12 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (CComposition *)*((_QWORD *)this + 4);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    ManipulationManager = CComposition::GetManipulationManager(v5, &v11);
    v2 = ManipulationManager;
    if ( ManipulationManager < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x49u, 0LL);
      if ( v11 )
        (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      v7 = v11;
      v8 = *((_QWORD *)v11 + 7);
      if ( !v8 )
      {
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x4Au, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
        return v2;
      }
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
      v11 = (struct CManipulationManager *)*((_QWORD *)this + 10);
      v12 = this;
      v13 = v8;
      v2 = CoreUICallSend(v4, &v13, 1LL, 7LL, 4, &unk_1802F5B1A, (unsigned int)&v12, &v11, savedregs);
      if ( (v2 & 0x80000000) != 0 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8);
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v2;
}
