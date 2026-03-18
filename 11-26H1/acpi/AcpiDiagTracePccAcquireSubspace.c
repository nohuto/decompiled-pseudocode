/*
 * XREFs of AcpiDiagTracePccAcquireSubspace @ 0x14004D554
 * Callers:
 *     AcpiPccAcquireSubspaceCore @ 0x140043D58 (AcpiPccAcquireSubspaceCore.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccAcquireSubspace(int a1, char a2, char a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-11h] BYREF
  char *v8; // [rsp+48h] [rbp-1h]
  __int64 v9; // [rsp+50h] [rbp+7h]
  char *v10; // [rsp+58h] [rbp+Fh]
  __int64 v11; // [rsp+60h] [rbp+17h]
  int *v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  char *v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+57h] BYREF
  int v17; // [rsp+A8h] [rbp+5Fh] BYREF
  char v18; // [rsp+B0h] [rbp+67h] BYREF
  char v19; // [rsp+B8h] [rbp+6Fh] BYREF
  int v20; // [rsp+C0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v5) = EtwEventEnabled(
                   *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                   &ACPI_ETW_EVENT_PCC_ACQUIRE_SUBSPACE);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = (unsigned __int64)&v17;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v18;
      v9 = 1LL;
      v10 = &v19;
      v11 = 1LL;
      v12 = &v20;
      v14 = &a5;
      v13 = 4LL;
      v15 = 4LL;
      LOBYTE(v5) = EtwWrite(
                     *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                     &ACPI_ETW_EVENT_PCC_ACQUIRE_SUBSPACE,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v5;
}
