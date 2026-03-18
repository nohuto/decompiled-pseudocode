/*
 * XREFs of AcpiDiagTracePccPlatformInterrupt @ 0x140052364
 * Callers:
 *     ACPIPccProcessSci @ 0x14005226C (ACPIPccProcessSci.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTracePccPlatformInterrupt(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
           &ACPI_ETW_EVENT_PCC_PLATFORM_INTERRUPT) )
    {
      UserData.Ptr = (unsigned __int64)&v2;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(
        *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        &ACPI_ETW_EVENT_PCC_PLATFORM_INTERRUPT,
        0LL,
        1u,
        &UserData);
    }
  }
}
