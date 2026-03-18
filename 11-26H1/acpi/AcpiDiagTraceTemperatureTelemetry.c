/*
 * XREFs of AcpiDiagTraceTemperatureTelemetry @ 0x140056A84
 * Callers:
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14004B7C8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceTemperatureTelemetry(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-29h] BYREF
  int *v8; // [rsp+70h] [rbp-9h]
  __int64 v9; // [rsp+78h] [rbp-1h]
  _DWORD *v10; // [rsp+80h] [rbp+7h]
  __int64 v11; // [rsp+88h] [rbp+Fh]
  wchar_t *Buffer; // [rsp+90h] [rbp+17h]
  _DWORD v13[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  __int64 v16; // [rsp+B0h] [rbp+37h]
  _DWORD v17[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( LOBYTE(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&DestinationString) >= 0
      && (unsigned int)dword_14008C310 > 5
      && tlgKeywordOn((__int64)&dword_14008C310, 0x400000000000LL) )
    {
      v5 = *(_DWORD *)(v2 + 328);
      v9 = 4LL;
      v8 = &v5;
      v10 = v13;
      Buffer = DestinationString.Buffer;
      v13[0] = DestinationString.Length;
      v14 = v17;
      v16 = *(_QWORD *)(v2 + 312);
      v17[0] = *(unsigned __int16 *)(v2 + 304);
      v11 = 2LL;
      v13[1] = 0;
      v15 = 2LL;
      v17[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14008C310, (unsigned __int8 *)dword_14007D227, v3, v4, 7u, &v7);
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
