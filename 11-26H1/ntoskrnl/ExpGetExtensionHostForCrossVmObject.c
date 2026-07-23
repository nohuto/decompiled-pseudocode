/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140B6D818
 * Callers:
 *     NtAcquireCrossVmMutant @ 0x140847EB0 (NtAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x14084C5E0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x14084C660 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x14084C6E0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x14084C730 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x14084C774 (ExpPulseCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 */

unsigned __int64 __fastcall ExpGetExtensionHostForCrossVmObject(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  void *SparePtr; // rcx

  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr);
  if ( result )
  {
    SparePtr = WheapConfigTableLock.WaitBlock[0].SparePtr;
LABEL_3:
    *a2 = SparePtr;
    return result;
  }
  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink);
  if ( result )
  {
    SparePtr = WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
    goto LABEL_3;
  }
  return result;
}
