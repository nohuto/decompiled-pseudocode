/*
 * XREFs of ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x1805254A4
 * Callers:
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x180525768 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z @ 0x1802378A8 (-Attach@-$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSimpleTempAppVisual@@QEAA@XZ @ 0x180525694 (--0CSimpleTempAppVisual@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z @ 0x180525A48 (-RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,ITemporaryAppVisual * &>(
        CSimpleTempAppVisual **a1,
        struct ITemporaryAppVisual **a2)
{
  void *v4; // rax
  int v5; // edi
  CSimpleTempAppVisual *v6; // rax
  struct ITemporaryAppVisual *v7; // rdx
  CSimpleTempAppVisual *v8; // rbx
  CSimpleTempAppVisual *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = CSimpleTempAppVisual::CSimpleTempAppVisual((CSimpleTempAppVisual *)v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CAppLayoutItem>::Attach((__int64 *)&v10, (__int64)v6);
    v7 = *a2;
    v8 = v10;
    v11 = 0LL;
    v5 = CSimpleTempAppVisual::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(CSimpleTempAppVisual *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v10);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v10);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v11);
  return (unsigned int)v5;
}
