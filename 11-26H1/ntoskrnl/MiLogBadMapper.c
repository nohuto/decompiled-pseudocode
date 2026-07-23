/*
 * XREFs of MiLogBadMapper @ 0x140451340
 * Callers:
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ExtractAggregateFieldTypes @ 0x1404515B0 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogBadMapper(__int64 a1, __int64 a2, int a3, EVENT_DESCRIPTOR *a4)
{
  void (__fastcall *v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rax
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // rdi
  bool v8; // cc
  _QWORD *FirstArgument; // rbx
  char v10; // al
  int v11; // r8d
  int ActivityId; // [rsp+28h] [rbp-E0h]
  int RelatedActivityId; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v22; // [rsp+98h] [rbp-70h]
  int v23; // [rsp+A0h] [rbp-68h]
  int v24; // [rsp+A4h] [rbp-64h]
  __int64 *p_EventDescriptor; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  _DWORD *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  unsigned __int64 Keyword; // [rsp+E8h] [rbp-20h]
  _DWORD v34[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v4 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))&retaddr;
  p_EventDescriptor_8 = &EventDescriptor_8;
  if ( a4 )
    p_EventDescriptor_8 = a4;
  v8 = *(_DWORD *)stru_140E366D8.FirstArgument <= 5u;
  EventDescriptor_8 = 0LL;
  if ( !v8 )
  {
    LOBYTE(v4) = *((_BYTE *)stru_140E366D8.FirstArgument + 16);
    if ( (char)v4 < 0 )
    {
      v4 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(*((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x80LL);
      if ( v4 == *((void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))stru_140E366D8.FirstArgument
                 + 3) )
      {
        EventDescriptor = a2;
        p_EventDescriptor = &EventDescriptor;
        v26 = 8LL;
        v27 = &v15;
        LODWORD(v15) = a3;
        v28 = 4LL;
        LOBYTE(v4) = tlgWriteEx_EtwWriteEx(
                       (int)stru_140E366D8.FirstArgument,
                       (int)&word_140058C8A,
                       a3,
                       1,
                       ActivityId,
                       RelatedActivityId,
                       4u,
                       (__int64)&UserData);
      }
    }
  }
  FirstArgument = stru_140E366D8.FirstArgument;
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000000080LL) != 0 )
  {
    v4 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(*((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x400000000080LL);
    if ( v4 == *((void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))stru_140E366D8.FirstArgument
               + 3) )
    {
      v18 = a2;
      v32 = 2LL;
      p_EventDescriptor = &v18;
      v27 = &v19;
      v29 = &v15;
      v31 = v34;
      Keyword = p_EventDescriptor_8->Keyword;
      v34[0] = p_EventDescriptor_8->Id;
      v20 = 2164260864LL;
      v35 = &v20;
      UserData.Ptr = *((_QWORD *)stru_140E366D8.FirstArgument + 1);
      v26 = 8LL;
      v19 = a2;
      v28 = 8LL;
      LODWORD(v15) = a3;
      v30 = 4LL;
      v34[1] = 0;
      v36 = 8LL;
      *(_QWORD *)&EventDescriptor_8.Id = 0x50B000000LL;
      EventDescriptor_8.Keyword = 0x400000000080LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v22 = &dword_140058CD4;
      UserData.Reserved = 2;
      v23 = 121;
      v24 = 1;
      LODWORD(EventDescriptor) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v4 = TlgAggregateInternalRegisteredProviderEtwCallback;
      if ( *((void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))stru_140E366D8.FirstArgument
           + 5) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v10 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
        if ( v10 )
        {
          LOBYTE(v11) = 8;
          LOBYTE(v4) = InsertEventEntryInLookUpTable(
                         (_DWORD)FirstArgument,
                         (unsigned int)&EventDescriptor_8,
                         v11,
                         (unsigned int)&UserData,
                         v10);
        }
        else
        {
          LOBYTE(v4) = EtwWriteEx(FirstArgument[4], &EventDescriptor_8, 0LL, 0, 0LL, 0LL, 8u, &UserData);
        }
      }
    }
  }
  return (char)v4;
}
