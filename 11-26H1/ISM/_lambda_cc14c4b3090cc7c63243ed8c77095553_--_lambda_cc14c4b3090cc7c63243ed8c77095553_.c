/*
 * XREFs of _lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_ @ 0x1800B99A8
 * Callers:
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004486C (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA594 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BFF00 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C1384 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18019C2A0 (-OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
