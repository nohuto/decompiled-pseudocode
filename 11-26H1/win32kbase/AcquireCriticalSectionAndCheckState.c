/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x140009730
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x14000A1D0 (UserSessionSwitchEnterCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 */

__int64 AcquireCriticalSectionAndCheckState()
{
  __int64 result; // rax

  result = UserSessionSwitchEnterCrit();
  if ( (int)result >= 0 )
  {
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      UserSessionSwitchLeaveCritWithNonPaged();
      return 3223193056LL;
    }
  }
  return result;
}
