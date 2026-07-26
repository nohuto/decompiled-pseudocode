/*
 * XREFs of ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400053C0
 * Callers:
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x140004BE0 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x140005350 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140006630 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisLWMStartNetworkInterface @ 0x14007BB70 (NdisLWMStartNetworkInterface.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14007B620 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x140090250 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14009B2C4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6A00 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  struct _IRP *v3; // rbx
  unsigned int v4; // esi
  int v5; // edx
  __int64 MediaType; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned int v8; // ebp
  int v9; // edx
  KIRQL v10; // r14
  int v11; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  void *v15; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      61,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a1);
  }
  if ( (a1->DriverHandle->Flags & 0x21) == 1 )
  {
    v15 = 0LL;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x8000u);
    if ( ndisIMCheckDeviceInstance(a1->DriverHandle, &a1->MiniportName, &v15) )
    {
      ndisWaitForKernelObject(&a1->DriverHandle->IMStartRemoveMutex);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
      v4 = ndisIMInitializeDeviceInstanceInternal(a1, v15);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&a1->DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  else
  {
    v4 = ndisPnPStartDevice(a1, v3);
    if ( v4 )
    {
      v4 = -1073741823;
    }
    else
    {
      if ( (a1->Flags & 0x20000) != 0 )
      {
        MediaType = a1->MediaType;
        if ( !ndisMediaTypeCl[MediaType] && (_DWORD)MediaType != 3 )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding(a1, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
      if ( (a1->Flags & 0x80u) == 0 )
      {
        SelectiveSuspend = a1->SelectiveSuspend;
        if ( SelectiveSuspend )
        {
          v8 = a1->Flags & 0x80;
          v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              15,
              36,
              (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
              (char)a1,
              9);
          }
          *((_DWORD *)SelectiveSuspend + 127) &= ~0x100u;
          v11 = *((_DWORD *)SelectiveSuspend + 127);
          if ( v8 )
          {
            if ( !*((_DWORD *)SelectiveSuspend + 128)
              && !*((_DWORD *)SelectiveSuspend + 129)
              && !*((_DWORD *)SelectiveSuspend + 132)
              && !*((_DWORD *)SelectiveSuspend + 133)
              && !*((_DWORD *)SelectiveSuspend + 130)
              && !*((_DWORD *)SelectiveSuspend + 131)
              && !*((_DWORD *)SelectiveSuspend + 144)
              && !v11 )
            {
              CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
              CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
            }
          }
          else if ( !v11 )
          {
            *((_DWORD *)SelectiveSuspend + 126) &= ~0x200u;
            KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
            ndisSetIdleTimer(a1);
            goto LABEL_29;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
        }
      }
    }
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      13,
      62,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a1,
      v4);
  }
  return v4;
}
