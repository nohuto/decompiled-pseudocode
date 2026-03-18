/*
 * XREFs of ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14026D0B8
 * Callers:
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014B5A4 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@54444544444444@Z @ 0x140004EFC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U-$_tlgWrapSz@D@@U3@U2@U2@U2@U2@U.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400692AC (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z @ 0x1402C2E4C (-WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Win32k::ShellWindowPosApplied(
        const struct tagWND *a1,
        const struct tagSHELL_REQUESTED_POS_APPLIED *a2)
{
  __int64 v3; // r9
  __int64 WindowDetails; // rax
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+E8h] [rbp-68h] BYREF
  int v11; // [rsp+ECh] [rbp-64h] BYREF
  int v12; // [rsp+F0h] [rbp-60h] BYREF
  int v13; // [rsp+F4h] [rbp-5Ch] BYREF
  int v14; // [rsp+F8h] [rbp-58h] BYREF
  int v15; // [rsp+FCh] [rbp-54h] BYREF
  int v16; // [rsp+100h] [rbp-50h] BYREF
  int v17; // [rsp+104h] [rbp-4Ch] BYREF
  __int64 v18; // [rsp+108h] [rbp-48h] BYREF
  __int64 v19; // [rsp+110h] [rbp-40h] BYREF
  __int128 v20; // [rsp+118h] [rbp-38h] BYREF
  __int64 v21; // [rsp+128h] [rbp-28h] BYREF
  __int128 v22; // [rsp+130h] [rbp-20h]
  __int128 v23; // [rsp+140h] [rbp-10h]
  __int64 v24; // [rsp+150h] [rbp+0h]
  _BYTE v25[40]; // [rsp+158h] [rbp+8h] BYREF

  if ( InputTraceLogging::Enabled(2, 0) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v25, v3);
    v5 = *(_OWORD *)(WindowDetails + 16);
    v22 = *(_OWORD *)WindowDetails;
    v24 = *(_QWORD *)(WindowDetails + 32);
    v23 = v5;
    if ( (unsigned int)dword_14039BB50 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_14039BB50, 2LL) )
      {
        v6 = InputTraceLogging::WindowStateToString(*((unsigned int *)a2 + 1));
        v7 = *(unsigned int *)a2;
        v18 = v6;
        v10 = *((_DWORD *)a2 + 5);
        v11 = *((_DWORD *)a2 + 4);
        v12 = *((_DWORD *)a2 + 3);
        v13 = *((_DWORD *)a2 + 2);
        v19 = InputTraceLogging::WindowStateToString(v7);
        v20 = v22;
        v14 = HIDWORD(v24);
        v15 = v24;
        v16 = HIDWORD(v23);
        v21 = v23;
        v17 = DWORD2(v23);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14039BB50,
          (__int64)&unk_14036A7F0,
          v8,
          v9,
          &v21,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (_QWORD *)&v20 + 1,
          &v20,
          &v19,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          &v18);
      }
    }
  }
}
