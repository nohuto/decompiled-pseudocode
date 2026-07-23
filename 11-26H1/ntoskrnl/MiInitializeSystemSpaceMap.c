/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140D0033C
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     MiInitializePteInfo @ 0x140D05208 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemSpaceMap()
{
  __int64 result; // rax
  void *v1; // rdi
  unsigned int v2; // ebx

  result = ExAllocatePoolMm(
             64LL,
             144LL * (unsigned int)(unsigned __int16)KeNumberNodes,
             1883466061,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v1 = (void *)result;
  if ( result )
  {
    *(_QWORD *)&stru_140E34D88.Header.Lock = 0LL;
    stru_140E34D88.Header.WaitListHead.Flink = 0LL;
    v2 = MiInitializePteInfo((unsigned int)&unk_140E34B60, 17, 0, 4, qword_140E37DF0, qword_140E37DF8, 16, result);
    if ( !v2 )
      ExFreePoolWithTag(v1, 0);
    return v2;
  }
  return result;
}
