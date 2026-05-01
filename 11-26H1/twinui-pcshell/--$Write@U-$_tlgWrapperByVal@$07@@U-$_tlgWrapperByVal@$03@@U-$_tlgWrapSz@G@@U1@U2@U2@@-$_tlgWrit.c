/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@344@Z @ 0x1801E47E4
 * Callers:
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x18028EB6C (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
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
  const WCHAR *v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  __int64 v27; // [rsp+A0h] [rbp-19h]
  __int64 v28; // [rsp+A8h] [rbp-11h]
  __int64 v29; // [rsp+B0h] [rbp-9h]
  __int64 v30; // [rsp+B8h] [rbp-1h]
  __int64 v31; // [rsp+C0h] [rbp+7h]
  __int64 v32; // [rsp+C8h] [rbp+Fh]

  v31 = a10;
  v29 = a9;
  v27 = a8;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 8LL;
  v11 = *a7;
  if ( *a7 )
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
  v25 = v13;
  v22 = a6;
  v20 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v24 = v11;
  v26 = 0;
  v23 = 4LL;
  v21 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  UserData.Reserved = 2;
  v19 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, 8u, &UserData);
}
