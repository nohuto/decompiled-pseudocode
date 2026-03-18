/*
 * XREFs of AcpiDiagTracePccCommandComplete @ 0x14004DA4C
 * Callers:
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccCommandComplete(int a1, char a2, int a3, char a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-41h] BYREF
  char *v10; // [rsp+48h] [rbp-31h]
  __int64 v11; // [rsp+50h] [rbp-29h]
  int *v12; // [rsp+58h] [rbp-21h]
  __int64 v13; // [rsp+60h] [rbp-19h]
  char *v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  char *v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  char *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  char *v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+47h] BYREF
  int v23; // [rsp+C8h] [rbp+4Fh] BYREF
  char v24; // [rsp+D0h] [rbp+57h] BYREF
  int v25; // [rsp+D8h] [rbp+5Fh] BYREF
  char v26; // [rsp+E0h] [rbp+67h] BYREF

  v7 = &retaddr;
  v26 = a4;
  v25 = a3;
  v24 = a2;
  v23 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v7) = EtwEventEnabled(
                   *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                   &ACPI_ETW_EVENT_PCC_COMMAND_COMPLETE);
    if ( (_BYTE)v7 )
    {
      UserData.Ptr = (unsigned __int64)&v23;
      *(_QWORD *)&UserData.Size = 4LL;
      v10 = &v24;
      v11 = 1LL;
      v12 = &v25;
      v13 = 4LL;
      v14 = &v26;
      v16 = &a5;
      v18 = &a6;
      v20 = &a7;
      v15 = 1LL;
      v17 = 1LL;
      v19 = 8LL;
      v21 = 4LL;
      LOBYTE(v7) = EtwWrite(
                     *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                     &ACPI_ETW_EVENT_PCC_COMMAND_COMPLETE,
                     0LL,
                     7u,
                     &UserData);
    }
  }
  return (char)v7;
}
