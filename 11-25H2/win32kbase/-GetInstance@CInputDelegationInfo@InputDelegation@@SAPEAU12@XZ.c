/*
 * XREFs of ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     GetDelegationFlags @ 0x1400B9C80 (GetDelegationFlags.c)
 *     IsAnyDelegationEnabled @ 0x1400B9CA0 (IsAnyDelegationEnabled.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1400B9CC0 (IsSpatialDelegationEnabledForThread.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400B9CF0 (IsKeyboardDelegationEnabledForThread.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400B9D44 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     GetSavedCursorPosition @ 0x1400BA580 (GetSavedCursorPosition.c)
 *     SaveCursorPosition @ 0x140216B10 (SaveCursorPosition.c)
 * Callees:
 *     <none>
 */

struct InputDelegation::CInputDelegationInfo *__fastcall InputDelegation::CInputDelegationInfo::GetInstance(
        __int64 a1,
        __int64 a2)
{
  return *(struct InputDelegation::CInputDelegationInfo **)(W32GetUserSessionState(a1, a2) + 19600);
}
