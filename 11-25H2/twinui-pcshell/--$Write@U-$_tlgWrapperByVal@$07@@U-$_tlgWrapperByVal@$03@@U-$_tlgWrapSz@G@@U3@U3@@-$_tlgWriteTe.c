/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x18018DA50
 * Callers:
 *     ?StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z @ 0x1805C588C (-StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        const WCHAR **a9)
{
  __int64 v11; // rcx
  const WCHAR *v14; // r8
  __int64 v15; // rax
  int v16; // eax
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const WCHAR *v20; // rdx
  int v21; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int8 *v25; // [rsp+60h] [rbp-51h]
  int v26; // [rsp+68h] [rbp-49h]
  int v27; // [rsp+6Ch] [rbp-45h]
  __int64 v28; // [rsp+70h] [rbp-41h]
  __int64 v29; // [rsp+78h] [rbp-39h]
  __int64 v30; // [rsp+80h] [rbp-31h]
  __int64 v31; // [rsp+88h] [rbp-29h]
  const WCHAR *v32; // [rsp+90h] [rbp-21h]
  int v33; // [rsp+98h] [rbp-19h]
  int v34; // [rsp+9Ch] [rbp-15h]
  const WCHAR *v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  int v37; // [rsp+ACh] [rbp-5h]
  const WCHAR *v38; // [rsp+B0h] [rbp-1h]
  int v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+BCh] [rbp+Bh]

  v11 = -1LL;
  v14 = *a9;
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &LocaleName;
    v16 = 2;
  }
  v39 = v16;
  v38 = v14;
  v40 = 0;
  v17 = *a8;
  if ( *a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &LocaleName;
    v19 = 2;
  }
  v36 = v19;
  v35 = v17;
  v37 = 0;
  v20 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v20[v11] );
    v21 = 2 * v11 + 2;
  }
  else
  {
    v20 = &LocaleName;
    v21 = 2;
  }
  v30 = a6;
  v28 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v33 = v21;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v32 = v20;
  v34 = 0;
  v31 = 4LL;
  v29 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v26 = *(unsigned __int16 *)(a2 + 11);
  v25 = a2 + 11;
  UserData.Reserved = 2;
  v27 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, 7u, &UserData);
}
