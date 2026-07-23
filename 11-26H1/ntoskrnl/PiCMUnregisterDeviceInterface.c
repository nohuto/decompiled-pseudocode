/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x140B6E20C
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmDeleteDeviceInterface @ 0x1409B846C (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        void *a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  int ObjectProperty; // ebx
  __int64 v11; // rdi
  char v12; // al
  struct _KTHREAD *CurrentThread; // rax
  int v15; // [rsp+68h] [rbp+7h] BYREF
  int v16; // [rsp+6Ch] [rbp+Bh] BYREF
  __int128 v17; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  v19 = 0LL;
  LOBYTE(a6) = 0;
  v15 = 0;
  *v6 = 0;
  v17 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v17);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v11 = v18;
      if ( (_QWORD)v18 && *(_QWORD *)((char *)&v17 + 4) == 0x400000000LL && !HIDWORD(v18) && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v18,
                           3,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           &v15,
                           (__int64)&a6,
                           1u,
                           (__int64)&v16,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v15 == 17 && v16 == 1 )
          {
            v12 = (char)a6;
          }
          else
          {
            v12 = 0;
            LOBYTE(a6) = 0;
          }
          if ( v12 == -1 )
          {
            ObjectProperty = -1073740024;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            ObjectProperty = CmDeleteDeviceInterface(*(__int64 *)&PiPnpRtlCtx, v11, 0);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(ObjectProperty, v19, a3, a4, v6);
  }
  if ( (_QWORD)v18 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v18);
  return (unsigned int)v9;
}
