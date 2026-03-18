/*
 * XREFs of AcpiDiagTraceModernStandbyStateNotification @ 0x1400AB1F8
 * Callers:
 *     ACPIPepWnfCallback @ 0x1400B4A20 (ACPIPepWnfCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceModernStandbyStateNotification(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v3; // [rsp+40h] [rbp-28h]
  __int64 v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+70h] [rbp+8h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
           &ACPI_ETW_EVENT_MS_STATE_NOTIFICATION) )
    {
      UserData.Ptr = (unsigned __int64)&v5;
      *(_QWORD *)&UserData.Size = 4LL;
      v3 = &v6;
      v4 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        &ACPI_ETW_EVENT_MS_STATE_NOTIFICATION,
        0LL,
        2u,
        &UserData);
    }
  }
}
