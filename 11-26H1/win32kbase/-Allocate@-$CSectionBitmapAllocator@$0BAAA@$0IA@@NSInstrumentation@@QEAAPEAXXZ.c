/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1401DC9EC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD03C (-Allocate@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<4096,128>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // r12
  ULONG ClearBits; // eax
  __int64 v5; // r14
  ULONG v6; // esi
  ULONG v7; // ebp
  void *v8; // r13

  v1 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0x20u ? *(_DWORD *)(a1 + 32) : 0);
  v5 = 0LL;
  v6 = ClearBits;
  if ( ClearBits != -1 )
  {
    v7 = ClearBits >> 5 << 12;
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v8 = (void *)(v7 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v8, 4096LL) < 0 )
        goto LABEL_8;
      memset(v8, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
    RtlTestBit(v3, v6);
    RtlSetBit(v3, v6);
    if ( ++*(_DWORD *)(a1 + 32) >= 0x20u )
      *(_DWORD *)(a1 + 32) = 0;
    v5 = v7 + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + ((unsigned __int8)(v6 & 0x1F) << 7);
  }
LABEL_8:
  W32ReleasePushLockExclusiveEx(v1);
  return v5;
}
