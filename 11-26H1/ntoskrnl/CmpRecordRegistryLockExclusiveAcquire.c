/*
 * XREFs of CmpRecordRegistryLockExclusiveAcquire @ 0x140261008
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x140262B00 (CmpGetThreadInfo.c)
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
