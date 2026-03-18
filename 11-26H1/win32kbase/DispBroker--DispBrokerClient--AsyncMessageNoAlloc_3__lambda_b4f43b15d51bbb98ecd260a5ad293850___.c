/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401CE3D4
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvDxgkSendDisplayBrokerMessage @ 0x14007DA20 (DrvDxgkSendDisplayBrokerMessage.c)
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___(
        __int64 a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // [rsp+28h] [rbp-31h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v7[20]; // [rsp+50h] [rbp-9h] BYREF

  v6 = a2;
  memset(v7, 0, sizeof(v7));
  v7[10] = 3;
  v7[11] = 1;
  result = DrvSampleDisplayState((__int64)&v7[12]);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(&v7[15], a2, 0x10uLL);
    LOWORD(v7[1]) = 0x8000;
    v7[0] = 5242920;
    if ( v6 )
      DisplayScenarioContextHolding(&v6);
    return DrvDxgkSendDisplayBrokerMessage(0x10000LL, (__int64)v7, v4, 0LL, 0LL, v5, 0LL);
  }
  return result;
}
