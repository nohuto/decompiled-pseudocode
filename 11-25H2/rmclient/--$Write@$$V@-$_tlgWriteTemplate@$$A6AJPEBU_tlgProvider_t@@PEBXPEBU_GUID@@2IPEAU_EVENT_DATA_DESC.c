/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000EF00
 * Callers:
 *     HamCompleteActivityRestore @ 0x1800027C0 (HamCompleteActivityRestore.c)
 *     HamDisconnectFromServer @ 0x180005090 (HamDisconnectFromServer.c)
 *     HamConnectToServerEx @ 0x180011AB0 (HamConnectToServerEx.c)
 *     HamAssociateActivityContext @ 0x18001A4B0 (HamAssociateActivityContext.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2)
{
  ULONGLONG v2; // rax
  unsigned __int16 *v3; // rdx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v2 = *(_QWORD *)(a2 + 3);
  v3 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v2;
  UserData.Ptr = (ULONGLONG)off_18002F040;
  UserData.Size = *(unsigned __int16 *)off_18002F040;
  v8 = *v3;
  v7 = v3;
  UserData.Reserved = 2;
  v9 = 1;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
}
