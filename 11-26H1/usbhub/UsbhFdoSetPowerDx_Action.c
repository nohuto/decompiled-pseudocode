/*
 * XREFs of UsbhFdoSetPowerDx_Action @ 0x14003743C
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x14004A658 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhSyncBusPause @ 0x140006D64 (UsbhSyncBusPause.c)
 *     UsbhArmHubWakeOnConnect @ 0x140006E74 (UsbhArmHubWakeOnConnect.c)
 *     UsbhArmHubForWakeDetect @ 0x1400070A0 (UsbhArmHubForWakeDetect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140007630 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhCompletePdoWakeIrp @ 0x14001087C (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoArmedForWake @ 0x140011274 (UsbhPdoArmedForWake.c)
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     UsbdHubDisarmBusForWake @ 0x14003A3CC (UsbdHubDisarmBusForWake.c)
 *     UsbdHubArmBusForWake @ 0x14003A490 (UsbdHubArmBusForWake.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  int v4; // esi
  int v5; // r12d
  char v6; // r15
  _DWORD *v9; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned int LowPart; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 i; // si
  __int64 v23; // rax
  __int64 v24; // rbx
  _DWORD *v25; // r14
  int v26; // edx
  int v27; // r8d
  unsigned __int16 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r9
  int v38; // eax
  unsigned int v39; // ebx
  int v41; // [rsp+88h] [rbp+10h]
  __int64 v42; // [rsp+90h] [rbp+18h]
  _DWORD *v43; // [rsp+98h] [rbp+20h]

  v41 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v43 = FdoExt((__int64)DeviceObject);
  v9 = v43;
  Log((__int64)DeviceObject, 16, 1349731448, a2, (__int64)a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v42 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = a3;
  Log((__int64)DeviceObject, 8, 1381192816, 0LL, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v12, (unsigned int)(v11 + 10));
  UsbhSyncBusPause((__int64)DeviceObject, v42, 3LL, v13);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v15 = LowPart - 3;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v43[1054] = 0;
      Log((__int64)DeviceObject, 16, 1349280819, 0LL, (__int64)a3);
      UsbhDisarmHubWakeOnConnect((__int64)DeviceObject, v16, v17, v18);
      UsbhDisarmHubForWakeDetect((__int64)DeviceObject, v19, v20, v21);
      UsbdHubDisarmBusForWake(DeviceObject);
      for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
      {
        v23 = UsbhLatchPdo((__int64)DeviceObject, i, (__int64)a3, 0x46644433u);
        v24 = v23;
        if ( v23 )
        {
          v25 = PdoExt(v23);
          if ( UsbhCompletePdoWakeIrp((__int64)DeviceObject, v24, -1073741436)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dq(
              WPP_GLOBAL_Control->DeviceExtension,
              v26,
              v27,
              29,
              (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
              *((_WORD *)v25 + 714),
              v24);
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v24, (__int64)a3, 0x46644433u);
        }
      }
    }
  }
  else
  {
    v43[1054] = *(_DWORD *)(a2 + 88);
    Log((__int64)DeviceObject, 16, 1349280818, 0LL, (__int64)a3);
    if ( dword_1400705BC )
    {
      if ( dword_1400705BC == 1 )
      {
        v4 = 1;
      }
      else if ( dword_1400705BC == 3 )
      {
        v4 = HIBYTE(v43[640]) & 1;
      }
    }
    v28 = 1;
    if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
    {
      do
      {
        v32 = UsbhLatchPdo((__int64)DeviceObject, v28, (__int64)a3, 0x46644432u);
        v33 = v32;
        if ( v32 )
        {
          ++v5;
          if ( *((_BYTE *)PdoExt(v32) + 2740) )
            v6 = 1;
          if ( UsbhPdoArmedForWake(v33) )
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v33, (__int64)a3, 0x46644432u);
            v41 = 1;
            if ( !dword_1400705BC )
              v4 = 1;
          }
          else
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v33, (__int64)a3, 0x46644432u);
          }
        }
        ++v28;
      }
      while ( v28 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
      v9 = v43;
      if ( v6 )
      {
        if ( (v43[640] & 1) != 0 || v5 == 1 )
          goto LABEL_32;
      }
    }
    if ( v4 )
    {
LABEL_32:
      UsbhArmHubWakeOnConnect(DeviceObject, v29, v30, v31);
    }
    else
    {
      UsbhDisarmHubWakeOnConnect((__int64)DeviceObject, v29, v30, v31);
      if ( !v41 )
      {
        UsbhDisarmHubForWakeDetect((__int64)DeviceObject, v34, v35, v36);
        UsbdHubDisarmBusForWake(DeviceObject);
        goto LABEL_34;
      }
    }
    UsbhArmHubForWakeDetect(DeviceObject, v34, v35, v36);
    UsbdHubArmBusForWake(DeviceObject);
  }
LABEL_34:
  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 2048, 1112756286, 0LL, 0LL);
  v38 = UsbhDispatch_BusEvent(DeviceObject, v42, (unsigned int)(v37 + 6), v37);
  Log((__int64)DeviceObject, 2048, 1112756284, 0LL, v38);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, a3, 4517);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v39 = PoCallDriver(*((PDEVICE_OBJECT *)v9 + 151), a3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 306), a3, 0x20u);
  return v39;
}
