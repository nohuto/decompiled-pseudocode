/*
 * XREFs of ??$MakeAndInitialize@VSpatialRimDeviceCollectionHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialRimDeviceCollectionHeadEventHandler@@@Z @ 0x1800D3828
 * Callers:
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D55F0 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004E3A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CF44C (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CFF48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialRimDeviceCollectionHeadEventHandler,SpatialRimDeviceCollectionHeadEventHandler,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  char *v3; // rax
  char *v4; // rdi
  volatile int *v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (char *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>((__int64)v3);
    *((_QWORD *)v4 + 2) = 0LL;
    *(_QWORD *)v4 = &SpatialRimDeviceCollectionHeadEventHandler::`vftable';
    *((_QWORD *)v4 + 3) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v4 + 32), 0, 0);
    *((_QWORD *)v4 + 9) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)v4 + 2, 0, 0);
    *((_QWORD *)v4 + 23) = 0LL;
    *((_QWORD *)v4 + 24) = 0LL;
    v8 = (volatile int *)v4;
    v7 = 0LL;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 12), v5);
    *a1 = v4;
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return v2;
}
