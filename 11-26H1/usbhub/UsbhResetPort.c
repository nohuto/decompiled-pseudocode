/*
 * XREFs of UsbhResetPort @ 0x14000A2BC
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 *     UsbhDriverResetPort @ 0x140057E20 (UsbhDriverResetPort.c)
 *     UsbhReset1Timeout @ 0x140058E50 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140059450 (UsbhReset2Timeout.c)
 * Callees:
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14001FDB0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002C0D4 (UsbhReferenceListAdd.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140030018 (Usbh_CheckPortHwPendingStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  KIRQL v22; // al
  KIRQL v23; // r12
  int FrameCounter; // eax
  __int64 v25; // rdx
  signed __int32 v26; // eax
  unsigned int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r15d
  __int64 v31; // rax
  ULONG TimeIncrement; // eax
  int v34; // [rsp+98h] [rbp+48h] BYREF
  int v35; // [rsp+A0h] [rbp+50h]
  int v36; // [rsp+A8h] [rbp+58h] BYREF
  __int16 v37; // [rsp+ACh] [rbp+5Ch]
  __int16 v38; // [rsp+AEh] [rbp+5Eh]

  v35 = 0;
  v6 = a2;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v34 = 1414554994;
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        a2 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(a2 + v10) = v34;
        *(_QWORD *)(a2 + v10 + 8) = 0LL;
        *(_QWORD *)(a2 + v10 + 16) = v6;
        *(_QWORD *)(a2 + v10 + 24) = 0LL;
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
      *(_WORD *)(v6 + 4));
  v11 = FdoExt(a1, a2, a3, a4);
  v37 = *(_WORD *)(v6 + 4);
  LOWORD(v34) = 0;
  v36 = 262947;
  v38 = 0;
  v12 = UsbhSyncSendCommand(a1, (unsigned int)&v36, 0, (unsigned int)&v34);
  if ( (v12 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v12, v12, v13) )
    UsbhException(a1, *(unsigned __int16 *)(v6 + 4), 19, 0, 0, v14, v35, (__int64)usbfile_bus_c, 2486, 0);
  v15 = *(int *)(v6 + 696);
  v16 = *(unsigned __int16 *)(v6 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v34 = 2018534770;
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
        v19 = *(_DWORD *)(v17 + 884);
        v20 = *(_QWORD *)(v17 + 888);
        v21 = 32LL * ((v18 - 1) & v19);
        *(_DWORD *)(v21 + v20) = v34;
        *(_QWORD *)(v21 + v20 + 8) = 0LL;
        *(_QWORD *)(v21 + v20 + 16) = v16;
        *(_QWORD *)(v21 + v20 + 24) = v15;
      }
    }
  }
  Usbh_CheckPortHwPendingStatus(a1, v6, v15, v16);
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 4944));
  *(_DWORD *)(v6 + 696) = 1;
  v23 = v22;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(v6 + 852) = FrameCounter;
  *(_DWORD *)(v6 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v34 = 1414620530;
        v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 880), 0xFFFFFFFF);
        v27 = *(_DWORD *)(v25 + 884);
        v28 = *(_QWORD *)(v25 + 888);
        v29 = 32LL * ((v26 - 1) & v27);
        *(_DWORD *)(v29 + v28) = v34;
        *(_QWORD *)(v29 + v28 + 8) = 0LL;
        *(_QWORD *)(v29 + v28 + 16) = v6;
        *(_QWORD *)(v29 + v28 + 24) = a3;
      }
    }
  }
  *(_QWORD *)(v6 + 680) = a3;
  KeResetEvent((PRKEVENT)(v6 + 768));
  KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 4944), v23);
  v30 = dword_1400705E4;
  v31 = UsbhReferenceListAdd(a1, v6 + 552, 1380799602LL) & 0xC0000000LL;
  if ( (_DWORD)v31 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v31) = KeSetTimer(
                    (PKTIMER)(v6 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v30 - TimeIncrement),
                    (PKDPC)(v6 + 616));
    if ( (_BYTE)v31 )
      LOBYTE(v31) = UsbhReferenceListRemove(a1, v6 + 552);
  }
  return v31;
}
