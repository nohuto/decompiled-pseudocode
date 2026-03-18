/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140B6A608
 * Callers:
 *     NtAcquireCrossVmMutant @ 0x140841E80 (NtAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140846380 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140846400 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140846480 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1408464D0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140846514 (ExpPulseCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
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
