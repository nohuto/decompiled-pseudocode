/*
 * XREFs of RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1818 (RIMApplyPTPConfigRemedyWorker.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     AccessPTPEnabledStatus @ 0x1400B2A10 (AccessPTPEnabledStatus.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1401E0400 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  struct RIMDEV *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 1;
  result = RIMIsRunningOnDesktop();
  if ( (_DWORD)result )
  {
    AccessPTPEnabledStatus(0LL, 1LL, &v11);
    UserSessionState = W32GetUserSessionState(v8, v7);
    *(_DWORD *)(UserSessionState + 328) = v11;
    result = RIMFindConfigDeviceForInput(a3, a2, a1, &v10);
    if ( (_DWORD)result )
      return RIMDeliverConfigRequest(v10);
  }
  return result;
}
