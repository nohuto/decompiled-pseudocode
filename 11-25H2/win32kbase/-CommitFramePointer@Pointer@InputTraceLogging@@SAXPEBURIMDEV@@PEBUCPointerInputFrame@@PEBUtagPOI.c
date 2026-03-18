/*
 * XREFs of ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1400E5958
 * Callers:
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E5850 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556555555555555@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556@Z @ 0x1400070D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVa_ea_1400070D8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556555555@Z @ 0x140007384 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVa_ea_140007384.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x140078F10 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140078FBC (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFramePointer(
        const struct RIMDEV *a1,
        const struct CPointerInputFrame *a2,
        const struct tagPOINTEREVENTINT *a3)
{
  int v3; // r9d
  int v4; // ecx
  const char *v5; // rax
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // r11
  __int64 v11; // r9
  int v12; // ecx
  const char *v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r11
  __int64 v19; // r9
  __int64 v20; // r8
  const char *v21; // rax
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // r10
  __int64 v25; // r8
  const char *v26; // r11
  __int64 v27; // r9
  int v28; // ecx
  const char *v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // r8
  const char *v34; // r11
  __int64 v35; // r9
  int v36; // [rsp+140h] [rbp-80h] BYREF
  int v37; // [rsp+144h] [rbp-7Ch] BYREF
  int v38; // [rsp+148h] [rbp-78h] BYREF
  int v39; // [rsp+14Ch] [rbp-74h] BYREF
  int v40; // [rsp+150h] [rbp-70h] BYREF
  int v41; // [rsp+154h] [rbp-6Ch] BYREF
  int v42; // [rsp+158h] [rbp-68h] BYREF
  int v43; // [rsp+15Ch] [rbp-64h] BYREF
  int v44; // [rsp+160h] [rbp-60h] BYREF
  int v45; // [rsp+164h] [rbp-5Ch] BYREF
  int v46; // [rsp+168h] [rbp-58h] BYREF
  int v47; // [rsp+16Ch] [rbp-54h] BYREF
  int v48; // [rsp+170h] [rbp-50h] BYREF
  int v49; // [rsp+174h] [rbp-4Ch] BYREF
  int v50; // [rsp+178h] [rbp-48h] BYREF
  int v51; // [rsp+17Ch] [rbp-44h] BYREF
  int v52; // [rsp+180h] [rbp-40h] BYREF
  int v53; // [rsp+184h] [rbp-3Ch] BYREF
  int v54; // [rsp+188h] [rbp-38h] BYREF
  int v55; // [rsp+18Ch] [rbp-34h] BYREF
  int v56; // [rsp+190h] [rbp-30h] BYREF
  int v57; // [rsp+194h] [rbp-2Ch] BYREF
  int v58; // [rsp+198h] [rbp-28h] BYREF
  int v59; // [rsp+19Ch] [rbp-24h] BYREF
  int v60; // [rsp+1A0h] [rbp-20h] BYREF
  int v61; // [rsp+1A4h] [rbp-1Ch] BYREF
  const char *v62; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v63; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v64; // [rsp+1B8h] [rbp-8h] BYREF
  const char *v65; // [rsp+1C0h] [rbp+0h] BYREF
  const char *v66; // [rsp+1C8h] [rbp+8h] BYREF
  __int64 v67; // [rsp+1D0h] [rbp+10h] BYREF
  __int64 v68; // [rsp+1D8h] [rbp+18h] BYREF
  void *v69[2]; // [rsp+1E0h] [rbp+20h] BYREF
  __int16 v70; // [rsp+200h] [rbp+40h] BYREF
  int v71; // [rsp+218h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL);
  if ( (unsigned int)(v3 - 1) > 3 )
  {
    if ( (unsigned int)(v3 - 5) <= 1 )
    {
      if ( (unsigned int)dword_14029EE20 > 4
        && (qword_14029EE30 & 0x20) != 0
        && (qword_14029EE38 & 0x20) == qword_14029EE38 )
      {
        v28 = *((_DWORD *)a3 + 24);
        v71 = *((_DWORD *)a3 + 31);
        v49 = *((_DWORD *)a3 + 30);
        v48 = *((_DWORD *)a3 + 29);
        v47 = *((_DWORD *)a3 + 28);
        v46 = *((_DWORD *)a3 + 27);
        v45 = *((_DWORD *)a3 + 26);
        v29 = InputTraceLogging::ButtonChangeTypeToString(v28);
        v31 = *(_DWORD *)(v30 + 8);
        v69[0] = (void *)v29;
        v44 = *(_DWORD *)(v30 + 84);
        v43 = *(_DWORD *)(v30 + 76);
        v68 = *(_QWORD *)(v30 + 88);
        v42 = *(_DWORD *)(v30 + 72);
        v67 = *(_QWORD *)(v30 + 32);
        v66 = *(const char **)(v30 + 24);
        v36 = *(_DWORD *)(v30 + 80);
        v41 = *(_DWORD *)(v30 + 68);
        v40 = *(_DWORD *)(v30 + 64);
        v39 = *(_DWORD *)(v30 + 52);
        v38 = *(_DWORD *)(v30 + 48);
        v37 = *(_DWORD *)(v30 + 60);
        v55 = *(_DWORD *)(v30 + 56);
        v54 = *(_DWORD *)(v30 + 44);
        v53 = *(_DWORD *)(v30 + 40);
        v52 = *(_DWORD *)(v30 + 20);
        v65 = InputTraceLogging::PointerTypeToString(v31);
        v51 = *(_DWORD *)(v33 + 16) + *(_DWORD *)(v32 + 40);
        v50 = *(_DWORD *)(v33 + 12);
        v70 = *(_WORD *)v33;
        v64 = *(_QWORD *)(v32 + 72);
        v63 = *(_QWORD *)(v32 + 216);
        v62 = v34;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027ED90,
          v33,
          v35,
          (__int64)&v62,
          (__int64)&v63,
          (__int64)&v64,
          (__int64)&v70,
          (__int64)&v50,
          (__int64)&v51,
          (void **)&v65,
          (__int64)&v52,
          (__int64)&v53,
          (__int64)&v54,
          (__int64)&v55,
          (__int64)&v37,
          (__int64)&v38,
          (__int64)&v39,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v42,
          (__int64)&v68,
          (__int64)&v43,
          (__int64)&v44,
          v69,
          (__int64)&v45,
          (__int64)&v46,
          (__int64)&v47,
          (__int64)&v48,
          (__int64)&v49,
          (__int64)&v71);
      }
    }
    else if ( v3 == 7 )
    {
      if ( (unsigned int)dword_14029EE20 > 4
        && (qword_14029EE30 & 0x20) != 0
        && (qword_14029EE38 & 0x20) == qword_14029EE38 )
      {
        v12 = *((_DWORD *)a3 + 24);
        v71 = *((_DWORD *)a3 + 37);
        v49 = *((_DWORD *)a3 + 36);
        v48 = *((_DWORD *)a3 + 35);
        v47 = *((_DWORD *)a3 + 34);
        v46 = *((_DWORD *)a3 + 33);
        v45 = *((_DWORD *)a3 + 32);
        v44 = *((_DWORD *)a3 + 31);
        v43 = *((_DWORD *)a3 + 30);
        v42 = *((_DWORD *)a3 + 29);
        v36 = *((_DWORD *)a3 + 28);
        v41 = *((_DWORD *)a3 + 27);
        v40 = *((_DWORD *)a3 + 26);
        v13 = InputTraceLogging::ButtonChangeTypeToString(v12);
        v15 = *(_DWORD *)(v14 + 8);
        v69[0] = (void *)v13;
        v39 = *(_DWORD *)(v14 + 84);
        v38 = *(_DWORD *)(v14 + 76);
        v68 = *(_QWORD *)(v14 + 88);
        v37 = *(_DWORD *)(v14 + 72);
        v67 = *(_QWORD *)(v14 + 32);
        v66 = *(const char **)(v14 + 24);
        v55 = *(_DWORD *)(v14 + 80);
        v54 = *(_DWORD *)(v14 + 68);
        v53 = *(_DWORD *)(v14 + 64);
        v52 = *(_DWORD *)(v14 + 52);
        v51 = *(_DWORD *)(v14 + 48);
        v50 = *(_DWORD *)(v14 + 60);
        v58 = *(_DWORD *)(v14 + 56);
        v57 = *(_DWORD *)(v14 + 44);
        v56 = *(_DWORD *)(v14 + 40);
        v61 = *(_DWORD *)(v14 + 20);
        v65 = InputTraceLogging::PointerTypeToString(v15);
        v60 = *(_DWORD *)(v17 + 16) + *(_DWORD *)(v16 + 40);
        v59 = *(_DWORD *)(v17 + 12);
        v70 = *(_WORD *)v17;
        v64 = *(_QWORD *)(v16 + 72);
        v63 = *(_QWORD *)(v16 + 216);
        v62 = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027EF15,
          v17,
          v19,
          (__int64)&v62,
          (__int64)&v63,
          (__int64)&v64,
          (__int64)&v70,
          (__int64)&v59,
          (__int64)&v60,
          (void **)&v65,
          (__int64)&v61,
          (__int64)&v56,
          (__int64)&v57,
          (__int64)&v58,
          (__int64)&v50,
          (__int64)&v51,
          (__int64)&v52,
          (__int64)&v53,
          (__int64)&v54,
          (__int64)&v55,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v37,
          (__int64)&v68,
          (__int64)&v38,
          (__int64)&v39,
          v69,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v42,
          (__int64)&v43,
          (__int64)&v44,
          (__int64)&v45,
          (__int64)&v46,
          (__int64)&v47,
          (__int64)&v48,
          (__int64)&v49,
          (__int64)&v71);
      }
    }
    else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 32LL) )
    {
      v21 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(v20 + 96));
      v23 = *(_DWORD *)(v22 + 8);
      v69[0] = (void *)v21;
      v71 = *(_DWORD *)(v22 + 84);
      v49 = *(_DWORD *)(v22 + 76);
      v68 = *(_QWORD *)(v22 + 88);
      v48 = *(_DWORD *)(v22 + 72);
      v67 = *(_QWORD *)(v22 + 32);
      v66 = *(const char **)(v22 + 24);
      v47 = *(_DWORD *)(v22 + 80);
      v46 = *(_DWORD *)(v22 + 68);
      v45 = *(_DWORD *)(v22 + 64);
      v44 = *(_DWORD *)(v22 + 52);
      v43 = *(_DWORD *)(v22 + 48);
      v42 = *(_DWORD *)(v22 + 60);
      v36 = *(_DWORD *)(v22 + 56);
      v41 = *(_DWORD *)(v22 + 44);
      v40 = *(_DWORD *)(v22 + 40);
      v39 = *(_DWORD *)(v22 + 20);
      v65 = InputTraceLogging::PointerTypeToString(v23);
      v38 = *(_DWORD *)(v25 + 16) + *(_DWORD *)(v24 + 40);
      v37 = *(_DWORD *)(v25 + 12);
      v70 = *(_WORD *)v25;
      v64 = *(_QWORD *)(v24 + 72);
      v63 = *(_QWORD *)(v24 + 216);
      v62 = v26;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027F0E2,
        v25,
        v27,
        (__int64)&v62,
        (__int64)&v63,
        (__int64)&v64,
        (__int64)&v70,
        (__int64)&v37,
        (__int64)&v38,
        (void **)&v65,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v36,
        (__int64)&v42,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v45,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v66,
        (__int64)&v67,
        (__int64)&v48,
        (__int64)&v68,
        (__int64)&v49,
        (__int64)&v71,
        v69);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 4
         && (qword_14029EE30 & 0x20) != 0
         && (qword_14029EE38 & 0x20) == qword_14029EE38 )
  {
    v4 = *((_DWORD *)a3 + 24);
    v71 = *((_DWORD *)a3 + 37);
    v59 = *((_DWORD *)a3 + 36);
    v60 = *((_DWORD *)a3 + 35);
    v61 = *((_DWORD *)a3 + 34);
    v56 = *((_DWORD *)a3 + 33);
    v57 = *((_DWORD *)a3 + 32);
    v58 = *((_DWORD *)a3 + 31);
    v50 = *((_DWORD *)a3 + 30);
    v51 = *((_DWORD *)a3 + 29);
    v52 = *((_DWORD *)a3 + 28);
    v53 = *((_DWORD *)a3 + 27);
    v54 = *((_DWORD *)a3 + 26);
    v5 = InputTraceLogging::ButtonChangeTypeToString(v4);
    v7 = *(_DWORD *)(v6 + 8);
    v62 = v5;
    v55 = *(_DWORD *)(v6 + 84);
    v37 = *(_DWORD *)(v6 + 76);
    v63 = *(_QWORD *)(v6 + 88);
    v38 = *(_DWORD *)(v6 + 72);
    v64 = *(_QWORD *)(v6 + 32);
    v65 = *(const char **)(v6 + 24);
    v39 = *(_DWORD *)(v6 + 80);
    v40 = *(_DWORD *)(v6 + 68);
    v41 = *(_DWORD *)(v6 + 64);
    v36 = *(_DWORD *)(v6 + 52);
    v42 = *(_DWORD *)(v6 + 48);
    v43 = *(_DWORD *)(v6 + 60);
    v44 = *(_DWORD *)(v6 + 56);
    v45 = *(_DWORD *)(v6 + 44);
    v46 = *(_DWORD *)(v6 + 40);
    v47 = *(_DWORD *)(v6 + 20);
    v66 = InputTraceLogging::PointerTypeToString(v7);
    v48 = *(_DWORD *)(v9 + 16) + *(_DWORD *)(v8 + 40);
    v49 = *(_DWORD *)(v9 + 12);
    v70 = *(_WORD *)v9;
    v67 = *(_QWORD *)(v8 + 72);
    v68 = *(_QWORD *)(v8 + 216);
    v69[0] = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_14027EBC1,
      v9,
      v11,
      (__int64)v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v70,
      (__int64)&v49,
      (__int64)&v48,
      (void **)&v66,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v36,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v38,
      (__int64)&v63,
      (__int64)&v37,
      (__int64)&v55,
      (void **)&v62,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v71);
  }
}
