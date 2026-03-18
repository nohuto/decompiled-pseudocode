/*
 * XREFs of AcpiPccIsCommandCompleteSet @ 0x1400653E4
 * Callers:
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccWatchdog @ 0x140065110 (AcpiPccWatchdog.c)
 *     AcpiPccIsInterruptIssued @ 0x140065440 (AcpiPccIsInterruptIssued.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x1400654A4 (AcpiPccIsrIsPlatformNotificationIssued.c)
 * Callees:
 *     AcpiPccReadRegister @ 0x140051844 (AcpiPccReadRegister.c)
 */

bool __fastcall AcpiPccIsCommandCompleteSet(unsigned __int8 *a1)
{
  char v2; // cl
  unsigned __int8 v3; // al
  char v4; // cl

  v2 = 0;
  if ( a1 )
  {
    v3 = *a1;
    if ( *a1 == 0xFF )
    {
      v4 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 14LL);
      return v4 & 1;
    }
    if ( v3 < 3u )
    {
      v4 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 6LL);
      return v4 & 1;
    }
    if ( (unsigned __int8)(v3 - 3) <= 1u )
      return (AcpiPccReadRegister(a1 + 264) & *((_QWORD *)a1 + 35)) != 0;
  }
  return v2;
}
