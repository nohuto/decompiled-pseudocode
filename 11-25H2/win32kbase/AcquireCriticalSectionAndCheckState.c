/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x14006A670
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14006A610 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchEnterCrit @ 0x14006A6A0 (UserSessionSwitchEnterCrit.c)
 */

__int64 AcquireCriticalSectionAndCheckState()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx

  result = UserSessionSwitchEnterCrit();
  if ( (int)result >= 0 )
  {
    result = UserRemoteConnectedSessionUsingXddm(v2, v1);
    if ( (_DWORD)result )
    {
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v3);
      return 3223193056LL;
    }
  }
  return result;
}
