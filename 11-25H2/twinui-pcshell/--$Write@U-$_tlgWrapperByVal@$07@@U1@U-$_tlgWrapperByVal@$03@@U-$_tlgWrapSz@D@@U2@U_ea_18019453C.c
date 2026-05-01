/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18019453C
 * Callers:
 *     ?StopActivity@ShowAltTab@XamlSwitcherTelemetry@@MEAAXXZ @ 0x1806784E0 (-StopActivity@ShowAltTab@XamlSwitcherTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@MEAAXXZ @ 0x180680800 (-StopActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowSnapAssist@XamlSwitcherTelemetry@@MEAAXXZ @ 0x180682C70 (-StopActivity@ShowSnapAssist@XamlSwitcherTelemetry@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        const wchar_t **a10,
        __int64 a11,
        const WCHAR **a12,
        __int64 a13,
        const wchar_t **a14,
        __int64 a15,
        const wchar_t **a16,
        const WCHAR **a17,
        __int64 a18,
        const wchar_t **a19,
        const WCHAR **a20)
{
  __int64 v22; // rcx
  const WCHAR *v24; // r8
  __int64 v25; // rax
  int v26; // eax
  const wchar_t *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  const WCHAR *v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  const wchar_t *v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  const wchar_t *v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  const WCHAR *v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  const wchar_t *v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  const wchar_t *v45; // rdx
  int v46; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  const wchar_t *v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  const wchar_t *v64; // [rsp+C0h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+CCh] [rbp-34h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  const WCHAR *v69; // [rsp+E0h] [rbp-20h]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  const wchar_t *v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  const wchar_t *v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+128h] [rbp+28h]
  int v81; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  const wchar_t *v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+16Ch] [rbp+6Ch]

  v22 = -1LL;
  v24 = *a20;
  if ( *a20 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = &LocaleName;
    v26 = 2;
  }
  v91 = v26;
  v90 = v24;
  v92 = 0;
  v27 = *a19;
  if ( *a19 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *((_BYTE *)v27 + v28) );
    v29 = v28 + 1;
  }
  else
  {
    v27 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v29 = 1;
  }
  v88 = v29;
  v85 = a18;
  v87 = v27;
  v89 = 0;
  v86 = 4LL;
  v30 = *a17;
  if ( *a17 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &LocaleName;
    v32 = 2;
  }
  v83 = v32;
  v82 = v30;
  v84 = 0;
  v33 = *a16;
  if ( *a16 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)v33 + v34) );
    v35 = v34 + 1;
  }
  else
  {
    v33 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v35 = 1;
  }
  v80 = v35;
  v77 = a15;
  v79 = v33;
  v81 = 0;
  v78 = 4LL;
  v36 = *a14;
  if ( *a14 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_BYTE *)v36 + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v36 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v38 = 1;
  }
  v75 = v38;
  v72 = a13;
  v74 = v36;
  v76 = 0;
  v73 = 4LL;
  v39 = *a12;
  if ( *a12 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v39 = &LocaleName;
    v41 = 2;
  }
  v70 = v41;
  v67 = a11;
  v69 = v39;
  v71 = 0;
  v68 = 4LL;
  v42 = *a10;
  if ( *a10 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *((_BYTE *)v42 + v43) );
    v44 = v43 + 1;
  }
  else
  {
    v42 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v44 = 1;
  }
  v65 = v44;
  v62 = a9;
  v64 = v42;
  v66 = 0;
  v63 = 4LL;
  v45 = *a8;
  if ( *a8 )
  {
    do
      ++v22;
    while ( *((_BYTE *)v45 + v22) );
    v46 = v22 + 1;
  }
  else
  {
    v45 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v46 = 1;
  }
  v57 = a7;
  v55 = a6;
  v53 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v60 = v46;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v59 = v45;
  v61 = 0;
  v58 = 4LL;
  v56 = 8LL;
  v54 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v51 = *(unsigned __int16 *)(a2 + 11);
  v50 = a2 + 11;
  UserData.Reserved = 2;
  v52 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, 0LL, 0x12u, &UserData);
}
