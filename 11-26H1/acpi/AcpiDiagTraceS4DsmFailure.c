/*
 * XREFs of AcpiDiagTraceS4DsmFailure @ 0x1400AB2A4
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceS4DsmFailure(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
           &ACPI_ETW_EVENT_S4_DSM_EVALUATION_FAILED) )
    {
      UserData.Ptr = (unsigned __int64)&v2;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(
        *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        &ACPI_ETW_EVENT_S4_DSM_EVALUATION_FAILED,
        0LL,
        1u,
        &UserData);
    }
  }
}
