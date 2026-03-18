/*
 * XREFs of EtwTraceEnumDisplayMonitors @ 0x14000B3E0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x140199A90 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x14000B558 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x14000B5E0 (InsertEventEntryInLookUpTable.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  int *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  __int64 *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9F58 > 5
    && (qword_1402A9F68 & 0x400000000000LL) != 0
    && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70 )
  {
    v4 = a2;
    v5[0] = a1;
    v16 = &v7;
    v14 = &v4;
    v12 = v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402A9F60;
    v7 = 1LL;
    v17 = 8LL;
    v15 = 4LL;
    v13 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9F60;
    v9 = &unk_140282C48;
    UserData.Reserved = 2;
    v10 = 52;
    v11 = 1;
    v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1402A9F80 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v2 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
      if ( v2 )
      {
        LOBYTE(v3) = 5;
        InsertEventEntryInLookUpTable(
          (unsigned int)&dword_1402A9F58,
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
