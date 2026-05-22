/*
 * XREFs of ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800E900C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE168 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall LampArrayTelemetry::LogUnexpectedUsage(LampArrayTelemetry *this)
{
  __int64 v1; // rcx
  __int16 v2; // r8
  __int16 v3; // r9
  __int16 v4; // [rsp+30h] [rbp-68h] BYREF
  __int16 v5; // [rsp+32h] [rbp-66h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  __int16 *v9; // [rsp+70h] [rbp-28h]
  __int64 v10; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_180251248 > 5 && tlgKeywordOn((__int64)&dword_180251248, 0x400000000000LL) )
  {
    v4 = v2;
    v9 = &v4;
    v5 = v3;
    v7 = &v5;
    v10 = 2LL;
    v8 = 2LL;
    tlgWriteTransfer_EventWriteTransfer(v1, byte_180216826, 0LL, 0LL, 4u, &v6);
  }
}
