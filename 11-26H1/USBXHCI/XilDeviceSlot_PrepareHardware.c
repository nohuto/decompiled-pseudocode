/*
 * XREFs of XilDeviceSlot_PrepareHardware @ 0x140047158
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x140046AF8 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140057100 (XilCoreDeviceSlot_AllocateResources.c)
 */

__int64 __fastcall XilDeviceSlot_PrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  bool v3; // zf
  __int64 *v4; // rcx
  int v5; // edx
  unsigned int Resources; // edi
  int v7; // r9d
  const char *v8; // rcx
  __int64 Pool2; // rax
  int v10; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1 + 16;
  v3 = *(_BYTE *)(a1 + 80) == 0;
  v4 = (__int64 *)(a1 + 16);
  if ( v3 )
  {
    Resources = XilCoreDeviceSlot_AllocateResources((__int64)v4);
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 16);
    return Resources;
  }
  Resources = XilDeviceSlot_AllocateSecureResources(v4);
  if ( (Resources & 0x80000000) == 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1), 1229146200LL);
    *(_QWORD *)(v2 + 8) = Pool2;
    if ( Pool2 )
      return Resources;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 72),
        v10,
        10,
        16,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        Resources);
    }
    v7 = 281;
    v8 = "Allocation for LocalUsbDeviceHandleArray failed";
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 72),
        v5,
        10,
        15,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        Resources);
    }
    v7 = 262;
    v8 = "XilDeviceSlot_AllocateSecureResources failed";
  }
  Debug_FreAssertMsg((__int64)v8, 0, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c", v7);
  return Resources;
}
