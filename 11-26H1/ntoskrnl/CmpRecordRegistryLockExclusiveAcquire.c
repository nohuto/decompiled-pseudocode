/*
 * XREFs of CmpRecordRegistryLockExclusiveAcquire @ 0x140260570
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x140262070 (CmpGetThreadInfo.c)
 */

__int64 CmpRecordRegistryLockExclusiveAcquire()
{
  __int64 result; // rax

  result = CmpGetThreadInfo();
  if ( !*(_QWORD *)(result + 8) )
    *(_QWORD *)(result + 8) = 1LL;
  ++*(_DWORD *)(result + 16);
  return result;
}
