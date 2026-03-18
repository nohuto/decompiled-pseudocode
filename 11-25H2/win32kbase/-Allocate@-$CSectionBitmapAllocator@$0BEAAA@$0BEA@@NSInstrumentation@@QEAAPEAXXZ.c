/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ @ 0x14000D50C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140098750 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NI@Z @ 0x14000D934 (-CommitSlot@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rdi
  ULONG ClearBits; // eax
  ULONG v5; // r14d
  __int64 v6; // rsi

  v1 = *(struct W32_PUSH_LOCK **)a1;
  GreEnterCriticalRegionAndAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xF0u ? *(_DWORD *)(a1 + 32) : 0);
  v5 = ClearBits;
  if ( ClearBits == -1
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<81920,320>::CommitSlot(a1, ClearBits) )
  {
    W32ReleasePushLockExclusive(v1);
    return 0LL;
  }
  else
  {
    RtlTestBit(v3, v5);
    RtlSetBit(v3, v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xF0u )
      *(_DWORD *)(a1 + 32) = 0;
    v6 = ((v5 / 0xC) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8));
    W32ReleasePushLockExclusive(v1);
    return v6 + 320 * (v5 % 0xC);
  }
}
