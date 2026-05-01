/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U4@U4@U4@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@666AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801B18E0
 * Callers:
 *     ??$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N$$QEAPEBG3AEAY0BG@$$CBGAEAPEBG@Z @ 0x1802C7DA4 (--$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEAPEBG@DashboardManagerTelemetry.c)
 *     ??$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_NAEAY00$$CBG$$QEAPEBGAEAY0BK@$$CBGAEAPEBG@Z @ 0x1805C41C0 (--$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTele.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0L@$$CBGAEAPEBG@Z @ 0x1805C42F0 (--$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10,
        const WCHAR **a11,
        __int64 a12)
{
  __int64 v13; // rcx
  const WCHAR *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const WCHAR *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const WCHAR *v24; // rdx
  int v25; // ecx
  __int64 v26; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int8 *v30; // [rsp+60h] [rbp-89h]
  int v31; // [rsp+68h] [rbp-81h]
  int v32; // [rsp+6Ch] [rbp-7Dh]
  __int64 v33; // [rsp+70h] [rbp-79h]
  __int64 v34; // [rsp+78h] [rbp-71h]
  __int64 v35; // [rsp+80h] [rbp-69h]
  __int64 v36; // [rsp+88h] [rbp-61h]
  __int64 v37; // [rsp+90h] [rbp-59h]
  __int64 v38; // [rsp+98h] [rbp-51h]
  const WCHAR *v39; // [rsp+A0h] [rbp-49h]
  int v40; // [rsp+A8h] [rbp-41h]
  int v41; // [rsp+ACh] [rbp-3Dh]
  const WCHAR *v42; // [rsp+B0h] [rbp-39h]
  int v43; // [rsp+B8h] [rbp-31h]
  int v44; // [rsp+BCh] [rbp-2Dh]
  const WCHAR *v45; // [rsp+C0h] [rbp-29h]
  int v46; // [rsp+C8h] [rbp-21h]
  int v47; // [rsp+CCh] [rbp-1Dh]
  const WCHAR *v48; // [rsp+D0h] [rbp-19h]
  int v49; // [rsp+D8h] [rbp-11h]
  int v50; // [rsp+DCh] [rbp-Dh]
  __int64 v51; // [rsp+E0h] [rbp-9h]
  __int64 v52; // [rsp+E8h] [rbp-1h]

  v51 = a12;
  v13 = -1LL;
  v52 = 8LL;
  v15 = *a11;
  if ( *a11 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &pvData;
    v17 = 2;
  }
  v49 = v17;
  v48 = v15;
  v50 = 0;
  v18 = *a10;
  if ( *a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &pvData;
    v20 = 2;
  }
  v46 = v20;
  v45 = v18;
  v47 = 0;
  v21 = *a9;
  if ( *a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &pvData;
    v23 = 2;
  }
  v43 = v23;
  v42 = v21;
  v44 = 0;
  v24 = *a8;
  if ( *a8 )
  {
    do
      ++v13;
    while ( v24[v13] );
    v25 = 2 * v13 + 2;
  }
  else
  {
    v24 = &pvData;
    v25 = 2;
  }
  v37 = a7;
  v35 = a6;
  v40 = v25;
  v39 = v24;
  v38 = 1LL;
  v26 = *a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v33 = v26;
  v41 = 0;
  v36 = 4LL;
  v34 = 16LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v31 = *(unsigned __int16 *)(a2 + 11);
  v30 = a2 + 11;
  v32 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
}
