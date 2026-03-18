/*
 * XREFs of RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x14013846C (RIMApplyPTPConfigRemedyWorker.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1400F0360 (AccessPTPEnabledStatus.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     RIMFindConfigDeviceForInput @ 0x1400F10F0 (RIMFindConfigDeviceForInput.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  struct RIMDEV *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 1;
  result = RIMIsRunningOnDesktop();
  if ( (_DWORD)result )
  {
    AccessPTPEnabledStatus(0, 1, &v11);
    *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 328) = v11;
    result = RIMFindConfigDeviceForInput(a3, a2, a1, &v10);
    if ( (_DWORD)result )
      return RIMDeliverConfigRequest(v10);
  }
  return result;
}
