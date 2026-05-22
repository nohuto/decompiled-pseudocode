/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180098C24
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180098C18 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD2E0 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ??1CompliantHapticInterface@@QEAA@XZ @ 0x180188840 (--1CompliantHapticInterface@@QEAA@XZ.c)
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180191A20 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x180193E58 (--1PenInterface@@UEAA@XZ.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801CA22C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 != (void *)-1LL )
  {
    if ( v1 )
      return CloseHandle(v1);
  }
  return result;
}
