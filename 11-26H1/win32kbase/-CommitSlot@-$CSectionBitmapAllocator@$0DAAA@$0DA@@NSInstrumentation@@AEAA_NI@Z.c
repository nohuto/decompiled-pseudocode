/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@AEAA_NI@Z @ 0x1400BA06C
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B9F7C (-Allocate@-$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<12288,48>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 < 3 )
  {
    v4 = a2 / 0x55;
    if ( v4 >= v3 )
    {
      v5 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v5, 4096LL) < 0 )
        return 0;
      memset(v5, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
  }
  return 1;
}
