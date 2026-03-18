/*
 * XREFs of ?WindowFromPoint@Win32k@InputTraceLogging@@SAXAEBUtagPOINT@@PEAUtagWND@@@Z @ 0x14002E7F0
 * Callers:
 *     xxxWindowFromPoint @ 0x14002E584 (xxxWindowFromPoint.c)
 * Callees:
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400692AC (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x140208484 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

void __fastcall InputTraceLogging::Win32k::WindowFromPoint(const struct tagPOINT *a1, struct tagWND *a2)
{
  __int64 WindowDetails; // rax
  __int128 v4; // xmm1
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+70h] [rbp-29h] BYREF
  int v8; // [rsp+74h] [rbp-25h] BYREF
  LONG y; // [rsp+78h] [rbp-21h] BYREF
  LONG x; // [rsp+7Ch] [rbp-1Dh] BYREF
  __int128 v11; // [rsp+80h] [rbp-19h] BYREF
  __int64 v12; // [rsp+90h] [rbp-9h] BYREF
  __int128 v13; // [rsp+98h] [rbp-1h]
  __int128 v14; // [rsp+A8h] [rbp+Fh]
  __int64 v15; // [rsp+B8h] [rbp+1Fh]
  _BYTE v16[48]; // [rsp+C0h] [rbp+27h] BYREF
  int v17; // [rsp+110h] [rbp+77h] BYREF
  int v18; // [rsp+118h] [rbp+7Fh] BYREF

  if ( dword_14039BB50 )
  {
    if ( (qword_14039BB60 & 2) != 0 && (qword_14039BB68 & 2) == qword_14039BB68 )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v16, a2);
      v4 = *(_OWORD *)(WindowDetails + 16);
      v13 = *(_OWORD *)WindowDetails;
      v15 = *(_QWORD *)(WindowDetails + 32);
      v14 = v4;
      if ( (unsigned int)dword_14039BB50 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 2LL) )
        {
          v11 = v13;
          v17 = HIDWORD(v15);
          v18 = v15;
          v7 = HIDWORD(v14);
          v12 = v14;
          y = a1->y;
          x = a1->x;
          v8 = DWORD2(v14);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (unsigned int)&dword_14039BB50,
            (unsigned int)&unk_140369189,
            v5,
            v6,
            (__int64)&x,
            (__int64)&y,
            (__int64)&v12,
            (__int64)&v8,
            (__int64)&v7,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v11 + 8,
            (__int64)&v11);
        }
      }
    }
  }
}
