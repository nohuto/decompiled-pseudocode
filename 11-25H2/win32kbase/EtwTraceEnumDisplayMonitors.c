/*
 * XREFs of EtwTraceEnumDisplayMonitors @ 0x14004D2F8
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x14004D210 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x14004D478 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x14004D500 (InsertEventEntryInLookUpTable.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceEnumDisplayMonitors(unsigned __int8 a1, unsigned __int8 a2)
{
  char v2; // al
  int v3; // r8d
  int v4; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v5[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-29h] BYREF
  __int64 v7; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v9; // [rsp+70h] [rbp+7h]
  int v10; // [rsp+78h] [rbp+Fh]
  int v11; // [rsp+7Ch] [rbp+13h]
  _DWORD *v12; // [rsp+80h] [rbp+17h]
  int v13; // [rsp+88h] [rbp+1Fh]
  int v14; // [rsp+8Ch] [rbp+23h]
  int *v15; // [rsp+90h] [rbp+27h]
  int v16; // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+9Ch] [rbp+33h]
  __int64 *v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+A8h] [rbp+3Fh]
  int v20; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_14029EF38 > 5
    && (qword_14029EF48 & 0x400000000000LL) != 0
    && (qword_14029EF50 & 0x400000000000LL) == qword_14029EF50 )
  {
    v20 = 0;
    v17 = 0;
    v14 = 0;
    v4 = a2;
    v5[0] = a1;
    v18 = &v7;
    v15 = &v4;
    v12 = v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029EF40;
    v16 = 4;
    v13 = 4;
    v7 = 1LL;
    v19 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_14029EF40;
    v9 = &unk_14027894D;
    UserData.Reserved = 2;
    v10 = 52;
    v11 = 1;
    v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14029EF60 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v2 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
      if ( v2 )
      {
        LOBYTE(v3) = 5;
        InsertEventEntryInLookUpTable(
          (unsigned int)&dword_14029EF38,
          (unsigned int)&EventDescriptor,
          v3,
          (unsigned int)&UserData,
          v2);
      }
      else
      {
        EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
      }
    }
  }
}
