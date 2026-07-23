/*
 * XREFs of UcpFindOrCreateTelemetryRecord @ 0x1407178E0
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x140717648 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     UcpCreateTelemetryRecord @ 0x14071784C (UcpCreateTelemetryRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall UcpFindOrCreateTelemetryRecord(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 TelemetryRecord; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v1 = UcpTriggeredList;
  v3 = 0LL;
  while ( (__int64 *)v1 != &UcpTriggeredList )
  {
    if ( *(_QWORD *)(v1 - 32) == *(_QWORD *)a1
      && *(_DWORD *)(v1 + 24) == *(_DWORD *)(a1 + 8)
      && *(_DWORD *)(v1 + 28) == *(_DWORD *)(a1 + 12)
      && *(_DWORD *)(v1 + 32) == *(_DWORD *)(a1 + 16) )
    {
      v3 = v1 - 32;
      break;
    }
    v1 = *(_QWORD *)v1;
  }
  if ( v3 )
    return v3;
  if ( (unsigned int)UcpTriggeredNodeCount < 0x64 )
  {
    TelemetryRecord = UcpCreateTelemetryRecord((__int64 *)a1);
    v3 = TelemetryRecord;
    if ( TelemetryRecord )
    {
      v7 = UcpTriggeredList;
      v8 = (_QWORD *)(TelemetryRecord + 32);
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList )
        __fastfail(3u);
      *v8 = UcpTriggeredList;
      v8[1] = &UcpTriggeredList;
      *(_QWORD *)(v7 + 8) = v8;
      UcpTriggeredList = (__int64)v8;
    }
    return v3;
  }
  if ( *(_WORD *)&WheapPfaLock.WaitBlockFill11[81] == 1 )
  {
    if ( (unsigned int)dword_140E0A020 > 4 && tlgKeywordOn((__int64)&dword_140E0A020, 0x400000000000LL) )
    {
      v9 = v4;
      v11 = &v9;
      v12 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A020,
        (unsigned __int8 *)byte_14005B609,
        0LL,
        0LL,
        3u,
        &v10);
    }
    WheapPfaLock.WaitBlockFill6[82] = 1;
  }
  ++UcpTriggeredNodeCount;
  return 0LL;
}
