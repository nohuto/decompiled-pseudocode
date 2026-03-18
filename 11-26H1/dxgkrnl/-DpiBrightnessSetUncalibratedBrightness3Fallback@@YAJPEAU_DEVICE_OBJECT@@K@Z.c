/*
 * XREFs of ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024E5E8
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E874 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessSetUncalibratedBrightness3Fallback(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  int MiniportInterface; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  void (__fastcall *v7)(_QWORD); // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v10 = 0;
  if ( *((_WORD *)DeviceExtension + 2296) )
  {
    MiniportInterface = (*((__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, int *))DeviceExtension + 580))(
                          a1,
                          a2,
                          &v10);
    if ( MiniportInterface >= 0 )
    {
      if ( (v10 & 4) != 0 )
      {
        MiniportInterface = -1073741637;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2216;
      }
      else
      {
        KeWaitForSingleObject(DeviceExtension + 4536, Executive, 0, 0, 0LL);
        LOBYTE(v5) = 1;
        MiniportInterface = DpiAcquireCoreSyncAccessSafe(a1, v5);
        if ( MiniportInterface >= 0 )
        {
          if ( (**(_DWORD **)(*((_QWORD *)DeviceExtension + 504) + 3048LL) & 0x2000) != 0 )
          {
            MiniportInterface = 0;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 2245;
          }
          else if ( *((_WORD *)DeviceExtension + 2405) == 3 )
          {
            v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 604);
            if ( v7 )
            {
              v7(*((_QWORD *)DeviceExtension + 602));
              memset(DeviceExtension + 4808, 0, 0x48uLL);
            }
            *((_WORD *)DeviceExtension + 2296) = 0;
            MiniportInterface = DpiBrightnessSetupInterfaceV2(a1);
            if ( MiniportInterface < 0 )
            {
              MiniportInterface = DpiQueryMiniportInterface(
                                    (__int64)a1,
                                    (__int64)&GUID_DEVINTERFACE_BRIGHTNESS,
                                    56,
                                    1,
                                    (__int64)Timeout,
                                    (__int64)(DeviceExtension + 4808));
              if ( MiniportInterface >= 0 )
              {
                *((_QWORD *)DeviceExtension + 595) = a1;
                *((_QWORD *)DeviceExtension + 596) = DpiDoInterfaceReference;
                *((_QWORD *)DeviceExtension + 597) = DXGGLOBAL::DereferenceObjectWork;
                *((_QWORD *)DeviceExtension + 598) = DpiBrightnessIfGetPossible;
                *((_QWORD *)DeviceExtension + 599) = DpiBrightnessIfSet;
                *((_QWORD *)DeviceExtension + 600) = DpiBrightnessIfGet;
                *((_DWORD *)DeviceExtension + 1188) = 65592;
              }
            }
          }
          else
          {
            MiniportInterface = -1073741637;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 2257;
          }
          LOBYTE(v6) = 1;
          DpiReleaseCoreSyncAccessSafe(a1, v6);
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2231;
        }
        KeReleaseMutex((PRKMUTEX)DeviceExtension + 81, 0);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2207;
    }
  }
  else
  {
    MiniportInterface = -1073741637;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2197;
  }
  return (unsigned int)MiniportInterface;
}
