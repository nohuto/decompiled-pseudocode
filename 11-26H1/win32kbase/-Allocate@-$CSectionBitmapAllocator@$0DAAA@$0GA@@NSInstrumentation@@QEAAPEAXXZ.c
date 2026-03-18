/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1401DCB0C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD1B4 (-Allocate@-$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<12288,96>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // r15
  __int64 v4; // r14
  ULONG ClearBits; // esi
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // r12
  void *v9; // r13

  v1 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  v4 = 0LL;
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0x7Eu ? *(_DWORD *)(a1 + 32) : 0);
  if ( ClearBits != -1 )
  {
    v6 = *(_DWORD *)(a1 + 36);
    v7 = ClearBits / 0x2A;
    if ( v6 >= 3 || v7 < v6 )
    {
      LODWORD(v8) = v7 << 12;
    }
    else
    {
      v8 = v7 << 12;
      v9 = (void *)(v8 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v9, 4096LL) < 0 )
        goto LABEL_10;
      memset(v9, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
    RtlTestBit(v3, ClearBits);
    RtlSetBit(v3, ClearBits);
    if ( ++*(_DWORD *)(a1 + 32) >= 0x7Eu )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = (unsigned int)v8 + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 96 * (ClearBits % 0x2A);
  }
LABEL_10:
  W32ReleasePushLockExclusiveEx(v1);
  return v4;
}
