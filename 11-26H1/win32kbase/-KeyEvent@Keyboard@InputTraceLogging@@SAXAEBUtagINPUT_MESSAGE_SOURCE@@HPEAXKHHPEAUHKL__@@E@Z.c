/*
 * XREFs of ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x1401252D8
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 * Callees:
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x140125818 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140125860 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@444@Z @ 0x1401258D0 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U-$_t.c)
 */

void __fastcall InputTraceLogging::Keyboard::KeyEvent(
        const struct tagINPUT_MESSAGE_SOURCE *a1,
        int a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        HKL a7,
        char a8)
{
  int v8; // r14d
  int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edi
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // esi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // ebx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edi
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // edi
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // ebx
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edi
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // ebx
  unsigned __int64 v52; // rcx
  int v53; // r8d
  __int16 v54; // di
  int v55; // edx
  int v56; // r8d
  int v57; // edx
  int v58; // r8d
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  _BYTE v65[2]; // [rsp+98h] [rbp-29h] BYREF
  __int16 v66; // [rsp+9Ah] [rbp-27h] BYREF
  int v67; // [rsp+9Ch] [rbp-25h] BYREF
  int v68; // [rsp+A0h] [rbp-21h] BYREF
  int v69; // [rsp+A4h] [rbp-1Dh] BYREF
  int v70; // [rsp+A8h] [rbp-19h] BYREF
  int v71; // [rsp+ACh] [rbp-15h] BYREF
  int v72; // [rsp+B0h] [rbp-11h] BYREF
  int v73; // [rsp+B4h] [rbp-Dh] BYREF
  int v74; // [rsp+B8h] [rbp-9h] BYREF
  void *v75; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v76; // [rsp+C8h] [rbp+7h] BYREF
  const char *v77; // [rsp+D0h] [rbp+Fh] BYREF

  v8 = 0;
  if ( dword_1402A9E40 && (qword_1402A9E50 & 0x4000) != 0 && (qword_1402A9E58 & 0x4000) == qword_1402A9E58 )
  {
    v12 = *(_BYTE *)(W32GetUserSessionState(0x4000, a2, (_DWORD)a3) + 14332) & 1;
    v19 = v12 | 2;
    if ( (*(_BYTE *)(W32GetUserSessionState(v14, v13, v15) + 14368) & 1) == 0 )
      v19 = v12;
    v23 = v19 | 4;
    if ( (*(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 14368) & 4) == 0 )
      v23 = v19;
    v27 = v23 | 8;
    if ( (*(_BYTE *)(W32GetUserSessionState(v21, v20, v22) + 14332) & 0x10) == 0 )
      v27 = v23;
    v31 = v27 | 0x10;
    if ( (*(_BYTE *)(W32GetUserSessionState(v25, v24, v26) + 14369) & 1) == 0 )
      v31 = v27;
    v35 = v31 | 0x20;
    if ( (*(_BYTE *)(W32GetUserSessionState(v29, v28, v30) + 14369) & 4) == 0 )
      v35 = v31;
    v39 = v35 | 0x40;
    if ( (*(_BYTE *)(W32GetUserSessionState(v33, v32, v34) + 14332) & 4) == 0 )
      v39 = v35;
    v43 = v39 | 0x80;
    if ( (*(_BYTE *)(W32GetUserSessionState(v37, v36, v38) + 14368) & 0x10) == 0 )
      v43 = v39;
    v47 = v43 | 0x100;
    if ( (*(_BYTE *)(W32GetUserSessionState(v41, v40, v42) + 14368) & 0x40) == 0 )
      v47 = v43;
    v51 = v47 | 0x200;
    if ( (*(_BYTE *)(W32GetUserSessionState(v45, v44, v46) + 14350) & 0x40) == 0 )
      v51 = v47;
    v54 = v51 | 0x400;
    if ( (*(_BYTE *)(W32GetUserSessionState(v49, v48, v50) + 14351) & 1) == 0 )
      v54 = v51;
    LOBYTE(v51) = a8;
    if ( (v54 & 0x648) == 0 )
    {
      if ( (unsigned __int8)(a8 - 48) <= 0x3Fu
        && (v52 = 0xFFFF07FFFFFFFFFFuLL, _bittest64((const __int64 *)&v52, (unsigned int)(v51 - 48)))
        || (unsigned __int8)(a8 + 70) <= 6u
        || (unsigned __int8)(a8 + 37) <= 7u )
      {
        LOBYTE(v51) = -1;
      }
    }
    if ( (unsigned int)dword_1402A9E40 > 4
      && (qword_1402A9E50 & 0x4000) != 0
      && (qword_1402A9E58 & 0x4000) == qword_1402A9E58 )
    {
      v67 = *(_DWORD *)(W32GetUserSessionState(v52, 0x4000, v53) + 20500);
      v68 = *(_DWORD *)(W32GetUserSessionState(v67, v55, v56) + 20604);
      LOBYTE(v8) = a2 == 0;
      v59 = *(unsigned __int16 *)(W32GetUserSessionState(v68, v57, v58) + 12854);
      v70 = (int)a7;
      v71 = a6;
      v69 = v59;
      v60 = *((unsigned int *)a1 + 1);
      v72 = a5;
      v66 = v54;
      v65[0] = v51;
      v73 = a4;
      v75 = a3;
      v74 = v8;
      v61 = InputTraceLogging::OriginIdToString(v60);
      v62 = *(_DWORD *)a1;
      v76 = v61;
      v77 = InputTraceLogging::DeviceTypeToString(v62);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_14028B85E,
        v63,
        v64,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v74,
        (__int64)&v75,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)v65,
        (__int64)&v66,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67);
    }
  }
}
