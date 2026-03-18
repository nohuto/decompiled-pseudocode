/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F94F0
 * Callers:
 *     ?GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z @ 0x1400541EC (-GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z.c)
 *     ?xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ @ 0x1400F7500 (-xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z @ 0x1400F9740 (-xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1400F97C8 (-xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x140218D64 (-LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z.c)
 *     ?ChangeSize@Cursor@InputTraceLogging@@SAXII@Z @ 0x1402645A8 (-ChangeSize@Cursor@InputTraceLogging@@SAXII@Z.c)
 *     GreNamedEscape @ 0x14027EC38 (GreNamedEscape.c)
 *     ?xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z @ 0x14029A1CC (-xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-20h]

  v10 = a6;
  v8 = a5;
  v11 = 4LL;
  v9 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v7);
}
