/*
 * XREFs of ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x14008FEC8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140090084 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@4444@Z @ 0x140091C54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U_ea_140091C54.c)
 */

void __fastcall InputTraceLogging::Mouse::SecondaryHitTest(
        const struct tagQMSG *a1,
        const struct tagPOINT *a2,
        struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 WindowDetails; // rax
  int v8; // r8d
  int v9; // r9d
  __int128 v10; // xmm1
  LONG x; // [rsp+90h] [rbp-80h] BYREF
  int v12; // [rsp+94h] [rbp-7Ch] BYREF
  int v13; // [rsp+98h] [rbp-78h] BYREF
  int v14; // [rsp+9Ch] [rbp-74h] BYREF
  int v15; // [rsp+A0h] [rbp-70h] BYREF
  int v16; // [rsp+A4h] [rbp-6Ch] BYREF
  int v17; // [rsp+A8h] [rbp-68h] BYREF
  int v18; // [rsp+ACh] [rbp-64h] BYREF
  __int128 v19; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-40h] BYREF
  __int128 v23; // [rsp+D8h] [rbp-38h]
  __int128 v24; // [rsp+E8h] [rbp-28h]
  __int64 v25; // [rsp+F8h] [rbp-18h]
  _BYTE v26[48]; // [rsp+100h] [rbp-10h] BYREF
  LONG y; // [rsp+168h] [rbp+58h] BYREF

  v3 = 0LL;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 0x40) != 0 && (qword_1403AA9D8 & 0x40) == qword_1403AA9D8 )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v26);
      v10 = *(_OWORD *)(WindowDetails + 16);
      v23 = *(_OWORD *)WindowDetails;
      v25 = *(_QWORD *)(WindowDetails + 32);
      v24 = v10;
      if ( (unsigned int)dword_1403AA9C0 > 4
        && (qword_1403AA9D0 & 0x40) != 0
        && (qword_1403AA9D8 & 0x40) == qword_1403AA9D8 )
      {
        y = a2->y;
        x = a2->x;
        v12 = *((_DWORD *)a1 + 21);
        v13 = *((_DWORD *)a1 + 20);
        v19 = v23;
        v14 = HIDWORD(v25);
        v15 = v25;
        v16 = HIDWORD(v24);
        v20 = v24;
        v17 = DWORD2(v24);
        if ( a3 )
          v3 = *(_QWORD *)a3;
        v18 = *((_DWORD *)a1 + 6);
        v22 = *((_QWORD *)a1 + 18);
        v21 = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_140374472,
          v8,
          v9,
          (__int64)&v22,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v19 + 8,
          (__int64)&v19,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&x,
          (__int64)&y);
      }
    }
  }
}
