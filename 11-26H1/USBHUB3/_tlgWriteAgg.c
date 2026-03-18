/*
 * XREFs of _tlgWriteAgg @ 0x1400465A4
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x14001A9F0 (HUBPDO_ReportDeviceFailure.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140089B94 (HUBREG_QueryHubErrataFlags.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x1400460D4 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  NTSTATUS result; // eax
  unsigned __int64 Ptr; // rax
  unsigned __int8 v10; // dl
  unsigned __int64 v11; // r10
  char *v12; // rcx
  char v13; // al
  char v16; // al
  char v17; // r9
  __int64 v18; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = (unsigned __int64)off_14006D2D8;
  UserData->Size = *(unsigned __int16 *)off_14006D2D8;
  UserData->Reserved = 2;
  UserData[1].Ptr = (unsigned __int64)v7;
  UserData[1].Size = *v7;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14006D2F8 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    Ptr = UserData[1].Ptr;
    v10 = 0;
    v11 = Ptr + UserData[1].Size;
    v12 = (char *)(Ptr + 2);
    do
      v13 = *v12++;
    while ( v13 < 0 );
    while ( *v12++ )
      ;
    while ( (unsigned __int64)v12 < v11 )
    {
      while ( *v12++ )
        ;
      if ( *v12 >= 0 )
        break;
      v16 = v12[1];
      v17 = *v12 & 0x7F;
      v12 += 2;
      if ( v16 >= 0 )
        break;
      while ( *v12 < 0 )
      {
        if ( *v12 != (char)0x80 )
          goto LABEL_17;
        ++v12;
      }
      if ( v17 != 9 || (unsigned __int8)(*v12 - 113) > 2u )
        break;
      v18 = v10++;
      UserData[v18 + 2].Reserved1 = *v12;
    }
LABEL_17:
    if ( v10 )
      return InsertEventEntryInLookUpTable((__int64)v12, (__int128 *)&EventDescriptor, a4, (__int64)UserData, v10);
    else
      return EtwWriteTransfer(qword_14006D2F0, &EventDescriptor, 0LL, 0LL, a4, UserData);
  }
  return result;
}
