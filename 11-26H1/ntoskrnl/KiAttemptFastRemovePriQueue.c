/*
 * XREFs of KiAttemptFastRemovePriQueue @ 0x1403F0270
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1403EEF80 (KiActivateWaiterPriQueue.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall KiAttemptFastRemovePriQueue(ULONG_PTR BugCheckParameter2, int *a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  unsigned int *v5; // rbp
  _QWORD *v7; // r10
  _QWORD *v8; // r8
  _DWORD *v9; // rsi
  int v10; // r9d
  __int64 v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = 0;
  v4 = a3;
  v5 = (unsigned int *)(BugCheckParameter2 + 664);
  v7 = 0LL;
  v8 = (_QWORD *)(BugCheckParameter2 + 536);
  v9 = (_DWORD *)(BugCheckParameter2 + 664);
  v10 = 32;
  v11 = 32LL;
  do
  {
    --v10;
    --v9;
    --v11;
    v12 = v3 + *v9;
    v8 -= 2;
    v3 = v12 - 1;
    if ( v11 != v4 )
      v3 = v12;
    if ( v3 >= *v5 )
      break;
    if ( (_QWORD *)*v8 != v8 )
    {
      v7 = *(_QWORD **)(BugCheckParameter2 + 16LL * v10 + 24);
      if ( !*v7 )
        KeBugCheckEx(
          0x96u,
          (ULONG_PTR)v7,
          BugCheckParameter2,
          *(ULONG_PTR *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64],
          v7[2]);
      --*(_DWORD *)(BugCheckParameter2 + 4);
      v13 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v14 = (_QWORD *)v7[1], (_QWORD *)*v14 != v7) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v7 = 0LL;
      *a2 = v10;
      return v7;
    }
  }
  while ( v11 > 0 );
  return v7;
}
