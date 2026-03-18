/*
 * XREFs of ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1400F3F90
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x140063DB0 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556555555@Z @ 0x140002104 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556555555555555@Z @ 0x1400F4A34 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVa_ea_1400F4A34.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4E24 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400F4E94 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556@Z @ 0x14015D9E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVa_ea_14015D9E4.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFramePointer(
        const struct RIMDEV *a1,
        const struct CPointerInputFrame *a2,
        const struct tagPOINTEREVENTINT *a3)
{
  int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int16 *v9; // r8
  __int64 v10; // r11
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int16 *v17; // r8
  __int64 v18; // r11
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 v25; // r10
  __int16 *v26; // r8
  __int64 v27; // r11
  int v28; // r9d
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r11
  __int64 v36; // r9
  int v37; // [rsp+140h] [rbp-80h] BYREF
  int v38; // [rsp+144h] [rbp-7Ch] BYREF
  int v39; // [rsp+148h] [rbp-78h] BYREF
  int v40; // [rsp+14Ch] [rbp-74h] BYREF
  int v41; // [rsp+150h] [rbp-70h] BYREF
  int v42; // [rsp+154h] [rbp-6Ch] BYREF
  int v43; // [rsp+158h] [rbp-68h] BYREF
  int v44; // [rsp+15Ch] [rbp-64h] BYREF
  int v45; // [rsp+160h] [rbp-60h] BYREF
  int v46; // [rsp+164h] [rbp-5Ch] BYREF
  int v47; // [rsp+168h] [rbp-58h] BYREF
  int v48; // [rsp+16Ch] [rbp-54h] BYREF
  int v49; // [rsp+170h] [rbp-50h] BYREF
  int v50; // [rsp+174h] [rbp-4Ch] BYREF
  int v51; // [rsp+178h] [rbp-48h] BYREF
  int v52; // [rsp+17Ch] [rbp-44h] BYREF
  int v53; // [rsp+180h] [rbp-40h] BYREF
  int v54; // [rsp+184h] [rbp-3Ch] BYREF
  int v55; // [rsp+188h] [rbp-38h] BYREF
  int v56; // [rsp+18Ch] [rbp-34h] BYREF
  __int64 v57; // [rsp+190h] [rbp-30h] BYREF
  const char *v58; // [rsp+198h] [rbp-28h] BYREF
  __int64 v59; // [rsp+1A0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v61; // [rsp+1B0h] [rbp-10h] BYREF
  void *v62; // [rsp+1B8h] [rbp-8h] BYREF
  __int64 v63; // [rsp+1C0h] [rbp+0h] BYREF
  __int64 v64; // [rsp+1C8h] [rbp+8h] BYREF
  __int64 v65; // [rsp+1D0h] [rbp+10h] BYREF
  const char *v66; // [rsp+1D8h] [rbp+18h] BYREF
  const char *v67; // [rsp+1E0h] [rbp+20h] BYREF
  __int64 v68; // [rsp+1E8h] [rbp+28h] BYREF
  __int64 v69; // [rsp+1F0h] [rbp+30h] BYREF
  __int64 v70; // [rsp+1F8h] [rbp+38h] BYREF
  __int16 v71; // [rsp+210h] [rbp+50h] BYREF
  int v72; // [rsp+228h] [rbp+68h] BYREF

  v3 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL);
  if ( v3 == 1 || (unsigned int)(v3 - 2) <= 2 )
  {
    if ( (unsigned int)dword_1402A9E40 > 4
      && (qword_1402A9E50 & 0x20) != 0
      && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
    {
      v4 = *((unsigned int *)a3 + 24);
      v72 = *((_DWORD *)a3 + 37);
      LODWORD(v62) = *((_DWORD *)a3 + 36);
      LODWORD(v61) = *((_DWORD *)a3 + 35);
      LODWORD(v60) = *((_DWORD *)a3 + 34);
      LODWORD(v59) = *((_DWORD *)a3 + 33);
      LODWORD(v58) = *((_DWORD *)a3 + 32);
      LODWORD(v57) = *((_DWORD *)a3 + 31);
      v44 = *((_DWORD *)a3 + 30);
      v43 = *((_DWORD *)a3 + 29);
      v37 = *((_DWORD *)a3 + 28);
      v38 = *((_DWORD *)a3 + 27);
      v42 = *((_DWORD *)a3 + 26);
      v5 = InputTraceLogging::ButtonChangeTypeToString(v4, a2, a3);
      v7 = *(_DWORD *)(v6 + 8);
      v70 = v5;
      v41 = *(_DWORD *)(v6 + 84);
      v40 = *(_DWORD *)(v6 + 76);
      v69 = *(_QWORD *)(v6 + 88);
      v39 = *(_DWORD *)(v6 + 72);
      v68 = *(_QWORD *)(v6 + 32);
      v67 = *(const char **)(v6 + 24);
      v53 = *(_DWORD *)(v6 + 80);
      v52 = *(_DWORD *)(v6 + 68);
      v51 = *(_DWORD *)(v6 + 64);
      v50 = *(_DWORD *)(v6 + 52);
      v49 = *(_DWORD *)(v6 + 48);
      v48 = *(_DWORD *)(v6 + 60);
      v47 = *(_DWORD *)(v6 + 56);
      v46 = *(_DWORD *)(v6 + 44);
      v45 = *(_DWORD *)(v6 + 40);
      v56 = *(_DWORD *)(v6 + 20);
      v66 = InputTraceLogging::PointerTypeToString(v7);
      v55 = *((_DWORD *)v9 + 4) + *(_DWORD *)(v8 + 40);
      v54 = *((_DWORD *)v9 + 3);
      v71 = *v9;
      v65 = *(_QWORD *)(v8 + 72);
      v64 = *(_QWORD *)(v8 + 216);
      v63 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_14028936E,
        (_DWORD)v9,
        v11,
        (__int64)&v63,
        (__int64)&v64,
        (__int64)&v65,
        (__int64)&v71,
        (__int64)&v54,
        (__int64)&v55,
        (__int64)&v66,
        (__int64)&v56,
        (__int64)&v45,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v48,
        (__int64)&v49,
        (__int64)&v50,
        (__int64)&v51,
        (__int64)&v52,
        (__int64)&v53,
        (__int64)&v67,
        (__int64)&v68,
        (__int64)&v39,
        (__int64)&v69,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v70,
        (__int64)&v42,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v57,
        (__int64)&v58,
        (__int64)&v59,
        (__int64)&v60,
        (__int64)&v61,
        (__int64)&v62,
        (__int64)&v72);
    }
  }
  else if ( (unsigned int)(v3 - 5) <= 1 )
  {
    if ( (unsigned int)dword_1402A9E40 > 4
      && (qword_1402A9E50 & 0x20) != 0
      && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
    {
      v29 = *((unsigned int *)a3 + 24);
      v72 = *((_DWORD *)a3 + 31);
      v54 = *((_DWORD *)a3 + 30);
      v55 = *((_DWORD *)a3 + 29);
      v56 = *((_DWORD *)a3 + 28);
      v45 = *((_DWORD *)a3 + 27);
      v46 = *((_DWORD *)a3 + 26);
      v30 = (void *)InputTraceLogging::ButtonChangeTypeToString(v29, a2, a3);
      v32 = *(_DWORD *)(v31 + 8);
      v62 = v30;
      v47 = *(_DWORD *)(v31 + 84);
      v48 = *(_DWORD *)(v31 + 76);
      v61 = *(_QWORD *)(v31 + 88);
      v49 = *(_DWORD *)(v31 + 72);
      v60 = *(_QWORD *)(v31 + 32);
      v59 = *(_QWORD *)(v31 + 24);
      v50 = *(_DWORD *)(v31 + 80);
      v51 = *(_DWORD *)(v31 + 68);
      v52 = *(_DWORD *)(v31 + 64);
      v53 = *(_DWORD *)(v31 + 52);
      v39 = *(_DWORD *)(v31 + 48);
      v40 = *(_DWORD *)(v31 + 60);
      v41 = *(_DWORD *)(v31 + 56);
      v42 = *(_DWORD *)(v31 + 44);
      v38 = *(_DWORD *)(v31 + 40);
      v37 = *(_DWORD *)(v31 + 20);
      v58 = InputTraceLogging::PointerTypeToString(v32);
      v43 = *(_DWORD *)(v34 + 16) + *(_DWORD *)(v33 + 40);
      v44 = *(_DWORD *)(v34 + 12);
      v71 = *(_WORD *)v34;
      v57 = *(_QWORD *)(v33 + 72);
      v63 = *(_QWORD *)(v33 + 216);
      v64 = v35;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1402A9E40,
        (__int64)&unk_14028953D,
        v34,
        v36,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v57,
        (__int64)&v71,
        (__int64)&v44,
        (__int64)&v43,
        (void **)&v58,
        (__int64)&v37,
        (__int64)&v38,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v59,
        (__int64)&v60,
        (__int64)&v49,
        (__int64)&v61,
        (__int64)&v48,
        (__int64)&v47,
        &v62,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v72);
    }
  }
  else if ( v3 == 7 )
  {
    if ( (unsigned int)dword_1402A9E40 > 4
      && (qword_1402A9E50 & 0x20) != 0
      && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
    {
      v12 = *((unsigned int *)a3 + 24);
      v72 = *((_DWORD *)a3 + 37);
      v44 = *((_DWORD *)a3 + 36);
      v43 = *((_DWORD *)a3 + 35);
      v37 = *((_DWORD *)a3 + 34);
      v38 = *((_DWORD *)a3 + 33);
      v42 = *((_DWORD *)a3 + 32);
      v41 = *((_DWORD *)a3 + 31);
      v40 = *((_DWORD *)a3 + 30);
      v39 = *((_DWORD *)a3 + 29);
      v53 = *((_DWORD *)a3 + 28);
      v52 = *((_DWORD *)a3 + 27);
      v51 = *((_DWORD *)a3 + 26);
      v13 = InputTraceLogging::ButtonChangeTypeToString(v12, a2, a3);
      v15 = *(_DWORD *)(v14 + 8);
      v64 = v13;
      v50 = *(_DWORD *)(v14 + 84);
      v49 = *(_DWORD *)(v14 + 76);
      v63 = *(_QWORD *)(v14 + 88);
      v48 = *(_DWORD *)(v14 + 72);
      v65 = *(_QWORD *)(v14 + 32);
      v66 = *(const char **)(v14 + 24);
      v47 = *(_DWORD *)(v14 + 80);
      v46 = *(_DWORD *)(v14 + 68);
      v45 = *(_DWORD *)(v14 + 64);
      v56 = *(_DWORD *)(v14 + 52);
      v55 = *(_DWORD *)(v14 + 48);
      v54 = *(_DWORD *)(v14 + 60);
      LODWORD(v57) = *(_DWORD *)(v14 + 56);
      LODWORD(v58) = *(_DWORD *)(v14 + 44);
      LODWORD(v59) = *(_DWORD *)(v14 + 40);
      LODWORD(v60) = *(_DWORD *)(v14 + 20);
      v67 = InputTraceLogging::PointerTypeToString(v15);
      LODWORD(v61) = *((_DWORD *)v17 + 4) + *(_DWORD *)(v16 + 40);
      LODWORD(v62) = *((_DWORD *)v17 + 3);
      v71 = *v17;
      v68 = *(_QWORD *)(v16 + 72);
      v69 = *(_QWORD *)(v16 + 216);
      v70 = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_1402896C2,
        (_DWORD)v17,
        v19,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v71,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v67,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v54,
        (__int64)&v55,
        (__int64)&v56,
        (__int64)&v45,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v48,
        (__int64)&v63,
        (__int64)&v49,
        (__int64)&v50,
        (__int64)&v64,
        (__int64)&v51,
        (__int64)&v52,
        (__int64)&v53,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v42,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v72);
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
  {
    v22 = InputTraceLogging::ButtonChangeTypeToString(*(unsigned int *)(v21 + 96), v20, v21);
    v24 = *(_DWORD *)(v23 + 8);
    v70 = v22;
    v72 = *(_DWORD *)(v23 + 84);
    LODWORD(v62) = *(_DWORD *)(v23 + 76);
    v69 = *(_QWORD *)(v23 + 88);
    LODWORD(v61) = *(_DWORD *)(v23 + 72);
    v68 = *(_QWORD *)(v23 + 32);
    v67 = *(const char **)(v23 + 24);
    LODWORD(v60) = *(_DWORD *)(v23 + 80);
    LODWORD(v59) = *(_DWORD *)(v23 + 68);
    LODWORD(v58) = *(_DWORD *)(v23 + 64);
    LODWORD(v57) = *(_DWORD *)(v23 + 52);
    v44 = *(_DWORD *)(v23 + 48);
    v43 = *(_DWORD *)(v23 + 60);
    v37 = *(_DWORD *)(v23 + 56);
    v38 = *(_DWORD *)(v23 + 44);
    v42 = *(_DWORD *)(v23 + 40);
    v41 = *(_DWORD *)(v23 + 20);
    v66 = InputTraceLogging::PointerTypeToString(v24);
    v40 = *((_DWORD *)v26 + 4) + *(_DWORD *)(v25 + 40);
    v39 = *((_DWORD *)v26 + 3);
    v71 = *v26;
    v65 = *(_QWORD *)(v25 + 72);
    v64 = *(_QWORD *)(v25 + 216);
    v63 = v27;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_1402891BD,
      (_DWORD)v26,
      v28,
      (__int64)&v63,
      (__int64)&v64,
      (__int64)&v65,
      (__int64)&v71,
      (__int64)&v39,
      (__int64)&v40,
      (__int64)&v66,
      (__int64)&v41,
      (__int64)&v42,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v43,
      (__int64)&v44,
      (__int64)&v57,
      (__int64)&v58,
      (__int64)&v59,
      (__int64)&v60,
      (__int64)&v67,
      (__int64)&v68,
      (__int64)&v61,
      (__int64)&v69,
      (__int64)&v62,
      (__int64)&v72,
      (__int64)&v70);
  }
}
