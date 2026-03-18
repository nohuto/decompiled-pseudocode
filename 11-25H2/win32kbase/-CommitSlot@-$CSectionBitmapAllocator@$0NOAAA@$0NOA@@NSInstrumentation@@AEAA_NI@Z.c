/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NI@Z @ 0x1401364DC
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ @ 0x140136408 (-Allocate@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  void *v5; // rdi

  v2 = *(_DWORD *)(a1 + 36);
  if ( v2 >= 0xDE || a2 < v2 )
    return 1;
  v5 = (void *)((a2 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v5, 4096LL) >= 0 )
  {
    memset(v5, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
