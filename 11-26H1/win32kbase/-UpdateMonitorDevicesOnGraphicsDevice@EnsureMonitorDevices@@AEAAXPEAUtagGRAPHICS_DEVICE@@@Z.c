/*
 * XREFs of ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetMonitorBrightness @ 0x14000C12C (DrvSetMonitorBrightness.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14000C3E0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvSetMonitorsDimState @ 0x14000C4E0 (DrvSetMonitorsDimState.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140029454 (PruneModesByDisplayDeviceCaps.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140151A54 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401AD57C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401F7CE0 (DrvGetMonitorPhysicalDimensions.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401F7FB4 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 */

void __fastcall EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
        EnsureMonitorDevices *this,
        struct tagGRAPHICS_DEVICE *a2)
{
  __int64 *OutputBuffer; // rsi
  void *v4; // rcx
  struct _DEVICE_OBJECT *v6; // rbp
  PIRP v7; // r14
  __int64 v8; // rcx
  NTSTATUS Status; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  OutputBuffer = (__int64 *)((char *)this + 16);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *OutputBuffer = 0LL;
  }
  *((_DWORD *)this + 2) = 0;
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 17);
  if ( v6 )
  {
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(0x23201Bu, v6, 0LL, 0, OutputBuffer, 8u, 1u, &Event, &IoStatusBlock);
    if ( v7 )
    {
      if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      {
        CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(*(_QWORD *)(W32GetSessionState(v8) + 88) + 2944LL);
      }
      Status = IofCallDriver(v6, v7);
      if ( Status == 259 )
      {
        while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
          ;
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v10 = *OutputBuffer;
        if ( *OutputBuffer )
        {
          v11 = *((unsigned int *)this + 2);
          if ( _bittest((const signed __int32 *)(v10 + 20 * v11), 0x1Du) )
          {
            do
            {
              v12 = (unsigned int)(v11 + 1);
              *((_DWORD *)this + 2) = v12;
              LODWORD(v11) = v11 + 1;
            }
            while ( _bittest((const signed __int32 *)(v10 + 20 * v12), 0x1Du) );
          }
        }
      }
    }
  }
}
