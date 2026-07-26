/*
 * XREFs of TlgAggregateAbsorbEvent @ 0x1400E91CC
 * Callers:
 *     _tlgWriteAgg @ 0x1400E9314 (_tlgWriteAgg.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x1400E8E58 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall TlgAggregateAbsorbEvent(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        _EVENT_DATA_DESCRIPTOR *UserData)
{
  ULONG UserDataCount; // edi
  NTSTATUS result; // eax
  unsigned __int64 Ptr; // rax
  unsigned __int8 v9; // r10
  unsigned __int64 v10; // rbx
  char *v11; // rcx
  char v12; // al
  char v15; // al
  char v16; // r8
  char v17; // dl
  __int64 v18; // rax

  UserDataCount = a3;
  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    Ptr = UserData[1].Ptr;
    v9 = 0;
    v10 = Ptr + UserData[1].Size;
    v11 = (char *)(Ptr + 2);
    do
      v12 = *v11++;
    while ( v12 < 0 );
    while ( *v11++ )
      ;
    while ( (unsigned __int64)v11 < v10 )
    {
      while ( *v11++ )
        ;
      if ( *v11 >= 0 )
        break;
      v15 = v11[1];
      v16 = *v11 & 0x7F;
      v11 += 2;
      if ( v15 >= 0 )
        break;
      while ( 1 )
      {
        v17 = *v11;
        if ( *v11 >= 0 )
          break;
        if ( v17 != (char)0x80 )
          goto LABEL_15;
        ++v11;
      }
      if ( v16 != 9 || (unsigned __int8)(v17 - 113) > 2u )
        break;
      v18 = v9++;
      UserData[v18 + 2].Reserved1 = v17;
    }
LABEL_15:
    if ( v9 )
      return InsertEventEntryInLookUpTable(a1, a2, UserDataCount, (__int64)UserData, v9);
    else
      return EtwWriteTransfer(*(_QWORD *)(a1 + 32), (PCEVENT_DESCRIPTOR)a2, 0LL, 0LL, UserDataCount, UserData);
  }
  return result;
}
