/*
 * XREFs of AcpiDiagTracePccReleaseSubspace @ 0x140056654
 * Callers:
 *     AcpiPccReleaseSubspace @ 0x140064EC0 (AcpiPccReleaseSubspace.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccReleaseSubspace(int a1, char a2, char a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  char *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  int v14; // [rsp+90h] [rbp+10h] BYREF
  char v15; // [rsp+98h] [rbp+18h] BYREF
  char v16; // [rsp+A0h] [rbp+20h] BYREF
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v4 = &retaddr;
  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v4) = EtwEventEnabled(
                   *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                   &ACPI_ETW_EVENT_PCC_RELEASE_SUBSPACE);
    if ( (_BYTE)v4 )
    {
      UserData.Ptr = (unsigned __int64)&v14;
      v8 = 1LL;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = &v15;
      v10 = 1LL;
      v9 = &v16;
      v11 = &v17;
      v12 = 4LL;
      LOBYTE(v4) = EtwWrite(
                     *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                     &ACPI_ETW_EVENT_PCC_RELEASE_SUBSPACE,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v4;
}
