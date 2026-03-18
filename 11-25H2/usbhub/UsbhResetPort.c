/*
 * XREFs of UsbhResetPort @ 0x140012B44
 * Callers:
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhDriverResetPort @ 0x1400578C0 (UsbhDriverResetPort.c)
 *     UsbhReset1Timeout @ 0x1400588F0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140058EE0 (UsbhReset2Timeout.c)
 * Callees:
 *     Usbh_UsbdReadFrameCounter @ 0x140005DFC (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1400119F8 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002EFD0 (UsbhReferenceListAdd.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // r14
  int v9; // edx
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  KIRQL v15; // al
  KIRQL v16; // r12
  int FrameCounter; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // r15d
  __int64 v21; // rax
  ULONG TimeIncrement; // eax
  __int64 v24; // [rsp+20h] [rbp-40h]
  int v25; // [rsp+50h] [rbp-10h] BYREF
  __int16 v26; // [rsp+54h] [rbp-Ch]
  __int16 v27; // [rsp+56h] [rbp-Ah]
  int v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B0h] [rbp+50h]
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v30 = 0;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v28 = 1414554994;
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = v28;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      *(_WORD *)(a2 + 4));
  v8 = (KSPIN_LOCK *)FdoExt(a1);
  v26 = *(_WORD *)(a2 + 4);
  LOWORD(v28) = 0;
  v25 = 262947;
  v27 = 0;
  v9 = UsbhSyncSendCommand(a1, (unsigned __int8 *)&v25, 0LL, &v28, v24, &v30);
  if ( (v9 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v9) )
    UsbhException(a1, *(_WORD *)(a2 + 4), 19, 0LL, 0, v10, v30, usbfile_bus_c, 2486, 0);
  v11 = *(int *)(a2 + 696);
  v12 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v29 = 2018534770;
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = v29;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v11;
      }
    }
  }
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v15 = KeAcquireSpinLockRaiseToDpc(v8 + 618);
  *(_DWORD *)(a2 + 696) = 1;
  v16 = v15;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v28 = 1414620530;
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = v28;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = a2;
        *(_QWORD *)(v19 + 24) = a3;
      }
    }
  }
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock(v8 + 618, v16);
  v20 = dword_14006F584;
  v21 = UsbhReferenceListAdd(a1, a2 + 552, 1380799602LL) & 0xC0000000LL;
  if ( (_DWORD)v21 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v21) = KeSetTimer(
                    (PKTIMER)(a2 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v20 - TimeIncrement),
                    (PKDPC)(a2 + 616));
    if ( (_BYTE)v21 )
      LOBYTE(v21) = UsbhReferenceListRemove(a1, a2 + 552);
  }
  return v21;
}
