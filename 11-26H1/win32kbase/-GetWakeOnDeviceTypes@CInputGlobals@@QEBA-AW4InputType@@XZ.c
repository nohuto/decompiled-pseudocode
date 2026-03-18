/*
 * XREFs of ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140096050
 * Callers:
 *     RIMIsWakeCapableDevice @ 0x140095FA0 (RIMIsWakeCapableDevice.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputGlobals::GetWakeOnDeviceTypes(__int64 a1)
{
  unsigned int v2; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v2 = *(_DWORD *)(a1 + 144);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
