/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C7C04
 * Callers:
 *     ??$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAX0AEA_N11AEAPEBG@Z @ 0x1800C78F8 (--$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const WCHAR **a10)
{
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp-59h]
  int v18; // [rsp+68h] [rbp-51h]
  int v19; // [rsp+6Ch] [rbp-4Dh]
  __int64 v20; // [rsp+70h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-41h]
  __int64 v22; // [rsp+80h] [rbp-39h]
  __int64 v23; // [rsp+88h] [rbp-31h]
  __int64 v24; // [rsp+90h] [rbp-29h]
  __int64 v25; // [rsp+98h] [rbp-21h]
  __int64 v26; // [rsp+A0h] [rbp-19h]
  __int64 v27; // [rsp+A8h] [rbp-11h]
  __int64 v28; // [rsp+B0h] [rbp-9h]
  __int64 v29; // [rsp+B8h] [rbp-1h]
  const WCHAR *v30; // [rsp+C0h] [rbp+7h]
  int v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+CCh] [rbp+13h]

  v11 = *a10;
  if ( *a10 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &pvData;
    v13 = 2;
  }
  v31 = v13;
  v28 = a9;
  v26 = a8;
  v24 = a7;
  v22 = a6;
  v20 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v30 = v11;
  v29 = 1LL;
  v27 = 1LL;
  v25 = 1LL;
  v23 = 8LL;
  v21 = 8LL;
  v32 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v19 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
