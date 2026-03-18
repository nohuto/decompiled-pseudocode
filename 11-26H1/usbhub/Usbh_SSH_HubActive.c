/*
 * XREFs of Usbh_SSH_HubActive @ 0x14001B5C0
 * Callers:
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x140029140 (UsbhUnlockSSH.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhSsh_CheckHubIdle @ 0x1400398B8 (UsbhSsh_CheckHubIdle.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubActive(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  char *DeviceExtension; // rdi
  signed int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  switch ( a2 )
  {
    case 1:
      v7 = UsbhSsh_CheckHubIdle(a1);
      if ( v7 < 0 )
      {
        UsbhUnlockSSH(a3);
        KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
        if ( !*((_QWORD *)DeviceExtension + 414)
          && !*((_QWORD *)DeviceExtension + 413)
          && !*((_QWORD *)DeviceExtension + 412) )
        {
          v10 = FdoExt((__int64)a1);
          UsbhEnableTimerObject(
            (_DWORD)a1,
            (_DWORD)DeviceExtension + 3200,
            *((_DWORD *)DeviceExtension + 1314),
            0,
            (__int64)(v10 + 478),
            2001228627);
        }
        KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
      }
      else
      {
        KeResetEvent((PRKEVENT)DeviceExtension + 141);
        DeviceExtension[3416] = 0;
        UsbhUnlockSSH(a3);
        UsbhSshSuspendHub(a1, a3, v8, v9);
      }
      break;
    case 4:
      v7 = *((_QWORD *)DeviceExtension + 413) != 0LL ? 0xC0000001 : 0;
      UsbhUnlockSSH(a3);
      break;
    case 5:
      goto LABEL_17;
    case 6:
      DeviceExtension[3408] = 1;
LABEL_17:
      UsbhUnlockSSH(a3);
      v7 = 0;
      break;
    default:
      UsbhUnlockSSH(a3);
      v7 = -1073741823;
      break;
  }
  return (unsigned int)v7;
}
