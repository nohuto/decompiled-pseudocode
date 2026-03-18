/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1402E2700
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402E2850 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B4870 (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rbp
  ULONG ClearBits; // esi
  unsigned int v5; // eax
  unsigned int v6; // r14d
  _QWORD *v7; // r13
  __int64 v8; // r12
  void *v9; // r15
  __int64 v10; // rdi

  v1 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xFCu ? *(_DWORD *)(a1 + 32) : 0);
  if ( ClearBits == -1 )
    goto LABEL_10;
  v5 = *(_DWORD *)(a1 + 36);
  v6 = ClearBits / 0x24;
  if ( v5 >= 7 || v6 < v5 )
  {
    v7 = (_QWORD *)(a1 + 8);
    LODWORD(v8) = v6 << 12;
    goto LABEL_7;
  }
  v7 = (_QWORD *)(a1 + 8);
  v8 = v6 << 12;
  v9 = (void *)(v8 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v9, 4096LL) < 0 )
  {
LABEL_10:
    W32ReleasePushLockExclusive(v1);
    return 0LL;
  }
  memset_0(v9, 0, 0x1000uLL);
  ++*(_DWORD *)(a1 + 36);
LABEL_7:
  RtlTestBit(v3, ClearBits);
  RtlSetBit(v3, ClearBits);
  if ( ++*(_DWORD *)(a1 + 32) >= 0xFCu )
    *(_DWORD *)(a1 + 32) = 0;
  v10 = (unsigned int)v8 + (*v7 ^ *(_QWORD *)(a1 + 16));
  W32ReleasePushLockExclusive(v1);
  return v10 + 112 * (ClearBits % 0x24);
}
