/*
 * XREFs of CcCoalescingCallBack @ 0x140259D70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     CcCoalescingCallBackHelper @ 0x1403E3670 (CcCoalescingCallBackHelper.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E3B28 (CcForEachPrivateVolumeCacheMap.c)
 */

unsigned int *__fastcall CcCoalescingCallBack(int a1)
{
  __int64 v1; // rdi
  char v2; // si
  unsigned int *i; // rcx
  unsigned int *result; // rax
  unsigned int *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  char v8; // al
  char v9; // bp
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v10 = a1;
  v2 = 0;
  for ( i = 0LL; ; i = v5 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v5 = result;
    if ( !result )
      break;
    v6 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
    v7 = *((_QWORD *)v5 + 1);
    if ( v7 )
    {
      v1 = *((_QWORD *)v5 + 1);
      if ( *(_BYTE *)(v7 + 1294) < 2u )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1296)) <= 1 )
          __fastfail(0xEu);
        v2 = 1;
      }
    }
    KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v6);
    if ( v2 )
    {
      v8 = CcEnablePerVolumeLazyWriter
         ? CcForEachPrivateVolumeCacheMap(v1, CcCoalescingCallBackHelper, &v10)
         : CcCoalescingCallBackHelper(v1, 0LL, &v10);
      v9 = v8;
      CcDereferencePartition(v1);
      v2 = 0;
      if ( !v9 )
        return (unsigned int *)ObfDereferenceObjectWithTag(v5, 0x6E457350u);
    }
  }
  return result;
}
