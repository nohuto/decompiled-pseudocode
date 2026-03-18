/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1400086E0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x140009580 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x14000A770 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificate @ 0x1401F4440 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1401F4590 (NtGdiGetCertificateSize.c)
 * Callees:
 *     AcquireCriticalSectionAndCheckState @ 0x140009730 (AcquireCriticalSectionAndCheckState.c)
 *     UpdateGraphicsDeviceList @ 0x14000A35C (UpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserGetIsSwitchInProgress @ 0x140191AC0 (UserGetIsSwitchInProgress.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    v2 = 0;
    UpdateGraphicsDeviceList(&v2);
    if ( v2 && (unsigned __int8)UserGetIsSwitchInProgress() )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCritWithNonPaged();
      return v1;
    }
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      v1 = -1071774240;
      goto LABEL_8;
    }
  }
  return result;
}
