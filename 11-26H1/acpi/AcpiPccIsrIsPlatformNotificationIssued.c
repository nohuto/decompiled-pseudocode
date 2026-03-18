/*
 * XREFs of AcpiPccIsrIsPlatformNotificationIssued @ 0x1400654A4
 * Callers:
 *     ACPIInterruptServiceRoutine @ 0x140030040 (ACPIInterruptServiceRoutine.c)
 *     ACPIPccProcessSci @ 0x14005226C (ACPIPccProcessSci.c)
 *     ACPIPccInterruptServiceRoutine @ 0x140064810 (ACPIPccInterruptServiceRoutine.c)
 * Callees:
 *     AcpiPccIsCommandCompleteSet @ 0x1400653E4 (AcpiPccIsCommandCompleteSet.c)
 */

bool __fastcall AcpiPccIsrIsPlatformNotificationIssued(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        return AcpiPccIsCommandCompleteSet((unsigned __int8 *)a1);
      }
      else if ( v2 == 2 )
      {
        return !AcpiPccIsCommandCompleteSet((unsigned __int8 *)a1);
      }
    }
    else
    {
      return (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 6LL) & 8) != 0;
    }
  }
  return v1;
}
