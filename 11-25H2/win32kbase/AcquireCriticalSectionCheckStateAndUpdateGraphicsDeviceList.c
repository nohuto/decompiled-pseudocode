/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14006A610
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x140139DE0 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x140153500 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x140158A00 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiGetCertificate @ 0x1401C9760 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1401C98B0 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     AcquireCriticalSectionAndCheckState @ 0x14006A670 (AcquireCriticalSectionAndCheckState.c)
 *     UpdateGraphicsDeviceList @ 0x14006A7C8 (UpdateGraphicsDeviceList.c)
 *     UserGetIsSwitchInProgress @ 0x1401C1B30 (UserGetIsSwitchInProgress.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    v4 = 0;
    UpdateGraphicsDeviceList(&v4);
    if ( v4 && (unsigned __int8)UserGetIsSwitchInProgress() )
    {
      v3 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v1);
      return v3;
    }
    result = UserRemoteConnectedSessionUsingXddm(v2, v1);
    if ( (_DWORD)result )
    {
      v3 = -1071774240;
      goto LABEL_8;
    }
  }
  return result;
}
