/*
 * XREFs of ??$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@@Z @ 0x1800C7A74
 * Callers:
 *     ?Create@HapticProcessor@@SA?AV?$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ @ 0x1800C812C (-Create@HapticProcessor@@SA-AV-$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A6364 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0HapticProcessor@@QEAA@XZ @ 0x1800C7F04 (--0HapticProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HapticProcessor,HapticProcessor,>(HapticProcessor **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  HapticProcessor *v4; // rax
  HapticProcessor *v5; // rdi
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  HapticProcessor *v8; // [rsp+48h] [rbp+10h] BYREF
  void *v9; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  v8 = (HapticProcessor *)v3;
  if ( v3 )
  {
    v9 = v3;
    v4 = HapticProcessor::HapticProcessor((HapticProcessor *)v3);
    v5 = v4;
    v8 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(HapticProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return v2;
}
