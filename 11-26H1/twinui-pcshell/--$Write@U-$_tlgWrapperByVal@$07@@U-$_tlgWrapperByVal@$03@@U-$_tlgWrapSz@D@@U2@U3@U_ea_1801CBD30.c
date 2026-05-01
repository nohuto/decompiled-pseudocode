/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801CBD30
 * Callers:
 *     ?NotifyFailure@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18069E830 (-NotifyFailure@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflecto.c)
 *     ?NotifyFailure@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1806A6990 (-NotifyFailure@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8,
        const wchar_t **a9,
        __int64 a10,
        const WCHAR **a11,
        __int64 a12,
        const wchar_t **a13,
        __int64 a14,
        const wchar_t **a15,
        const WCHAR **a16,
        __int64 a17,
        const wchar_t **a18,
        const WCHAR **a19)
{
  __int64 v21; // rcx
  const WCHAR *v23; // r8
  __int64 v24; // rax
  int v25; // eax
  const wchar_t *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  const WCHAR *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  const wchar_t *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  const wchar_t *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const WCHAR *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const wchar_t *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  const wchar_t *v44; // rdx
  int v45; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  const wchar_t *v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+9Ch] [rbp-64h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  const wchar_t *v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  const WCHAR *v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D8h] [rbp-28h]
  int v68; // [rsp+DCh] [rbp-24h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  const wchar_t *v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  const wchar_t *v76; // [rsp+110h] [rbp+10h]
  int v77; // [rsp+118h] [rbp+18h]
  int v78; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+128h] [rbp+28h]
  int v81; // [rsp+12Ch] [rbp+2Ch]
  __int64 v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  const wchar_t *v84; // [rsp+140h] [rbp+40h]
  int v85; // [rsp+148h] [rbp+48h]
  int v86; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+15Ch] [rbp+5Ch]

  v21 = -1LL;
  v23 = *a19;
  if ( *a19 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v23 = &pvData;
    v25 = 2;
  }
  v88 = v25;
  v87 = v23;
  v89 = 0;
  v26 = *a18;
  if ( *a18 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)v26 + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v26 = &word_180785B70;
    v28 = 1;
  }
  v85 = v28;
  v82 = a17;
  v84 = v26;
  v86 = 0;
  v83 = 4LL;
  v29 = *a16;
  if ( *a16 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = &pvData;
    v31 = 2;
  }
  v80 = v31;
  v79 = v29;
  v81 = 0;
  v32 = *a15;
  if ( *a15 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *((_BYTE *)v32 + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &word_180785B70;
    v34 = 1;
  }
  v77 = v34;
  v74 = a14;
  v76 = v32;
  v78 = 0;
  v75 = 4LL;
  v35 = *a13;
  if ( *a13 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &word_180785B70;
    v37 = 1;
  }
  v72 = v37;
  v69 = a12;
  v71 = v35;
  v73 = 0;
  v70 = 4LL;
  v38 = *a11;
  if ( *a11 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &pvData;
    v40 = 2;
  }
  v67 = v40;
  v64 = a10;
  v66 = v38;
  v68 = 0;
  v65 = 4LL;
  v41 = *a9;
  if ( *a9 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &word_180785B70;
    v43 = 1;
  }
  v62 = v43;
  v59 = a8;
  v61 = v41;
  v63 = 0;
  v60 = 4LL;
  v44 = *a7;
  if ( *a7 )
  {
    do
      ++v21;
    while ( *((_BYTE *)v44 + v21) );
    v45 = v21 + 1;
  }
  else
  {
    v44 = &word_180785B70;
    v45 = 1;
  }
  v54 = a6;
  v52 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v57 = v45;
  v56 = v44;
  v58 = 0;
  v55 = 4LL;
  v53 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v50 = *(unsigned __int16 *)(a2 + 11);
  v49 = a2 + 11;
  UserData.Reserved = 2;
  v51 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, 0LL, 0x11u, &UserData);
}
