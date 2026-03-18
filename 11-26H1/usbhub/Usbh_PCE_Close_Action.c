/*
 * XREFs of Usbh_PCE_Close_Action @ 0x140044BD0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     UsbhLockPcqWithTag @ 0x140002710 (UsbhLockPcqWithTag.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     UsbhHubDereferenceProcessChangeWorkItem @ 0x140037C18 (UsbhHubDereferenceProcessChangeWorkItem.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_Close @ 0x140043C48 (UsbhPCE_Close.c)
 */

void __fastcall Usbh_PCE_Close_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  __int64 v15; // rax
  KIRQL v16; // r8
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // [rsp+28h] [rbp-30h]
  KIRQL v23; // [rsp+68h] [rbp+10h] BYREF

  v23 = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v22 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x23u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v22,
      a3);
  }
  v8 = UsbhLockPcqWithTag(a1, a2, 22, &v23, 0);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 140));
  v9 = v8;
  Log(a1, 512, 842166320, v8, *(unsigned __int16 *)(a2 + 4));
  v12 = v11 - 1;
  if ( v12 && (v13 = v12 - 5) != 0 && (v14 = v13 - 9) != 0 )
  {
    if ( (unsigned int)(v14 - 1) < 2 )
    {
      UsbhSetPcqEventStatus(a1, a2, 2, 20);
      UsbhUnlockPcqWithTag(a1, v17, v23, 0);
      Log(a1, 512, 842166322, v9, *(unsigned __int16 *)(a2 + 4));
      UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, v18, 7u, a2);
      UsbhPCE_Close(a1, a2, a3);
    }
    else
    {
      v15 = *(unsigned int *)(a2 + 2400);
      v16 = v23;
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(32 * v15 + a2 + 1384) = 19;
      UsbhUnlockPcqWithTag(a1, a2, v16, 0);
    }
  }
  else
  {
    Log(a1, 512, 842166321, v10, *(unsigned __int16 *)(a2 + 4));
    v19 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 20;
    *(_DWORD *)(v19 + a2 + 1384) = 20;
    UsbhFlushPortChangeQueue(a1, a2, v20, 20LL);
    UsbhUnlockPcqWithTag(a1, a2, v23, 0);
    UsbhHubDereferenceProcessChangeWorkItem(v21, a2);
    KeWaitForSingleObject((PVOID)(a2 + 2416), Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 140));
}
