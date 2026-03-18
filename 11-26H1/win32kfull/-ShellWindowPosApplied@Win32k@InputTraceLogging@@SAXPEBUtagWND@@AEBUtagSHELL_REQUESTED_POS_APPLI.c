/*
 * XREFs of ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140293D34
 * Callers:
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@54444544444444@Z @ 0x14000361C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U-$_tlgWrapSz@D@@U3@U2@U2@U2@U2@U.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140090084 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z @ 0x1402DC4C4 (-WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Win32k::ShellWindowPosApplied(
        const struct tagWND *a1,
        const struct tagSHELL_REQUESTED_POS_APPLIED *a2)
{
  __int64 WindowDetails; // rax
  __int128 v4; // xmm1
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+D0h] [rbp-80h] BYREF
  int v11; // [rsp+D4h] [rbp-7Ch] BYREF
  int v12; // [rsp+D8h] [rbp-78h] BYREF
  int v13; // [rsp+DCh] [rbp-74h] BYREF
  int v14; // [rsp+E0h] [rbp-70h] BYREF
  int v15; // [rsp+E4h] [rbp-6Ch] BYREF
  int v16; // [rsp+E8h] [rbp-68h] BYREF
  int v17; // [rsp+ECh] [rbp-64h] BYREF
  int v18; // [rsp+F0h] [rbp-60h] BYREF
  int v19; // [rsp+F4h] [rbp-5Ch] BYREF
  int v20; // [rsp+F8h] [rbp-58h] BYREF
  int v21; // [rsp+FCh] [rbp-54h] BYREF
  int v22; // [rsp+100h] [rbp-50h] BYREF
  int v23; // [rsp+104h] [rbp-4Ch] BYREF
  void *v24; // [rsp+108h] [rbp-48h] BYREF
  __int64 v25; // [rsp+110h] [rbp-40h] BYREF
  __int128 v26; // [rsp+118h] [rbp-38h] BYREF
  const wchar_t *v27; // [rsp+128h] [rbp-28h] BYREF
  __int128 v28; // [rsp+130h] [rbp-20h]
  __int128 v29; // [rsp+140h] [rbp-10h]
  __int64 v30; // [rsp+150h] [rbp+0h]
  _BYTE v31[40]; // [rsp+158h] [rbp+8h] BYREF
  int v32; // [rsp+1A0h] [rbp+50h] BYREF
  int v33; // [rsp+1A8h] [rbp+58h] BYREF

  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 2) != 0 && (qword_1403AA9D8 & 2) == qword_1403AA9D8 )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v31, (__int64)a1);
      v4 = *(_OWORD *)(WindowDetails + 16);
      v28 = *(_OWORD *)WindowDetails;
      v30 = *(_QWORD *)(WindowDetails + 32);
      v29 = v4;
      if ( (unsigned int)dword_1403AA9C0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 2LL) )
        {
          v5 = *((unsigned int *)a2 + 1);
          v32 = *((_DWORD *)a2 + 13);
          v33 = *((_DWORD *)a2 + 12);
          v10 = *((_DWORD *)a2 + 11);
          v11 = *((_DWORD *)a2 + 10);
          v12 = *((_DWORD *)a2 + 9);
          v13 = *((_DWORD *)a2 + 8);
          v14 = *((_DWORD *)a2 + 7);
          v15 = *((_DWORD *)a2 + 6);
          v6 = (void *)InputTraceLogging::WindowStateToString(v5);
          v7 = *(unsigned int *)a2;
          v24 = v6;
          v16 = *((_DWORD *)a2 + 5);
          v17 = *((_DWORD *)a2 + 4);
          v18 = *((_DWORD *)a2 + 3);
          v19 = *((_DWORD *)a2 + 2);
          v25 = InputTraceLogging::WindowStateToString(v7);
          v26 = v28;
          v20 = HIDWORD(v30);
          v21 = v30;
          v22 = HIDWORD(v29);
          v27 = (const wchar_t *)v29;
          v23 = DWORD2(v29);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1403AA9C0,
            (__int64)&unk_140377DB4,
            v8,
            v9,
            &v27,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20,
            (const wchar_t **)&v26 + 1,
            (void **)&v26,
            (void **)&v25,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v16,
            &v24,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v33,
            (__int64)&v32);
        }
      }
    }
  }
}
