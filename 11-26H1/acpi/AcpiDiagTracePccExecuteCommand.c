/*
 * XREFs of AcpiDiagTracePccExecuteCommand @ 0x14004C334
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x140064B50 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccExecuteCommand(int a1, char a2, char a3, char a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  char *v9; // [rsp+48h] [rbp-19h]
  __int64 v10; // [rsp+50h] [rbp-11h]
  char *v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  char *v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  char *v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  char *v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+4Fh] BYREF
  int v20; // [rsp+B8h] [rbp+57h] BYREF
  char v21; // [rsp+C0h] [rbp+5Fh] BYREF
  char v22; // [rsp+C8h] [rbp+67h] BYREF
  char v23; // [rsp+D0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v6) = EtwEventEnabled(
                   *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                   &ACPI_ETW_EVENT_PCC_EXECUTE_COMMAND);
    if ( (_BYTE)v6 )
    {
      UserData.Ptr = (unsigned __int64)&v20;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = &v21;
      v10 = 1LL;
      v11 = &v22;
      v12 = 1LL;
      v13 = &v23;
      v15 = &a5;
      v17 = &a6;
      v14 = 1LL;
      v16 = 8LL;
      v18 = 4LL;
      LOBYTE(v6) = EtwWrite(
                     *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                     &ACPI_ETW_EVENT_PCC_EXECUTE_COMMAND,
                     0LL,
                     6u,
                     &UserData);
    }
  }
  return (char)v6;
}
