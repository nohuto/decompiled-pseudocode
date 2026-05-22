/*
 * XREFs of ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x1800AB264
 * Callers:
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x1800ABF28 (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@ForegroundManager@@QEAAJXZ @ 0x180042A88 (-RuntimeClassInitialize@ForegroundManager@@QEAAJXZ.c)
 *     ??0ForegroundManager@@AEAA@XZ @ 0x180047AD0 (--0ForegroundManager@@AEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004E3A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A633C (-InternalRelease@-$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,ForegroundManager,>(
        volatile signed __int32 **a1)
{
  void *v2; // rax
  int v3; // edi
  volatile signed __int32 *v4; // rbx
  volatile int *v5; // rdx
  volatile signed __int32 *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF
  void *v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v7 = (volatile signed __int32 *)v2;
  if ( v2 )
  {
    v9 = v2;
    v4 = (volatile signed __int32 *)ForegroundManager::ForegroundManager((ForegroundManager *)v2);
    v7 = v4;
    v8 = 0LL;
    v3 = ForegroundManager::RuntimeClassInitialize((ForegroundManager *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 3), v5);
      *a1 = v4;
      Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(&v7);
      v3 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(&v7);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v8);
  return (unsigned int)v3;
}
