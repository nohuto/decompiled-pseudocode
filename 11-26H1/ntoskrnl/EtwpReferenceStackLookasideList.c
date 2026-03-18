/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140AFACE4
 * Callers:
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x140AFABC8 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     KeAllocateCalloutStackEx @ 0x140AFADB0 (KeAllocateCalloutStackEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rdx
  struct _SLIST_ENTRY *v3; // rdi
  __int64 result; // rax

  v0 = 2
     * KeNumberProcessors_0
     * _InterlockedIncrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[8]);
  while ( *(int *)&stru_140E28440.PriorityFloorCounts[12] < v0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[12]) > v0 )
      goto LABEL_8;
    Pool2 = ExAllocatePool2(0x40uLL);
    v3 = (struct _SLIST_ENTRY *)Pool2;
    if ( !Pool2 )
      goto LABEL_8;
    *(_DWORD *)(Pool2 + 16) = -1;
    LOBYTE(v2) = 1;
    if ( (int)KeAllocateCalloutStackEx(2LL, v2, 0LL, Pool2 + 24) < 0 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_8:
      _InterlockedDecrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[12]);
      break;
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E28440.IoSelfBoostsEntry, v3);
  }
  result = *(unsigned int *)&stru_140E28440.PriorityFloorCounts[12];
  if ( *(int *)&stru_140E28440.PriorityFloorCounts[12] > *(int *)&stru_140E28440.PriorityFloorCounts[16] )
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)&stru_140E28440.PriorityFloorCounts[16],
                           *(__int32 *)&stru_140E28440.PriorityFloorCounts[12]);
  return result;
}
