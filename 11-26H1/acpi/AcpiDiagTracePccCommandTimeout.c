/*
 * XREFs of AcpiDiagTracePccCommandTimeout @ 0x1400564CC
 * Callers:
 *     AcpiPccWatchdog @ 0x140065110 (AcpiPccWatchdog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14004B7C8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTracePccCommandTimeout(_QWORD *a1, _DWORD *a2, int a3, int a4, int a5, unsigned __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+34h] [rbp-65h] BYREF
  int v14; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  int *v16; // [rsp+50h] [rbp-49h]
  __int64 v17; // [rsp+58h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-39h] BYREF
  int *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  int *v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  int *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+100h] [rbp+67h] BYREF
  int v26; // [rsp+108h] [rbp+6Fh] BYREF

  v26 = a4;
  v25 = a3;
  v8 = MEMORY[0xFFFFF78000000008];
  if ( MEMORY[0xFFFFF78000000008] > a6 && MEMORY[0xFFFFF78000000008] - a6 > 0x861C46800LL )
  {
    if ( (unsigned int)dword_14008C310 > 5 && tlgKeywordOn((__int64)&dword_14008C310, 0x400000000000LL) )
    {
      v12 = v25;
      v19 = &v12;
      v13 = v26 - a5;
      v21 = &v13;
      v23 = &v14;
      v14 = v26;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_14008C310,
        (unsigned __int8 *)dword_14007D166,
        v9,
        v10,
        5u,
        &v18);
    }
    v11 = v26;
    *a1 = v8;
    *a2 = v11;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_PCC_COMMAND_TIMEOUT) )
    {
      UserData.Ptr = (unsigned __int64)&v25;
      *(_QWORD *)&UserData.Size = 4LL;
      v16 = &v26;
      v17 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        &ACPI_ETW_EVENT_PCC_COMMAND_TIMEOUT,
        0LL,
        2u,
        &UserData);
    }
  }
}
