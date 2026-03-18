/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapSz@G@@666666664344@Z @ 0x140002450
 * Callers:
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x140070D74 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        const WCHAR **a10,
        const WCHAR **a11,
        const WCHAR **a12,
        const WCHAR **a13,
        const WCHAR **a14,
        const WCHAR **a15,
        const WCHAR **a16,
        const WCHAR **a17,
        const WCHAR **a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22)
{
  __int64 v23; // rcx
  int v25; // edx
  const WCHAR *v26; // r8
  __int64 v27; // rax
  int v28; // eax
  const WCHAR *v29; // r8
  __int64 v30; // rax
  int v31; // eax
  const WCHAR *v32; // r8
  __int64 v33; // rax
  int v34; // eax
  const WCHAR *v35; // r8
  __int64 v36; // rax
  int v37; // eax
  const WCHAR *v38; // r8
  __int64 v39; // rax
  int v40; // eax
  const WCHAR *v41; // r8
  __int64 v42; // rax
  int v43; // eax
  const WCHAR *v44; // r8
  __int64 v45; // rax
  int v46; // eax
  const WCHAR *v47; // r8
  __int64 v48; // rax
  int v49; // eax
  const WCHAR *v50; // r8
  __int64 v51; // rdx
  _BYTE *v52; // rdx
  int v53; // ecx
  _BYTE v55[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  _BYTE *v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+78h] [rbp-88h]
  int v62; // [rsp+7Ch] [rbp-84h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  const WCHAR *v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+ACh] [rbp-54h]
  const WCHAR *v70; // [rsp+B0h] [rbp-50h]
  int v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+BCh] [rbp-44h]
  const WCHAR *v73; // [rsp+C0h] [rbp-40h]
  int v74; // [rsp+C8h] [rbp-38h]
  int v75; // [rsp+CCh] [rbp-34h]
  const WCHAR *v76; // [rsp+D0h] [rbp-30h]
  int v77; // [rsp+D8h] [rbp-28h]
  int v78; // [rsp+DCh] [rbp-24h]
  const WCHAR *v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E8h] [rbp-18h]
  int v81; // [rsp+ECh] [rbp-14h]
  const WCHAR *v82; // [rsp+F0h] [rbp-10h]
  int v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  const WCHAR *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v88; // [rsp+110h] [rbp+10h]
  int v89; // [rsp+118h] [rbp+18h]
  int v90; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v91; // [rsp+120h] [rbp+20h]
  int v92; // [rsp+128h] [rbp+28h]
  int v93; // [rsp+12Ch] [rbp+2Ch]
  __int64 v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]
  __int64 v98; // [rsp+150h] [rbp+50h]
  __int64 v99; // [rsp+158h] [rbp+58h]
  __int64 v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+168h] [rbp+68h]

  v100 = a22;
  v98 = a21;
  v23 = -1LL;
  v96 = a20;
  v25 = 2;
  v94 = a19;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 8LL;
  v26 = *a18;
  v95 = 4LL;
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v26 = &word_14026AF94;
    v28 = 2;
  }
  v92 = v28;
  v91 = v26;
  v93 = 0;
  v29 = *a17;
  if ( *a17 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = &word_14026AF94;
    v31 = 2;
  }
  v89 = v31;
  v88 = v29;
  v90 = 0;
  v32 = *a16;
  if ( *a16 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v32 = &word_14026AF94;
    v34 = 2;
  }
  v86 = v34;
  v85 = v32;
  v87 = 0;
  v35 = *a15;
  if ( *a15 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v35 = &word_14026AF94;
    v37 = 2;
  }
  v83 = v37;
  v82 = v35;
  v84 = 0;
  v38 = *a14;
  if ( *a14 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &word_14026AF94;
    v40 = 2;
  }
  v80 = v40;
  v79 = v38;
  v81 = 0;
  v41 = *a13;
  if ( *a13 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = &word_14026AF94;
    v43 = 2;
  }
  v77 = v43;
  v76 = v41;
  v78 = 0;
  v44 = *a12;
  if ( *a12 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( v44[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v44 = &word_14026AF94;
    v46 = 2;
  }
  v74 = v46;
  v73 = v44;
  v75 = 0;
  v47 = *a11;
  if ( *a11 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v47[v48] );
    v49 = 2 * v48 + 2;
  }
  else
  {
    v47 = &word_14026AF94;
    v49 = 2;
  }
  v71 = v49;
  v70 = v47;
  v72 = 0;
  v50 = *a10;
  if ( *a10 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( v50[v51] );
    v25 = 2 * v51 + 2;
  }
  else
  {
    v50 = &word_14026AF94;
  }
  v65 = a9;
  v63 = a8;
  v68 = v25;
  v67 = v50;
  v69 = 0;
  v52 = *a7;
  v66 = 4LL;
  v64 = 4LL;
  if ( v52 )
  {
    do
      ++v23;
    while ( v52[v23] );
    v53 = v23 + 1;
  }
  else
  {
    v52 = &unk_140269890;
    v53 = 1;
  }
  v58 = a6;
  v56 = a5;
  v60 = v52;
  v61 = v53;
  v62 = 0;
  v59 = 4LL;
  v57 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 20, v55);
}
