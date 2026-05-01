/*
 * XREFs of ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@AEBQEAU4@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEBUtagRECT@@1AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@3AEAPEAUIApplicationView@@@Z @ 0x180525568
 * Callers:
 *     ?CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1805258BC (-CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z @ 0x1802378A8 (-Attach@-$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSimpleTempAppVisual@@QEAA@XZ @ 0x180525694 (--0CSimpleTempAppVisual@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,tagRECT const &,tagRECT const &,enum TEMPORARY_APP_VISUAL_TYPE const &,HWND__ * const &,HWND__ * const &,IApplicationView * &>(
        __int64 *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  void *v12; // rax
  CSimpleTempAppVisual *v13; // rax
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdi
  __int64 v18; // r10
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  _QWORD *v22; // rax
  void *v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  *a1 = 0LL;
  v12 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v12;
  if ( v12 )
  {
    v13 = CSimpleTempAppVisual::CSimpleTempAppVisual((CSimpleTempAppVisual *)v12);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<CAppLayoutItem>::Attach(&v25, (__int64)v13);
    v14 = a2[1];
    v15 = a2[2];
    v16 = a2[3];
    v17 = v25;
    v24 = 0LL;
    v18 = *a7;
    *(_DWORD *)(v25 + 48) = *a2;
    *(_DWORD *)(v17 + 52) = v14;
    *(_DWORD *)(v17 + 56) = v15;
    *(_DWORD *)(v17 + 60) = v16;
    v19 = a3[1];
    v20 = a3[2];
    v21 = a3[3];
    *(_DWORD *)(v17 + 64) = *a3;
    *(_DWORD *)(v17 + 68) = v19;
    *(_DWORD *)(v17 + 72) = v20;
    *(_DWORD *)(v17 + 76) = v21;
    *(_DWORD *)(v17 + 16) = *a4;
    v22 = a6;
    *(_QWORD *)(v17 + 32) = *a5;
    *(_QWORD *)(v17 + 40) = *v22;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v17 + 24), v18);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    *a1 = v17;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v25);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v24);
  return v7;
}
