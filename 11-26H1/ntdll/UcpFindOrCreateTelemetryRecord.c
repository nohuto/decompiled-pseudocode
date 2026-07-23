/*
 * XREFs of UcpFindOrCreateTelemetryRecord @ 0x180157A68
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x180157700 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800EAAF8 (_tlgKeywordOn.c)
 *     UcpCreateTelemetryRecord @ 0x1801579D4 (UcpCreateTelemetryRecord.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

_QWORD *__fastcall UcpFindOrCreateTelemetryRecord(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *TelemetryRecord; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v1 = UcpTriggeredList;
  v3 = 0LL;
  while ( (__int64 *)v1 != &UcpTriggeredList )
  {
    if ( *(_QWORD *)(v1 - 32) == *(_QWORD *)a1
      && *(_DWORD *)(v1 + 24) == *(_DWORD *)(a1 + 8)
      && *(_DWORD *)(v1 + 28) == *(_DWORD *)(a1 + 12)
      && *(_DWORD *)(v1 + 32) == *(_DWORD *)(a1 + 16) )
    {
      v3 = (_QWORD *)(v1 - 32);
      break;
    }
    v1 = *(_QWORD *)v1;
  }
  if ( v3 )
    return v3;
  LODWORD(v4) = UcpTriggeredNodeCount;
  if ( (unsigned int)UcpTriggeredNodeCount < 0x64 )
  {
    TelemetryRecord = UcpCreateTelemetryRecord((__int64 *)a1);
    v3 = TelemetryRecord;
    if ( TelemetryRecord )
    {
      v9 = UcpTriggeredList;
      v10 = TelemetryRecord + 4;
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList )
        __fastfail(3u);
      *v10 = UcpTriggeredList;
      v10[1] = &UcpTriggeredList;
      *(_QWORD *)(v9 + 8) = v10;
      UcpTriggeredList = (__int64)v10;
    }
    return v3;
  }
  if ( !UcpMaxTriggeredNodeExcceded && UcIsTraceLoggingInitialized == 1 )
  {
    if ( (unsigned int)dword_1801C46C8 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1801C46C8, 0x400000000000LL) )
      {
        v11 = v4;
        v13 = &v11;
        v14 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned __int8 *)dword_18019AFAA, v6, v4, 3u, &v12);
        LODWORD(v4) = UcpTriggeredNodeCount;
      }
    }
    UcpMaxTriggeredNodeExcceded = 1;
  }
  UcpTriggeredNodeCount = v4 + 1;
  return 0LL;
}
