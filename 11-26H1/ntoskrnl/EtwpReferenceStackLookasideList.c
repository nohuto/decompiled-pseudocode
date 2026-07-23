/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140AB3B84
 * Callers:
 *     EtwpInitializeClassicStackTracing @ 0x140AB3A68 (EtwpInitializeClassicStackTracing.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     KeAllocateCalloutStackEx @ 0x140AB3C50 (KeAllocateCalloutStackEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rdx
  _SLIST_ENTRY *v3; // rdi
  __int64 result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement((volatile signed __int32 *)&stru_140E285C0.MutantListHead.Blink);
  while ( SHIDWORD(stru_140E285C0.MutantListHead.Blink) < v0 )
  {
    if ( _InterlockedIncrement((_DWORD *)&stru_140E285C0.MutantListHead.Blink + 1) > v0 )
      goto LABEL_8;
    Pool2 = ExAllocatePool2(0x40uLL);
    v3 = (_SLIST_ENTRY *)Pool2;
    if ( !Pool2 )
      goto LABEL_8;
    *(_DWORD *)(Pool2 + 16) = -1;
    LOBYTE(v2) = 1;
    if ( (int)KeAllocateCalloutStackEx(2LL, v2, 0LL, Pool2 + 24) < 0 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_8:
      _InterlockedDecrement((_DWORD *)&stru_140E285C0.MutantListHead.Blink + 1);
      break;
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E285C0.ThreadListEntry.Blink, v3);
  }
  result = HIDWORD(stru_140E285C0.MutantListHead.Blink);
  if ( SHIDWORD(stru_140E285C0.MutantListHead.Blink) > *(int *)&stru_140E285C0.AbWaitEntryCount )
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)&stru_140E285C0.AbWaitEntryCount,
                           SHIDWORD(stru_140E285C0.MutantListHead.Blink));
  return result;
}
