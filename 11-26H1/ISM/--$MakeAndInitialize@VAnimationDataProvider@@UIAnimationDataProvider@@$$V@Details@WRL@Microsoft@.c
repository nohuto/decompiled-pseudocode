/*
 * XREFs of ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x180042E0C
 * Callers:
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x180088AC8 (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ @ 0x180043740 (-RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x180102370 (--0AnimationDataProvider@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AnimationDataProvider,IAnimationDataProvider,>(
        _QWORD *a1)
{
  AnimationDataProvider *v2; // rax
  int v3; // ebx
  AnimationDataProvider *v4; // rdi
  AnimationDataProvider *v6; // [rsp+30h] [rbp+8h] BYREF
  AnimationDataProvider *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (AnimationDataProvider *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = AnimationDataProvider::AnimationDataProvider(v2);
    v7 = v4;
    v6 = 0LL;
    v3 = AnimationDataProvider::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(AnimationDataProvider *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_c2b8d4a1_8c81_48a7_b9ab_171b2a64dd6e,
             a1);
      (*(void (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)v3;
    }
    if ( v4 )
      (*(void (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v6);
  return (unsigned int)v3;
}
