/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E9C0
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E874 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  struct _KMUTANT *DeviceExtension; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h]

  DeviceExtension = (struct _KMUTANT *)a1->DeviceExtension;
  KeInitializeMutex(DeviceExtension + 81, 0);
  if ( *((_DWORD *)DeviceExtension->OwnerThread + 7) < 0x700Au
    || (result = DpiQueryMiniportInterface(
                   (__int64)a1,
                   (__int64)&GUID_DEVINTERFACE_BRIGHTNESS_3,
                   72,
                   3,
                   v4,
                   (__int64)&DeviceExtension[85].Abandoned),
        (int)result < 0) )
  {
    result = DpiBrightnessSetupInterfaceV2(a1);
    if ( (int)result < 0 )
    {
      result = DpiQueryMiniportInterface(
                 (__int64)a1,
                 (__int64)&GUID_DEVINTERFACE_BRIGHTNESS,
                 56,
                 1,
                 v4,
                 (__int64)&DeviceExtension[85].Abandoned);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&DeviceExtension[85].Header.Lock = a1;
        DeviceExtension[85].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)DpiDoInterfaceReference;
        DeviceExtension[85].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGGLOBAL::DereferenceObjectWork;
        DeviceExtension[85].MutantListEntry.Flink = (struct _LIST_ENTRY *)DpiBrightnessIfGetPossible;
        DeviceExtension[85].MutantListEntry.Blink = (struct _LIST_ENTRY *)DpiBrightnessIfSet;
        DeviceExtension[85].OwnerThread = (struct _KTHREAD *)DpiBrightnessIfGet;
        *(_DWORD *)&DeviceExtension[84].Abandoned = 65592;
      }
    }
  }
  else
  {
    DeviceExtension[82].Header.LockNV = 196680;
    DeviceExtension[82].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DpiDoInterfaceReference;
    DeviceExtension[82].MutantListEntry.Flink = (struct _LIST_ENTRY *)DXGGLOBAL::DereferenceObjectWork;
    DeviceExtension[82].MutantListEntry.Blink = (struct _LIST_ENTRY *)DpiBrightness3Set;
    DeviceExtension[82].OwnerThread = (struct _KTHREAD *)DpiBrightness3Get;
    *(_QWORD *)&DeviceExtension[82].Abandoned = DpiBrightness3GetCaps;
    *(_QWORD *)&DeviceExtension[83].Header.Lock = DpiBrightness3GetNitRanges;
    DeviceExtension[83].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)DpiBrightness3SetBacklightOptimization;
    DeviceExtension[82].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a1;
  }
  return result;
}
