/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401AFCBC
 * Callers:
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z @ 0x1401AFC50 (-SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U3@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55555444555545@Z @ 0x1400026E4 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1401AFF4C (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     ?CursorImageReasonToString@InputTraceLogging@@CAPEBDW4CursorImageReason@Cursor@1@@Z @ 0x140273870 (-CursorImageReasonToString@InputTraceLogging@@CAPEBDW4CursorImageReason@Cursor@1@@Z.c)
 */

_UNKNOWN **__fastcall InputTraceLogging::Cursor::SetCursorImage(
        __int64 a1,
        struct tagCURSOR *a2,
        __int64 a3,
        unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // [rsp+C8h] [rbp-80h]
  __int64 v11; // [rsp+128h] [rbp-20h] BYREF
  const char *v12; // [rsp+130h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+140h] [rbp-8h] BYREF

  result = &retaddr;
  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 8) != 0 )
  {
    result = (_UNKNOWN **)(qword_14039BB68 & 8);
    if ( result == (_UNKNOWN **)qword_14039BB68 )
    {
      v10 = *(_DWORD *)UPDWORDPointer(8232LL);
      W32GetUserSessionState(v7, v10);
      UPDWORDPointer(8232LL);
      v11 = InputTraceLogging::CursorImageReasonToString(a4);
      v12 = InputTraceLogging::CursorToString(a2);
      return (_UNKNOWN **)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                            (__int64)&dword_14039BB50,
                            (__int64)&unk_140366457,
                            v8,
                            v9,
                            &v12,
                            &v11);
    }
  }
  return result;
}
