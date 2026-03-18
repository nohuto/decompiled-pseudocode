/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024EB50
 * Callers:
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 v3; // rdx
  int v4; // r14d
  __int16 v5; // cx
  void (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rdx

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2404) )
  {
    KeWaitForSingleObject(DeviceExtension + 4536, Executive, 0, 0, 0LL);
    LOBYTE(v3) = 1;
    v4 = DpiAcquireCoreSyncAccessSafe(a1, v3);
    if ( v4 >= 0 || !DeviceExtension[1161] )
    {
      v5 = *((_WORD *)DeviceExtension + 2405);
      if ( v5 == 2 || v5 == 3 )
      {
        v6 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 604);
        if ( v6 )
          v6(*((_QWORD *)DeviceExtension + 602));
      }
    }
    memset(DeviceExtension + 4808, 0, 0x58uLL);
    if ( v4 >= 0 )
    {
      LOBYTE(v7) = 1;
      DpiReleaseCoreSyncAccessSafe(a1, v7);
    }
    KeReleaseMutex((PRKMUTEX)DeviceExtension + 81, 0);
  }
  return 0LL;
}
