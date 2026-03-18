/*
 * XREFs of PopTraceThermalZoneActiveActivity @ 0x14060A1C0
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PopDiagSnapActiveActivity @ 0x14050D2A0 (PopDiagSnapActiveActivity.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void *__fastcall PopTraceThermalZoneActiveActivity(__int64 a1)
{
  __int64 v2; // rcx
  void *result; // rax
  void *v4; // rbx
  __int64 v5; // rsi
  char active; // al
  const WCHAR *v7; // r8
  int v8; // r9d
  unsigned __int8 v9[4]; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-69h] BYREF
  _DWORD *v13; // [rsp+68h] [rbp-49h]
  __int64 v14; // [rsp+70h] [rbp-41h]
  __int64 v15; // [rsp+78h] [rbp-39h]
  _DWORD v16[2]; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v17[16]; // [rsp+88h] [rbp-29h] BYREF
  int *v18; // [rsp+98h] [rbp-19h]
  __int64 v19; // [rsp+A0h] [rbp-11h]
  unsigned __int8 *v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  _BYTE *v22; // [rsp+B8h] [rbp+7h]
  int v23; // [rsp+C0h] [rbp+Fh]
  int v24; // [rsp+C4h] [rbp+13h]
  __int64 *v25; // [rsp+C8h] [rbp+17h]
  __int64 v26; // [rsp+D0h] [rbp+1Fh]
  _BYTE v27[40]; // [rsp+D8h] [rbp+27h] BYREF

  v9[0] = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v10 = 0;
  result = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x67446F50u);
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)(*((_QWORD *)result + 39) + 40LL);
    if ( v5 )
    {
      active = PopDiagSnapActiveActivity(a1 + 504, &v10, v9, (__int64)v27);
      if ( v10 )
      {
        if ( (active || PopThermalTelemetryVerbosity)
          && (unsigned int)dword_140E07598 > 5
          && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
        {
          v14 = 2LL;
          v13 = v16;
          v15 = *(_QWORD *)(v5 + 136);
          v16[0] = *(unsigned __int16 *)(v5 + 128);
          v16[1] = 0;
          tlgCreate1Sz_wchar_t((__int64)v17, v7);
          v10 = v8;
          v18 = &v10;
          *(_WORD *)v9 = v9[0];
          v23 = 4 * v9[0];
          v20 = v9;
          v25 = &v11;
          v22 = v27;
          v19 = 4LL;
          v21 = 2LL;
          v24 = 0;
          v11 = 0x1000000LL;
          v26 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07598,
            (unsigned __int8 *)&dword_14004AD74,
            0LL,
            0LL,
            9u,
            &v12);
        }
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  }
  return result;
}
