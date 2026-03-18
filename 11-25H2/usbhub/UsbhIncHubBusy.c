/*
 * XREFs of UsbhIncHubBusy @ 0x140007B90
 * Callers:
 *     UsbhHubProcessChangeWorker @ 0x140004850 (UsbhHubProcessChangeWorker.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhSshPortsBusy @ 0x14001049C (UsbhSshPortsBusy.c)
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x14001E860 (UsbhPdoPnp_QueryId.c)
 *     UsbhIoctlGetHubCaps @ 0x14001EB4C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400202C0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140020DC0 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140037F80 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshBusBusy @ 0x14004190C (UsbhSshBusBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x140047A90 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E5F8 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1400593C0 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D220 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x14005E850 (UsbhSshDisabled.c)
 *     UsbhSshEnterSx @ 0x14005EB60 (UsbhSshEnterSx.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rsi
  __int64 Signalling; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 Pool2; // rax
  __int64 v14; // rbx
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *Blink; // rdx

  v9 = (struct _KEVENT *)FdoExt(a1);
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1668172104;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a5;
        *(_QWORD *)(v12 + 24) = Signalling;
      }
    }
  }
  if ( v9[142].Header.Signalling )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      *(_QWORD *)(Pool2 + 24) = a3;
      *(_DWORD *)(Pool2 + 32) = a4;
      v15 = (_LIST_ENTRY *)(Pool2 + 8);
      Blink = v9[129].Header.WaitListHead.Blink;
      if ( Blink->Flink != &v9[129].Header.WaitListHead )
        __fastfail(3u);
      v15->Flink = &v9[129].Header.WaitListHead;
      v15->Blink = Blink;
      Blink->Flink = v15;
      v9[129].Header.WaitListHead.Blink = v15;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v14 = 1936941672LL;
    }
    KeSetEvent(v9 + 139, 0, 0);
    if ( a5 == 1 )
      Usbh_SSH_Event(a1, 6LL, a2);
    return v14;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
