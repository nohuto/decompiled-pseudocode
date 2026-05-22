/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180092180
 * Callers:
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18007D17C (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180092098 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1800920A4 (--1DWMCursor@@MEAA@XZ.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x1800A2DF0 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     ??1SessionMonitor@@QEAA@XZ @ 0x1800A30E8 (--1SessionMonitor@@QEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9658 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800DA6FC (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E336C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E44C0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ??1SharedTargetWithHandle@SystemCursors@@QEAA@XZ @ 0x1800FA9A4 (--1SharedTargetWithHandle@SystemCursors@@QEAA@XZ.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x180100F08 (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x180133C48 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x1801633E4 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != (void *)-1LL )
      return CloseHandle(v1);
  }
  return result;
}
