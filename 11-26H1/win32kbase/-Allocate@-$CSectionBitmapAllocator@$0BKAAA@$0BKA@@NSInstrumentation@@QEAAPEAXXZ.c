/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B657C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14016C890 (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NI@Z @ 0x1400B62C8 (-CommitSlot@-$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<106496,416>::Allocate(__int64 a1, unsigned int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  struct _RTL_BITMAP *v4; // r14
  ULONG ClearBits; // eax
  unsigned int v6; // edx
  __int64 v7; // rbp
  ULONG v8; // esi

  v2 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1, a2);
  v4 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v4, 1u, *(_DWORD *)(a1 + 32) < 0xEAu ? *(_DWORD *)(a1 + 32) : 0);
  v7 = 0LL;
  v8 = ClearBits;
  if ( ClearBits != -1 && NSInstrumentation::CSectionBitmapAllocator<106496,416>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit(v4, v8);
    RtlSetBit(v4, v8);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xEAu )
      *(_DWORD *)(a1 + 32) = 0;
    v6 = (v8 / 9) << 12;
    v7 = v6 + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 416 * (v8 % 9);
  }
  W32ReleasePushLockExclusiveEx(v2, v6);
  return v7;
}
