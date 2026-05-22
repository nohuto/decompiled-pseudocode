/*
 * XREFs of ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DFE3C
 * Callers:
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180081790 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D2C50 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800D9B48 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DA060 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DB050 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DB9B0 (-OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DC700 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DD1F0 (-OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800DE564 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800E0298 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E1440 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HIDDevice::GetHIDCapabilities(PHIDP_PREPARSED_DATA *this, struct _HIDP_CAPS **a2)
{
  struct _HIDP_CAPS *v2; // rbx
  NTSTATUS Caps; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _HIDP_CAPS *)((char *)this + 60);
  if ( !*((_DWORD *)this + 15) )
  {
    Caps = HidP_GetCaps(this[6], v2);
    if ( Caps < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x50,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevice.cpp",
               (const char *)(unsigned int)Caps);
  }
  *a2 = v2;
  return 0LL;
}
