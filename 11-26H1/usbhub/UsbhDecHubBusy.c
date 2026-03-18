/*
 * XREFs of UsbhDecHubBusy @ 0x14001C060
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhSshPortsBusy @ 0x140008B80 (UsbhSshPortsBusy.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhBusResume_Action @ 0x140012FB0 (UsbhBusResume_Action.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhHubProcessChangeWorker @ 0x14001DAF0 (UsbhHubProcessChangeWorker.c)
 *     UsbhPdoPnp_QueryId @ 0x1400236A0 (UsbhPdoPnp_QueryId.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhIoctlGetHubCaps @ 0x1400246CC (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400258B0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140026290 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhSshExitSx @ 0x14002B8E0 (UsbhSshExitSx.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshBusIdle @ 0x140037004 (UsbhSshBusIdle.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003FFD0 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusBusy @ 0x140041448 (UsbhSshBusBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1400475E0 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004BC70 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E1D8 (UsbhIoctlResetStuckHub.c)
 *     UsbhDriverResetPort @ 0x140057E20 (UsbhDriverResetPort.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x14005EE90 (UsbhSshDisabled.c)
 *     UsbhSshEnabled @ 0x14005F0C8 (UsbhSshEnabled.c)
 *     UsbhSshEnterSx @ 0x14005F1A4 (UsbhSshEnterSx.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  __int64 Signalling; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  volatile int Lock; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 1667581000;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a3;
      *(_QWORD *)(v8 + 24) = Signalling;
    }
  }
  if ( v5[142].Header.Signalling )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v11 = a3[1];
      v12 = a3 + 1;
      if ( *(_QWORD **)(v11 + 8) != a3 + 1 || (v13 = (_QWORD *)a3[2], (_QWORD *)*v13 != v12) )
        __fastfail(3u);
      *v13 = v11;
      *(_QWORD *)(v11 + 8) = v13;
      a3[2] = a3 + 1;
      *v12 = v12;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}
