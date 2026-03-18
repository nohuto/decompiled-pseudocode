/*
 * XREFs of ACPIGpeHalEnableDisableEvents @ 0x14002D530
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x140021160 (ACPIGpeEnableDisableEvents.c)
 *     ACPIReadGpeStatusRegister @ 0x14002D5E0 (ACPIReadGpeStatusRegister.c)
 *     READ_PM1_STATUS @ 0x14002EE78 (READ_PM1_STATUS.c)
 *     memset @ 0x140072740 (memset.c)
 */

void __fastcall ACPIGpeHalEnableDisableEvents(char a1)
{
  _WORD *v1; // rbx
  __int64 v2; // rsi
  _BYTE *v4; // rbx
  PVOID v5; // rcx

  v1 = AcpiInformation;
  v2 = 0LL;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( a1 )
    {
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          v4 = GpeSavedWakeStatus;
          v4[v2] = ACPIReadGpeStatusRegister((unsigned int)v2);
          v2 = (unsigned int)(v2 + 1);
          v1 = AcpiInformation;
        }
        while ( (unsigned int)v2 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
      v1[58] = READ_PM1_STATUS();
      AcpiPowerSavedGpeBitsValid = 1;
    }
    else
    {
      v5 = GpeSavedWakeMask;
      *((_WORD *)AcpiInformation + 57) = 0;
      memset(v5, 0, *((unsigned __int16 *)AcpiInformation + 51));
    }
    ACPIGpeEnableDisableEvents(a1);
  }
}
