/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18023B14C
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18023E170 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsCustomPresentDurationSupported@COverlayContext@@IEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18023CCE4 (-IsCustomPresentDurationSupported@COverlayContext@@IEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  char v10; // al
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // r14d
  int v18; // eax
  int v19; // ebx

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
  v8 = *((_QWORD *)a2 + 2);
  v9 = v7;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 352LL))(v8);
  if ( a3 )
  {
    if ( !v10 )
    {
      v11 = *((_DWORD *)a2 + 93);
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 384LL);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 240LL))(v9);
      v14 = v12(v8, *((_QWORD *)a2 + 3), v13, v11);
      v6 = v14;
      if ( v14 >= 0 )
      {
        if ( !*((_BYTE *)a2 + 365) )
        {
          LOBYTE(v15) = 1;
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 464LL))(v8, 3LL, v15);
        }
        *((_BYTE *)a2 + 365) = 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xC8Au, 0LL);
      }
    }
  }
  else if ( v10 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 416LL))(v8, *((_QWORD *)a2 + 3));
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xCA1u, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 464LL))(v8, 3LL);
    *((_BYTE *)a2 + 365) = 0;
    *((_DWORD *)a2 + 96) = 0;
  }
  if ( *((_BYTE *)a2 + 365) )
  {
    v17 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8)
      && COverlayContext::IsCustomPresentDurationSupported(this, a2) )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 376LL))(v8, *((_QWORD *)this + 7));
    }
    if ( *((_DWORD *)a2 + 96) != v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 400LL))(v8, *((_QWORD *)a2 + 3), v17);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xCBFu, 0LL);
      if ( !v6 || v6 >= 0 && v19 < 0 )
        v6 = v19;
      *((_DWORD *)a2 + 96) = v17;
    }
  }
  return (unsigned int)v6;
}
