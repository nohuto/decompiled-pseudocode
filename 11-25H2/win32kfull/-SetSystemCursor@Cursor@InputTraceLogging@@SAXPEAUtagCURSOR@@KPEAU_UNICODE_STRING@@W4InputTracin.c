/*
 * XREFs of ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401220D0
 * Callers:
 *     ?LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140122044 (-LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x140002908 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_140002908.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x140002B14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401D5EB8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x140273824 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x140273978 (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 *     ?SwapReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_SetSystemCursorReason@@@Z @ 0x140273C28 (-SwapReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_SetSystemCursorReason@@@Z.c)
 */

char __fastcall InputTraceLogging::Cursor::SetSystemCursor(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  char result; // al
  const wchar_t *v10; // rbx
  __int64 v11; // r9
  struct tagCURSOR *v12; // rcx
  struct tagCURSOR *CursorOrFrame; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rbx
  struct tagCURSOR *v17; // rcx
  struct tagCURSOR *v18; // rax
  int v19; // [rsp+A8h] [rbp-19h] BYREF
  int v20; // [rsp+ACh] [rbp-15h] BYREF
  int v21; // [rsp+B0h] [rbp-11h] BYREF
  int v22; // [rsp+B4h] [rbp-Dh] BYREF
  int v23; // [rsp+B8h] [rbp-9h] BYREF
  int v24; // [rsp+BCh] [rbp-5h] BYREF
  int v25; // [rsp+C0h] [rbp-1h] BYREF
  struct tagCURSOR *v26; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+Fh] BYREF
  struct tagCURSOR *v28; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+1Fh] BYREF
  const char *v30; // [rsp+E8h] [rbp+27h] BYREF
  const wchar_t *v31; // [rsp+F0h] [rbp+2Fh] BYREF
  __int64 v32; // [rsp+F8h] [rbp+37h] BYREF
  __int64 v33; // [rsp+100h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_14039BB50 > 5 && (qword_14039BB60 & 8) != 0 && (qword_14039BB68 & 8) == qword_14039BB68 )
  {
    if ( a3 )
    {
      v10 = *(const wchar_t **)(a3 + 8);
      if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v11 = (unsigned __int16)v10;
        v10 = a5;
        RtlStringCchPrintfW(a5, 0x104uLL, L"ResourceID %i", v11);
      }
    }
    else
    {
      v10 = L"Empty";
    }
    v31 = v10;
    a6 = a2;
    v25 = *(_DWORD *)UPDWORDPointer(8232LL);
    v32 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 13);
    v33 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 12);
    v26 = (struct tagCURSOR *)*((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 11);
    v19 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 43);
    v20 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 42);
    v21 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 36) >> 1;
    v22 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 35);
    v23 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 20);
    v24 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 19);
    v27 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 6);
    if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v12);
    else
      CursorOrFrame = 0LL;
    v28 = CursorOrFrame;
    v29 = InputTraceLogging::SwapReasonToString(a4);
    v30 = InputTraceLogging::CurIndexName(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_14039BB50,
      (__int64)&unk_14036630A,
      v14,
      v15,
      &v30,
      &v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v26,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v25,
      (__int64)&a6,
      &v31);
  }
  result = InputTraceLogging::Enabled(8, 0);
  if ( result && a1 )
  {
    for ( i = *(_QWORD *)(a1 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)dword_14039BB50 > 5 )
      {
        result = tlgKeywordOn(&dword_14039BB50, 8LL);
        if ( result )
        {
          a6 = *(_DWORD *)UPDWORDPointer(8232LL);
          v30 = (const char *)*((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 13);
          v29 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 12);
          v28 = (struct tagCURSOR *)*((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 11);
          v24 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 43);
          v23 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 42);
          v22 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 36) >> 1;
          v21 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 35);
          v20 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 20);
          v19 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 19);
          v27 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6);
          if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6) )
            v18 = InputTraceLogging::GetCursorOrFrame(v17);
          else
            v18 = 0LL;
          v26 = v18;
          result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_14039BB50,
                     (__int64)&unk_1403663BC);
        }
      }
    }
  }
  return result;
}
