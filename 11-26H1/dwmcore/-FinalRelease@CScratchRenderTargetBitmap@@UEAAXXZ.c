/*
 * XREFs of ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x18007ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800F4F48 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScratchRenderTargetBitmap::FinalRelease(CScratchRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned __int64 CurrentFrameId; // rbp
  __int64 v11; // rsi
  int v12; // eax
  CScratchRenderTargetBitmap *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 144) )
  {
    v2 = *((_QWORD *)this + 15);
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2) >= 0 )
      {
        v3 = *((_QWORD *)this + 15);
        if ( v3 )
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
        else
          v4 = 0LL;
        v13 = this;
        v5 = v4 + 456;
        if ( *((_BYTE *)this + 145) )
          --*(_DWORD *)(v4 + 496);
        v6 = 0LL;
        if ( g_pComposition )
          v6 = *((_QWORD *)g_pComposition + 110);
        *((_QWORD *)this + 17) = v6;
        v7 = *(_DWORD *)(v4 + 480);
        if ( v7 >= 0x20 )
        {
          CurrentFrameId = GetCurrentFrameId();
          do
          {
            v11 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * --v7);
            if ( CurrentFrameId - *(_QWORD *)(v11 + 136) > 1 )
            {
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v5);
              *(_BYTE *)(v11 + 144) = 0;
              CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v11);
            }
          }
          while ( v7 );
        }
        v8 = *(_DWORD *)(v5 + 24);
        v9 = v8 + 1;
        if ( v8 + 1 < v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
          return;
        }
        if ( v9 > *(_DWORD *)(v5 + 20) )
        {
          v12 = DynArrayImpl<0>::AddMultipleAndSet(v5, 8, 1, &v13);
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC2u, 0LL);
            return;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 24)) = v13;
          *(_DWORD *)(v5 + 24) = v9;
        }
        CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v13 + 8));
      }
    }
  }
}
