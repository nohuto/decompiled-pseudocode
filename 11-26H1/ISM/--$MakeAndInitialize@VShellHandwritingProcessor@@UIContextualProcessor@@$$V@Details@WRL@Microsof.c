/*
 * XREFs of ??$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x180080E10
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0ShellHandwritingProcessor@@QEAA@XZ @ 0x180094520 (--0ShellHandwritingProcessor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801B3FC0 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellHandwritingProcessor,IContextualProcessor,>(
        _QWORD *a1)
{
  ShellHandwritingProcessor *v2; // rax
  ShellHandwritingProcessor *v4; // rdi
  int v5; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  ShellHandwritingProcessor *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (ShellHandwritingProcessor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 2147942414LL;
  v4 = ShellHandwritingProcessor::ShellHandwritingProcessor(v2);
  v7 = v4;
  v6 = 0LL;
  v5 = ShellHandwritingProcessor::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(ShellHandwritingProcessor *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           a1);
    (*(void (__fastcall **)(ShellHandwritingProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(ShellHandwritingProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v6);
  return (unsigned int)v5;
}
