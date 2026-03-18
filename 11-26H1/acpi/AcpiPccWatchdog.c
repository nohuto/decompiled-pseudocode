/*
 * XREFs of AcpiPccWatchdog @ 0x140065110
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTracePccCommandTimeout @ 0x1400564CC (AcpiDiagTracePccCommandTimeout.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccIsCommandCompleteSet @ 0x1400653E4 (AcpiPccIsCommandCompleteSet.c)
 */

char __fastcall AcpiPccWatchdog(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 560);
  if ( v2 )
  {
    if ( (unsigned __int8)AcpiPccIsCommandCompleteSet(a2) )
    {
LABEL_5:
      LOBYTE(v2) = AcpiPccCommandComplete(a2, 1);
      return v2;
    }
    if ( ++*(_DWORD *)(a2 + 776) > (unsigned int)AcpiPccWatchdogRetryCount )
    {
      AcpiDiagTracePccCommandTimeout(
        (_QWORD *)(a2 + 792),
        (_DWORD *)(a2 + 784),
        *(_DWORD *)(a2 + 4),
        ++*(_DWORD *)(a2 + 780),
        *(_DWORD *)(a2 + 784),
        *(_QWORD *)(a2 + 792));
      goto LABEL_5;
    }
    LOBYTE(v2) = KeSetTimer2(a2 + 568, -10LL * *(unsigned int *)(a2 + 24), 0LL, 0LL);
  }
  return v2;
}
