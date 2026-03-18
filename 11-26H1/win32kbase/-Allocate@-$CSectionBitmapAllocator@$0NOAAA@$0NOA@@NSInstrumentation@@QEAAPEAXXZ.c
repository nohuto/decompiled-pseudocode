/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ @ 0x140184970
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401BD87C (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NI@Z @ 0x1401A348C (-CommitSlot@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // r14
  ULONG ClearBits; // eax
  __int64 v5; // rbp
  ULONG v6; // esi

  v1 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xDEu ? *(_DWORD *)(a1 + 32) : 0);
  v5 = 0LL;
  v6 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit(v3, v6);
    RtlSetBit(v3, v6);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xDEu )
      *(_DWORD *)(a1 + 32) = 0;
    v5 = (v6 << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8));
  }
  W32ReleasePushLockExclusiveEx(v1);
  return v5;
}
