/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x14002B834
 * Callers:
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14002B8D0 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvDxgkSendDisplayBrokerMessage @ 0x140029FC8 (DrvDxgkSendDisplayBrokerMessage.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__&DrvSampleDisplayState_ @ 0x14002AE8C (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__-.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___(
        __int64 a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // [rsp+28h] [rbp-A0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v7[24]; // [rsp+50h] [rbp-78h] BYREF

  v6 = a2;
  memset(v7, 0, sizeof(v7));
  result = InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1___DrvSampleDisplayState_(
             v7,
             a2);
  if ( (int)result >= 0 )
  {
    if ( v6 )
      DisplayScenarioContextHolding(&v6);
    return DrvDxgkSendDisplayBrokerMessage(0x10000u, (__int64)v7, v4, 0LL, 0LL, v5, 0LL);
  }
  return result;
}
