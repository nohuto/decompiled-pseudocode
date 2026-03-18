/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B4DE0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401D2568 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B4870 (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NI@Z @ 0x1400B52B4 (-CommitSlot@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rdi
  ULONG ClearBits; // eax
  ULONG v5; // ebp
  __int64 v6; // rdi

  v1 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xE8u ? *(_DWORD *)(a1 + 32) : 0);
  v5 = ClearBits;
  if ( ClearBits == -1
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<237568,928>::CommitSlot(a1, ClearBits) )
  {
    W32ReleasePushLockExclusive(v1);
    return 0LL;
  }
  else
  {
    RtlTestBit(v3, v5);
    RtlSetBit(v3, v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xE8u )
      *(_DWORD *)(a1 + 32) = 0;
    v6 = (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + (v5 >> 2 << 12);
    W32ReleasePushLockExclusive(v1);
    return v6 + 928 * (v5 & 3);
  }
}
