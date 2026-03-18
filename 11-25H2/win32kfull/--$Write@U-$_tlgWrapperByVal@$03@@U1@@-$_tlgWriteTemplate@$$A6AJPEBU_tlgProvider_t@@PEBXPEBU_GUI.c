/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x140109CBC (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z @ 0x1401D0688 (-GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z.c)
 *     GreNamedEscape @ 0x140263B94 (GreNamedEscape.c)
 *     ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1402730D8 (-xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z @ 0x140273154 (-xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z @ 0x1402732DC (-xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z.c)
 *     ?xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ @ 0x140273480 (-xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ.c)
 *     ?ChangeSize@Cursor@InputTraceLogging@@SAXII@Z @ 0x1402737BC (-ChangeSize@Cursor@InputTraceLogging@@SAXII@Z.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x14033E96C (-LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v7);
}
