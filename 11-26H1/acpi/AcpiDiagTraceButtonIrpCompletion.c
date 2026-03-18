/*
 * XREFs of AcpiDiagTraceButtonIrpCompletion @ 0x14002FA8C
 * Callers:
 *     ACPIButtonCompletePendingIrps @ 0x14002F914 (ACPIButtonCompletePendingIrps.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceButtonIrpCompletion(__int64 a1, int a2, __int64 a3)
{
  __int16 v5; // [rsp+30h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp+7h]
  int v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+6Ch] [rbp+13h]
  int *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF

  v15 = a2;
  v5 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
    && EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_BUTTON_IRP_COMPLETION)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&DestinationString) >= 0 )
  {
    v5 = DestinationString.Length >> 1;
    UserData.Ptr = (unsigned __int64)&v5;
    Buffer = DestinationString.Buffer;
    v11 = &v15;
    v9 = 2 * (DestinationString.Length >> 1);
    *(_QWORD *)&UserData.Size = 2LL;
    v10 = 0;
    v12 = 4LL;
    v13 = a3;
    v14 = 8LL;
    EtwWrite(
      *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
      &ACPI_ETW_EVENT_BUTTON_IRP_COMPLETION,
      0LL,
      4u,
      &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
