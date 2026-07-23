/*
 * XREFs of ExGetHeapFromType @ 0x140407EA0
 * Callers:
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHeapFromType(__int16 a1, unsigned int a2, int a3)
{
  void **v3; // rax
  __int64 v4; // rdx

  if ( a2 == 0x80000000 )
    a2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( a2 >= HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) )
    a2 = 0;
  v3 = &stru_140E6BFE8.SListFaultAddress + 1048 * a2;
  if ( (a1 & 0x10) != 0 )
  {
    if ( a3 )
      return qword_140EEF018;
    else
      return (__int64)v3[3];
  }
  else
  {
    if ( (a1 & 0x100) != 0 )
      v4 = 2LL;
    else
      v4 = (a1 & 0x80u) == 0;
    if ( a3 )
      v3 = (void **)&qword_140EEF000;
    return (__int64)v3[v4];
  }
}
