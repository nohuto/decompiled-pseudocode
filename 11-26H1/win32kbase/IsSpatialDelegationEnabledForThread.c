/*
 * XREFs of IsSpatialDelegationEnabledForThread @ 0x14006CF30
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14006CD8C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14006CF6C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsSpatialDelegationEnabledForThread(InputDelegation *this, int a2, int a3)
{
  const struct tagTHREADINFO *v4; // rdx

  v4 = *(const struct tagTHREADINFO **)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19632);
  return (*((_DWORD *)v4 + 2) & 2) != 0 && InputDelegation::IsDelegationEnabledForThread(this, v4);
}
