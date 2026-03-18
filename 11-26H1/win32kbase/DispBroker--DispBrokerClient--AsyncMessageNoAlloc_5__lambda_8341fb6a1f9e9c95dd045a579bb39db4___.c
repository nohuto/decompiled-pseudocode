/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___ @ 0x14007EA4C
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJIKW4ORIENTATION_PREFERENCE@@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14007E9F0 (-DispBrokerAsyncRefreshOrientation@@YAJIKW4ORIENTATION_PREFERENCE@@QEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x14007EB18 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___(
        __int64 a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v10[96]; // [rsp+50h] [rbp-78h] BYREF

  v9 = a2;
  memset(v10, 0, sizeof(v10));
  result = InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4___DrvSampleDisplayState_(
             v10,
             a2,
             a3);
  if ( (int)result >= 0 )
  {
    if ( v9 )
      DisplayScenarioContextHolding(&v9);
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7, v6);
    return (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(DxgkWin32kInterface
                                                                                               + 760))(
             0x10000LL,
             v10,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
