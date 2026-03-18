/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x140510620
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagSnapPassiveHistogram @ 0x1404379F4 (PopDiagSnapPassiveHistogram.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void *__fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  void *result; // rax
  void *v3; // rbx
  __int64 v4; // rsi
  const WCHAR *v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v7; // [rsp+58h] [rbp-B0h]
  __int64 v8; // [rsp+60h] [rbp-A8h]
  __int64 v9; // [rsp+68h] [rbp-A0h]
  _DWORD v10[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v11[16]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp-80h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  void *v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  _DWORD v16[24]; // [rsp+A8h] [rbp-60h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(*((_QWORD *)result + 39) + 40LL);
    if ( v4
      && (PopDiagSnapPassiveHistogram(a1 + 504, v16) || PopThermalTelemetryVerbosity)
      && (unsigned int)dword_140E07598 > 5
      && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
    {
      v8 = 2LL;
      v7 = v10;
      v9 = *(_QWORD *)(v4 + 136);
      v10[0] = *(unsigned __int16 *)(v4 + 128);
      v10[1] = 0;
      tlgCreate1Sz_wchar_t((__int64)v11, v5);
      v13 = 84LL;
      v14 = &unk_140F10E80;
      v12 = v16;
      v15 = 21LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_14004ACFD, 0LL, 0LL, 7u, &v6);
    }
    return (void *)ObfDereferenceObjectWithTag(v3, 0x67446F50u);
  }
  return result;
}
