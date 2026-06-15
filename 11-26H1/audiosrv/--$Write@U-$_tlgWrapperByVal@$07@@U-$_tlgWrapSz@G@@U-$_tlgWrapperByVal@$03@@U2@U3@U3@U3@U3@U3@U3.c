/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865553@Z @ 0x18006D8C4
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x18008D6B4 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        const wchar_t **a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 *a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 *a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33)
{
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  const wchar_t *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const wchar_t *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  const wchar_t *v44; // rdx
  int v45; // ecx
  __int64 v47; // [rsp+30h] [rbp-D0h]
  _DWORD v48[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+5Ch] [rbp-A4h]
  unsigned __int8 *v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  const wchar_t *v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+88h] [rbp-78h]
  int v60; // [rsp+8Ch] [rbp-74h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  const wchar_t *v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A8h] [rbp-58h]
  int v65; // [rsp+ACh] [rbp-54h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int64 v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  __int64 v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  const wchar_t *v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  __int64 v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  __int64 v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  __int64 v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  __int64 v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  __int64 v95; // [rsp+190h] [rbp+90h]
  __int64 v96; // [rsp+198h] [rbp+98h]
  __int64 v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  __int64 v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  __int64 v101; // [rsp+1C0h] [rbp+C0h]
  __int64 v102; // [rsp+1C8h] [rbp+C8h]
  __int64 v103; // [rsp+1D0h] [rbp+D0h]
  __int64 v104; // [rsp+1D8h] [rbp+D8h]
  __int64 v105; // [rsp+1E0h] [rbp+E0h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+1F8h] [rbp+F8h]
  __int64 v109; // [rsp+200h] [rbp+100h]
  __int64 v110; // [rsp+208h] [rbp+108h]
  __int64 v111; // [rsp+210h] [rbp+110h]
  __int64 v112; // [rsp+218h] [rbp+118h]
  __int64 v113; // [rsp+220h] [rbp+120h]
  __int64 v114; // [rsp+228h] [rbp+128h]
  __int64 v115; // [rsp+230h] [rbp+130h]
  __int64 v116; // [rsp+238h] [rbp+138h]

  v115 = a33;
  v113 = a32;
  v111 = a31;
  v109 = a30;
  v107 = a29;
  v116 = 8LL;
  v114 = 4LL;
  v112 = 4LL;
  v35 = *a28;
  v103 = a27;
  v101 = a26;
  v99 = a25;
  v97 = a24;
  v95 = a23;
  v93 = a22;
  v105 = v35;
  v110 = 4LL;
  v108 = 1LL;
  v36 = *a21;
  v89 = a20;
  v87 = a19;
  v85 = a18;
  v91 = v36;
  v37 = -1LL;
  v106 = 16LL;
  v104 = 4LL;
  v38 = *a17;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 2LL;
  v94 = 4LL;
  v92 = 16LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 2LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &LocaleName;
    v40 = 2;
  }
  v83 = v40;
  v80 = a16;
  v78 = a15;
  v76 = a14;
  v74 = a13;
  v72 = a12;
  v70 = a11;
  v68 = a10;
  v66 = a9;
  v82 = v38;
  v84 = 0;
  v81 = 4LL;
  v41 = *a8;
  v79 = 1LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = &LocaleName;
    v43 = 2;
  }
  v64 = v43;
  v61 = a7;
  v63 = v41;
  v65 = 0;
  v62 = 4LL;
  v44 = *a6;
  if ( *a6 )
  {
    do
      ++v37;
    while ( v44[v37] );
    v45 = 2 * v37 + 2;
  }
  else
  {
    v44 = &LocaleName;
    v45 = 2;
  }
  v56 = a5;
  v48[0] = *a2 << 24;
  v48[1] = *(unsigned __int16 *)(a2 + 1);
  v49 = *(_QWORD *)(a2 + 3);
  v50 = *(unsigned __int16 **)(a1 + 8);
  v59 = v45;
  v58 = v44;
  v60 = 0;
  v57 = 8LL;
  v51 = *v50;
  v54 = *(unsigned __int16 *)(a2 + 11);
  v53 = a2 + 11;
  v52 = 2;
  v55 = 1;
  LODWORD(v47) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v48, 0LL, 0LL, 31, &v50, v47);
}
