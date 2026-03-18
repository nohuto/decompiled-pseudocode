/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1802311E0
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180130610 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801BAB64 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18020AED8 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180230E6C (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        CSuperWetInkManager *this,
        __int64 a2,
        __m128i *a3,
        _BYTE *a4)
{
  unsigned int v5; // ebp
  struct CSuperWetInkManager::VailSuperWetStroke *v8; // r14
  __int64 v9; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, _QWORD, char *, __int64 *); // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64); // rdi
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  *a4 = 0;
  if ( !*(_QWORD *)this )
    return 0LL;
  v8 = CSuperWetInkManager::TryLookupVailDataForSource(this, *(struct CSuperWetSource **)this);
  if ( *((_QWORD *)v8 + 1) != v9 )
    return 0LL;
  if ( *((_QWORD *)g_pComposition + 110) - *((_QWORD *)v8 + 13) >= 0xAuLL )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  if ( !*((_BYTE *)v8 + 112) )
  {
    v22 = 0;
    v11 = CSuperWetInkManager::RegisterStrokeOnHost((struct ID3D12CommandQueue *)this, v8, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    if ( !v22 )
      return 0LL;
  }
  if ( !CSuperWetInkManager::UpdateRenderStateClip(
          (const struct D2D_RECT_F *)((char *)v8 + 88),
          a3,
          0LL,
          (struct D2D_RECT_F *)((char *)v8 + 60)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        17LL);
    return 0LL;
  }
  v23 = 0LL;
  v13 = *(_QWORD *)v8;
  v14 = *(int (__fastcall **)(__int64, _QWORD, char *, __int64 *))(**(_QWORD **)v8 + 328LL);
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&v23);
  if ( v14(v13, *((_QWORD *)v8 + 2), (char *)v8 + 32, &v23) >= 0 )
  {
    v15 = *(_QWORD *)v8;
    v16 = v23;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)v8 + 336LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 1) + 32LL))(*((_QWORD *)v8 + 1));
    v19 = v17(v15, v18, v16);
    v20 = v19;
    if ( v19 >= 0 )
    {
      *a4 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CA,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v19);
      v5 = v20;
    }
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v23);
  return v5;
}
