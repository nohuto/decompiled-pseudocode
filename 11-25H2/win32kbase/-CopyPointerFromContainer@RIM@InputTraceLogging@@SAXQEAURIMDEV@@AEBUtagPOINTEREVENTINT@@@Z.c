/*
 * XREFs of ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1401EE560
 * Callers:
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EF51C (rimGetCompleteFrameFromIVCompleteFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665@Z @ 0x140004E8C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByV.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666@Z @ 0x140005168 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@U-$__ea_140005168.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666666666@Z @ 0x1400054D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@U-$__ea_1400054D8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556@Z @ 0x1400058E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tl.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140078E58 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x140078F10 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140078FBC (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RIM::CopyPointerFromContainer(
        struct RIMDEV *const a1,
        const struct tagPOINTEREVENTINT *a2)
{
  __int64 v2; // r8
  const char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  const char *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r9d
  _DWORD *v13; // r8
  int v14; // ecx
  const char *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // r8
  int v20; // r9d
  __int16 *v21; // r8
  __int64 v22; // rdx
  const char *v23; // r10
  __int64 v24; // r9
  _DWORD *v25; // r8
  int v26; // ecx
  const char *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r8
  int v32; // r9d
  __int16 *v33; // r8
  __int64 v34; // rdx
  const char *v35; // r10
  __int64 v36; // r9
  _DWORD *v37; // r8
  int v38; // ecx
  const char *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // r8
  int v44; // r9d
  __int16 *v45; // r8
  __int64 v46; // rdx
  const char *v47; // r10
  __int64 v48; // r9
  __int64 v49; // r8
  const char *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // r8
  int v55; // r9d
  __int16 *v56; // r8
  __int64 v57; // rdx
  const char *v58; // r10
  __int64 v59; // r9
  int v60; // [rsp+140h] [rbp-80h] BYREF
  int v61; // [rsp+144h] [rbp-7Ch] BYREF
  int v62; // [rsp+148h] [rbp-78h] BYREF
  int v63; // [rsp+14Ch] [rbp-74h] BYREF
  int v64; // [rsp+150h] [rbp-70h] BYREF
  int v65; // [rsp+154h] [rbp-6Ch] BYREF
  int v66; // [rsp+158h] [rbp-68h] BYREF
  int v67; // [rsp+15Ch] [rbp-64h] BYREF
  int v68; // [rsp+160h] [rbp-60h] BYREF
  int v69; // [rsp+164h] [rbp-5Ch] BYREF
  int v70; // [rsp+168h] [rbp-58h] BYREF
  int v71; // [rsp+16Ch] [rbp-54h] BYREF
  int v72; // [rsp+170h] [rbp-50h] BYREF
  int v73; // [rsp+174h] [rbp-4Ch] BYREF
  int v74; // [rsp+178h] [rbp-48h] BYREF
  int v75; // [rsp+17Ch] [rbp-44h] BYREF
  int v76; // [rsp+180h] [rbp-40h] BYREF
  int v77; // [rsp+184h] [rbp-3Ch] BYREF
  __int64 v78; // [rsp+188h] [rbp-38h] BYREF
  __int64 v79; // [rsp+190h] [rbp-30h] BYREF
  const char *v80; // [rsp+198h] [rbp-28h] BYREF
  __int64 v81; // [rsp+1A0h] [rbp-20h] BYREF
  __int64 v82; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v83; // [rsp+1B0h] [rbp-10h] BYREF
  const char *v84; // [rsp+1B8h] [rbp-8h] BYREF
  const char *v85; // [rsp+1C0h] [rbp+0h] BYREF
  __int64 v86; // [rsp+1C8h] [rbp+8h] BYREF
  const char *v87; // [rsp+1D0h] [rbp+10h] BYREF
  const char *v88; // [rsp+1D8h] [rbp+18h] BYREF
  const char *v89; // [rsp+1E0h] [rbp+20h] BYREF
  const char *v90; // [rsp+1E8h] [rbp+28h] BYREF
  __int64 v91; // [rsp+1F0h] [rbp+30h] BYREF
  const char *v92; // [rsp+1F8h] [rbp+38h] BYREF
  __int16 v93; // [rsp+210h] [rbp+50h] BYREF
  int v94; // [rsp+220h] [rbp+60h] BYREF
  int v95; // [rsp+228h] [rbp+68h] BYREF

  if ( a1 )
  {
    v12 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL);
    if ( (unsigned int)(v12 - 1) > 3 )
    {
      if ( (unsigned int)(v12 - 5) > 1 )
      {
        if ( v12 == 7 )
        {
          if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
          {
            v38 = v37[24];
            v94 = v37[37];
            v95 = v37[36];
            LODWORD(v84) = v37[35];
            LODWORD(v83) = v37[34];
            LODWORD(v82) = v37[33];
            LODWORD(v81) = v37[32];
            LODWORD(v80) = v37[31];
            LODWORD(v79) = v37[30];
            LODWORD(v78) = v37[29];
            v71 = v37[28];
            v61 = v37[27];
            v65 = v37[26];
            v39 = InputTraceLogging::ButtonChangeTypeToString(v38);
            v41 = *(_QWORD *)(v40 + 88);
            v42 = *(_DWORD *)(v40 + 8);
            v92 = v39;
            v64 = *(_DWORD *)(v40 + 84);
            v63 = *(_DWORD *)(v40 + 76);
            v60 = *(_DWORD *)(v40 + 72);
            v90 = *(const char **)(v40 + 32);
            v89 = *(const char **)(v40 + 24);
            v62 = *(_DWORD *)(v40 + 80);
            v70 = *(_DWORD *)(v40 + 68);
            v69 = *(_DWORD *)(v40 + 64);
            v68 = *(_DWORD *)(v40 + 52);
            v67 = *(_DWORD *)(v40 + 48);
            v66 = *(_DWORD *)(v40 + 60);
            v75 = *(_DWORD *)(v40 + 56);
            v74 = *(_DWORD *)(v40 + 44);
            v73 = *(_DWORD *)(v40 + 40);
            v72 = *(_DWORD *)(v40 + 20);
            v91 = v41;
            v88 = InputTraceLogging::PointerTypeToString(v42);
            v77 = *(_DWORD *)(v43 + 16);
            v76 = *(_DWORD *)(v43 + 12);
            v87 = InputTraceLogging::PointerDeviceTypeToString(v44);
            v93 = *v45;
            v86 = v46;
            v85 = v47;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)&dword_14029EE20,
              (__int64)&unk_14027B8C5,
              (__int64)v45,
              v48,
              (__int64)&v85,
              (__int64)&v86,
              (__int64)&v93,
              (void **)&v87,
              (__int64)&v76,
              (__int64)&v77,
              (void **)&v88,
              (__int64)&v72,
              (__int64)&v73,
              (__int64)&v74,
              (__int64)&v75,
              (__int64)&v66,
              (__int64)&v67,
              (__int64)&v68,
              (__int64)&v69,
              (__int64)&v70,
              (__int64)&v62,
              (__int64)&v89,
              (__int64)&v90,
              (__int64)&v60,
              (__int64)&v91,
              (__int64)&v63,
              (__int64)&v64,
              (void **)&v92,
              (__int64)&v65,
              (__int64)&v61,
              (__int64)&v71,
              (__int64)&v78,
              (__int64)&v79,
              (__int64)&v80,
              (__int64)&v81,
              (__int64)&v82,
              (__int64)&v83,
              (__int64)&v84,
              (__int64)&v95,
              (__int64)&v94);
          }
        }
        else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
        {
          v50 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(v49 + 96));
          v52 = *(_QWORD *)(v51 + 88);
          v53 = *(_DWORD *)(v51 + 8);
          v92 = v50;
          v94 = *(_DWORD *)(v51 + 84);
          v95 = *(_DWORD *)(v51 + 76);
          LODWORD(v84) = *(_DWORD *)(v51 + 72);
          v90 = *(const char **)(v51 + 32);
          v89 = *(const char **)(v51 + 24);
          LODWORD(v83) = *(_DWORD *)(v51 + 80);
          LODWORD(v82) = *(_DWORD *)(v51 + 68);
          LODWORD(v81) = *(_DWORD *)(v51 + 64);
          LODWORD(v80) = *(_DWORD *)(v51 + 52);
          LODWORD(v79) = *(_DWORD *)(v51 + 48);
          LODWORD(v78) = *(_DWORD *)(v51 + 60);
          v71 = *(_DWORD *)(v51 + 56);
          v61 = *(_DWORD *)(v51 + 44);
          v65 = *(_DWORD *)(v51 + 40);
          v64 = *(_DWORD *)(v51 + 20);
          v91 = v52;
          v88 = InputTraceLogging::PointerTypeToString(v53);
          v63 = *(_DWORD *)(v54 + 16);
          v60 = *(_DWORD *)(v54 + 12);
          v87 = InputTraceLogging::PointerDeviceTypeToString(v55);
          v93 = *v56;
          v86 = v57;
          v85 = v58;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
            (__int64)&dword_14029EE20,
            (__int64)&unk_14027BA9D,
            (__int64)v56,
            v59,
            (__int64)&v85,
            (__int64)&v86,
            (__int64)&v93,
            (void **)&v87,
            (__int64)&v60,
            (__int64)&v63,
            (void **)&v88,
            (__int64)&v64,
            (__int64)&v65,
            (__int64)&v61,
            (__int64)&v71,
            (__int64)&v78,
            (__int64)&v79,
            (__int64)&v80,
            (__int64)&v81,
            (__int64)&v82,
            (__int64)&v83,
            (__int64)&v89,
            (__int64)&v90,
            (__int64)&v84,
            (__int64)&v91,
            (__int64)&v95,
            (__int64)&v94,
            (void **)&v92);
        }
      }
      else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
      {
        v26 = v25[24];
        v94 = v25[31];
        v95 = v25[30];
        LODWORD(v84) = v25[29];
        LODWORD(v83) = v25[28];
        LODWORD(v82) = v25[27];
        LODWORD(v81) = v25[26];
        v27 = InputTraceLogging::ButtonChangeTypeToString(v26);
        v29 = *(_QWORD *)(v28 + 88);
        v30 = *(_DWORD *)(v28 + 8);
        v92 = v27;
        LODWORD(v80) = *(_DWORD *)(v28 + 84);
        LODWORD(v79) = *(_DWORD *)(v28 + 76);
        LODWORD(v78) = *(_DWORD *)(v28 + 72);
        v90 = *(const char **)(v28 + 32);
        v89 = *(const char **)(v28 + 24);
        v71 = *(_DWORD *)(v28 + 80);
        v61 = *(_DWORD *)(v28 + 68);
        v65 = *(_DWORD *)(v28 + 64);
        v64 = *(_DWORD *)(v28 + 52);
        v63 = *(_DWORD *)(v28 + 48);
        v60 = *(_DWORD *)(v28 + 60);
        v62 = *(_DWORD *)(v28 + 56);
        v70 = *(_DWORD *)(v28 + 44);
        v69 = *(_DWORD *)(v28 + 40);
        v68 = *(_DWORD *)(v28 + 20);
        v91 = v29;
        v88 = InputTraceLogging::PointerTypeToString(v30);
        v67 = *(_DWORD *)(v31 + 16);
        v66 = *(_DWORD *)(v31 + 12);
        v87 = InputTraceLogging::PointerDeviceTypeToString(v32);
        v93 = *v33;
        v86 = v34;
        v85 = v35;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027B735,
          (__int64)v33,
          v36,
          (__int64)&v85,
          (__int64)&v86,
          (__int64)&v93,
          (void **)&v87,
          (__int64)&v66,
          (__int64)&v67,
          (void **)&v88,
          (__int64)&v68,
          (__int64)&v69,
          (__int64)&v70,
          (__int64)&v62,
          (__int64)&v60,
          (__int64)&v63,
          (__int64)&v64,
          (__int64)&v65,
          (__int64)&v61,
          (__int64)&v71,
          (__int64)&v89,
          (__int64)&v90,
          (__int64)&v78,
          (__int64)&v91,
          (__int64)&v79,
          (__int64)&v80,
          (void **)&v92,
          (__int64)&v81,
          (__int64)&v82,
          (__int64)&v83,
          (__int64)&v84,
          (__int64)&v95,
          (__int64)&v94);
      }
    }
    else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
    {
      v14 = v13[24];
      v94 = v13[37];
      v95 = v13[36];
      v60 = v13[35];
      v62 = v13[34];
      v70 = v13[33];
      v69 = v13[32];
      v68 = v13[31];
      v67 = v13[30];
      v66 = v13[29];
      v75 = v13[28];
      v74 = v13[27];
      v73 = v13[26];
      v15 = InputTraceLogging::ButtonChangeTypeToString(v14);
      v17 = *(_QWORD *)(v16 + 88);
      v18 = *(_DWORD *)(v16 + 8);
      v85 = v15;
      v72 = *(_DWORD *)(v16 + 84);
      v77 = *(_DWORD *)(v16 + 76);
      v76 = *(_DWORD *)(v16 + 72);
      v87 = *(const char **)(v16 + 32);
      v88 = *(const char **)(v16 + 24);
      v63 = *(_DWORD *)(v16 + 80);
      v64 = *(_DWORD *)(v16 + 68);
      v65 = *(_DWORD *)(v16 + 64);
      v61 = *(_DWORD *)(v16 + 52);
      v71 = *(_DWORD *)(v16 + 48);
      LODWORD(v78) = *(_DWORD *)(v16 + 60);
      LODWORD(v79) = *(_DWORD *)(v16 + 56);
      LODWORD(v80) = *(_DWORD *)(v16 + 44);
      LODWORD(v81) = *(_DWORD *)(v16 + 40);
      LODWORD(v82) = *(_DWORD *)(v16 + 20);
      v86 = v17;
      v89 = InputTraceLogging::PointerTypeToString(v18);
      LODWORD(v83) = *(_DWORD *)(v19 + 16);
      LODWORD(v84) = *(_DWORD *)(v19 + 12);
      v90 = InputTraceLogging::PointerDeviceTypeToString(v20);
      v93 = *v21;
      v91 = v22;
      v92 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027BD3D,
        (__int64)v21,
        v24,
        (__int64)&v92,
        (__int64)&v91,
        (__int64)&v93,
        (void **)&v90,
        (__int64)&v84,
        (__int64)&v83,
        (void **)&v89,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v71,
        (__int64)&v61,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v88,
        (__int64)&v87,
        (__int64)&v76,
        (__int64)&v86,
        (__int64)&v77,
        (__int64)&v72,
        (void **)&v85,
        (__int64)&v73,
        (__int64)&v74,
        (__int64)&v75,
        (__int64)&v66,
        (__int64)&v67,
        (__int64)&v68,
        (__int64)&v69,
        (__int64)&v70,
        (__int64)&v62,
        (__int64)&v60,
        (__int64)&v95,
        (__int64)&v94);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
  {
    v3 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(v2 + 96));
    v5 = *(_QWORD *)(v4 + 88);
    v6 = *(_DWORD *)(v4 + 8);
    v84 = v3;
    v94 = *(_DWORD *)(v4 + 84);
    v95 = *(_DWORD *)(v4 + 76);
    v76 = *(_DWORD *)(v4 + 72);
    v82 = *(_QWORD *)(v4 + 32);
    v81 = *(_QWORD *)(v4 + 24);
    v77 = *(_DWORD *)(v4 + 80);
    v72 = *(_DWORD *)(v4 + 68);
    v73 = *(_DWORD *)(v4 + 64);
    v74 = *(_DWORD *)(v4 + 52);
    v75 = *(_DWORD *)(v4 + 48);
    v66 = *(_DWORD *)(v4 + 60);
    v67 = *(_DWORD *)(v4 + 56);
    v68 = *(_DWORD *)(v4 + 44);
    v69 = *(_DWORD *)(v4 + 40);
    v70 = *(_DWORD *)(v4 + 20);
    v83 = v5;
    v7 = InputTraceLogging::PointerTypeToString(v6);
    v78 &= v8;
    v80 = v7;
    v62 = *(_DWORD *)(v9 + 16);
    v60 = *(_DWORD *)(v9 + 12);
    v93 = *(_WORD *)v9;
    v79 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_14027BBF4,
      v9,
      v11,
      (__int64)&v78,
      (__int64)&v79,
      (__int64)&v93,
      (__int64)&v60,
      (__int64)&v62,
      (void **)&v80,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v77,
      (__int64)&v81,
      (__int64)&v82,
      (__int64)&v76,
      (__int64)&v83,
      (__int64)&v95,
      (__int64)&v94,
      (void **)&v84);
  }
}
