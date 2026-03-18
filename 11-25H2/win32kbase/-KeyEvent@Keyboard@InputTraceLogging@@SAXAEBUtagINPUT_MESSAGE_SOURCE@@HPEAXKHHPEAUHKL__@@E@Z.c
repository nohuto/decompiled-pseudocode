/*
 * XREFs of ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x1400B78D4
 * Callers:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@444@Z @ 0x1400B6AA0 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U-$_t.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1400B6D24 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400B6D6C (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 */

void __fastcall InputTraceLogging::Keyboard::KeyEvent(
        const struct tagINPUT_MESSAGE_SOURCE *a1,
        int a2,
        void *a3,
        __int64 a4,
        int a5,
        int a6,
        HKL a7,
        char a8)
{
  int v9; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  unsigned __int64 v44; // rcx
  __int16 v45; // di
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // ecx
  const char *v50; // rax
  int v51; // ecx
  __int64 v52; // r8
  __int64 v53; // r9
  _BYTE v54[2]; // [rsp+98h] [rbp-29h] BYREF
  __int16 v55; // [rsp+9Ah] [rbp-27h] BYREF
  unsigned int v56; // [rsp+9Ch] [rbp-25h] BYREF
  unsigned int v57; // [rsp+A0h] [rbp-21h] BYREF
  int v58; // [rsp+A4h] [rbp-1Dh] BYREF
  int v59; // [rsp+A8h] [rbp-19h] BYREF
  int v60; // [rsp+ACh] [rbp-15h] BYREF
  int v61; // [rsp+B0h] [rbp-11h] BYREF
  int v62; // [rsp+B4h] [rbp-Dh] BYREF
  int v63; // [rsp+B8h] [rbp-9h] BYREF
  void *v64; // [rsp+C0h] [rbp-1h] BYREF
  const char *v65; // [rsp+C8h] [rbp+7h] BYREF
  const char *v66; // [rsp+D0h] [rbp+Fh] BYREF

  v9 = a4;
  v13 = 0;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0x4000LL, 0LL, a3, a4) )
  {
    v14 = *(_BYTE *)(W32GetUserSessionState(v12, v11) + 14340) & 1;
    v19 = v14 | 2;
    if ( (*(_BYTE *)(W32GetUserSessionState(v16, v15) + 14376) & 1) == 0 )
      v19 = v14;
    v22 = v19 | 4;
    if ( (*(_BYTE *)(W32GetUserSessionState(v18, v17) + 14376) & 4) == 0 )
      v22 = v19;
    v25 = v22 | 8;
    if ( (*(_BYTE *)(W32GetUserSessionState(v21, v20) + 14340) & 0x10) == 0 )
      v25 = v22;
    v28 = v25 | 0x10;
    if ( (*(_BYTE *)(W32GetUserSessionState(v24, v23) + 14377) & 1) == 0 )
      v28 = v25;
    v31 = v28 | 0x20;
    if ( (*(_BYTE *)(W32GetUserSessionState(v27, v26) + 14377) & 4) == 0 )
      v31 = v28;
    v34 = v31 | 0x40;
    if ( (*(_BYTE *)(W32GetUserSessionState(v30, v29) + 14340) & 4) == 0 )
      v34 = v31;
    v37 = v34 | 0x80;
    if ( (*(_BYTE *)(W32GetUserSessionState(v33, v32) + 14376) & 0x10) == 0 )
      v37 = v34;
    v40 = v37 | 0x100;
    if ( (*(_BYTE *)(W32GetUserSessionState(v36, v35) + 14376) & 0x40) == 0 )
      v40 = v37;
    v43 = v40 | 0x200;
    if ( (*(_BYTE *)(W32GetUserSessionState(v39, v38) + 14358) & 0x40) == 0 )
      v43 = v40;
    v45 = v43 | 0x400;
    if ( (*(_BYTE *)(W32GetUserSessionState(v42, v41) + 14359) & 1) == 0 )
      v45 = v43;
    LOBYTE(v43) = a8;
    if ( (v45 & 0x648) == 0 )
    {
      if ( (unsigned __int8)(a8 - 48) <= 0x3Fu
        && (v44 = 0xFFFF07FFFFFFFFFFuLL, _bittest64((const __int64 *)&v44, (unsigned int)(v43 - 48)))
        || (unsigned __int8)(a8 + 70) <= 6u
        || (unsigned __int8)(a8 + 37) <= 7u )
      {
        LOBYTE(v43) = -1;
      }
    }
    if ( (unsigned int)dword_14029EE20 > 4
      && (qword_14029EE30 & 0x4000) != 0
      && (qword_14029EE38 & 0x4000) == qword_14029EE38 )
    {
      v56 = *(_DWORD *)(W32GetUserSessionState(v44, 0x4000LL) + 20468);
      v57 = *(_DWORD *)(W32GetUserSessionState(v56, v46) + 20572);
      LOBYTE(v13) = a2 == 0;
      v48 = *(unsigned __int16 *)(W32GetUserSessionState(v57, v47) + 12854);
      v59 = (int)a7;
      v60 = a6;
      v58 = v48;
      v49 = *((_DWORD *)a1 + 1);
      v61 = a5;
      v55 = v45;
      v54[0] = v43;
      v62 = v9;
      v64 = a3;
      v63 = v13;
      v50 = InputTraceLogging::OriginIdToString(v49);
      v51 = *(_DWORD *)a1;
      v65 = v50;
      v66 = InputTraceLogging::DeviceTypeToString(v51);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EE20,
        byte_140281262,
        v52,
        v53,
        (void **)&v66,
        (void **)&v65,
        (__int64)&v63,
        (__int64)&v64,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)v54,
        (__int64)&v55,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56);
    }
  }
}
