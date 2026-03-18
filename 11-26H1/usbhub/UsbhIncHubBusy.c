/*
 * XREFs of UsbhIncHubBusy @ 0x14001C1F0
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSshPortsBusy @ 0x140008B80 (UsbhSshPortsBusy.c)
 *     UsbhAcquireEnumBusLock @ 0x14000A5D8 (UsbhAcquireEnumBusLock.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhHubProcessChangeWorker @ 0x14001DAF0 (UsbhHubProcessChangeWorker.c)
 *     UsbhPdoPnp_QueryId @ 0x1400236A0 (UsbhPdoPnp_QueryId.c)
 *     UsbhIoctlGetHubCaps @ 0x1400246CC (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400258B0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140026290 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshBusBusy @ 0x140041448 (UsbhSshBusBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1400475E0 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E1D8 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x140059940 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x14005EE90 (UsbhSshDisabled.c)
 *     UsbhSshEnterSx @ 0x14005F1A4 (UsbhSshEnterSx.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rbx
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 Pool2; // rax
  __int64 v16; // rsi
  _LIST_ENTRY *p_WaitListHead; // rbx
  char *v18; // rax
  char **Blink; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1668172104;
      *(_QWORD *)(v13 + 16) = a5;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = Signalling;
    }
  }
  if ( v9[142].Header.Signalling )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *(_QWORD *)(Pool2 + 24) = a3;
      *(_DWORD *)(Pool2 + 32) = a4;
      v18 = (char *)(Pool2 + 8);
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v18 = p_WaitListHead;
      *((_QWORD *)v18 + 1) = Blink;
      *Blink = v18;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v18;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v16 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
      Usbh_SSH_Event(a1, 6u, a2);
    return v16;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
