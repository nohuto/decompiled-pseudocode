/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x140006930
 * Callers:
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x140004CC4 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhHubRunPortChangeQueue @ 0x140005E40 (UsbhHubRunPortChangeQueue.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0 (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhPCE_Suspend @ 0x140035154 (UsbhPCE_Suspend.c)
 * Callees:
 *     Usbh_PCE_psSUSPEND_Action @ 0x140001774 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x14001DD70 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x140023E60 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x140024610 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140024E40 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140026210 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1400283A0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x140032DA0 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1400341C4 (Usbh_PCE_HardwareWake_Action.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x140044B94 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x140044D84 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_Check_Action @ 0x140044F60 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x14004509C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1400452C4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x140045558 (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x140045688 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x140045888 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1400459F4 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045CE4 (Usbh_PCE_wChangeERROR_Action.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueEventEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  char v15; // [rsp+20h] [rbp-18h]

  v9 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a3);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1346662768;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a4;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 5:
      Usbh_PCE_wRun_Action(a1, a2, a4);
      break;
    case 0x10:
      return Usbh_PCE_wChange_Action(a1, a2, a4);
    case 1:
      Usbh_PCE_Enable_Action(a1, a2);
      break;
    case 4:
      Usbh_PCE_QueueChange_Action(a1, a2, a4, a5, a6, a7);
      break;
    default:
      switch ( (int)v9 )
      {
        case 2:
          Usbh_PCE_Disable_Action(a1, a2);
          break;
        case 3:
          Usbh_PCE_Resume_Action(a1, a2, a4);
          break;
        case 6:
          Usbh_PCE_wDone_Action(a1, a2, a4);
          break;
        case 8:
          Usbh_PCE_SoftDisconnect_Action(a1, a2, a4);
          break;
        case 9:
          Usbh_PCE_BusReset_Action(a1, a2);
          break;
        case 10:
          Usbh_PCE_Suspend_Action(a1, a2, a4, a8);
          break;
        case 11:
          Usbh_PCE_BusDisconnect_Action(a1, a2, a4);
          break;
        case 12:
          Usbh_PCE_HardwareWake_Action(a1, a2);
          break;
        case 13:
          Usbh_PCE_SD_Resume_Action(a1, a2, a4);
          break;
        case 14:
          Usbh_PCE_ResumeTimeout_Action(a1, a2);
          break;
        case 15:
          Usbh_PCE_QueueDriverReset_Action(a1, a2, a4, a5, a6, a7);
          break;
        case 17:
          Usbh_PCE_HW_Stop_Action(a1, a2, a4);
          break;
        case 18:
          Usbh_PCE_psSUSPEND_Action(a1, a2, a4);
          break;
        case 19:
          Usbh_PCE_psPAUSED_Action(a1, a2, a4);
          break;
        case 20:
          a8 = Usbh_PCE_Check_Action(a1, a2, a4, a8);
          break;
        case 21:
          Usbh_PCE_ResumeDone_Action(a1, a2, a4);
          break;
        case 22:
          Usbh_PCE_Close_Action(a1, a2, a4);
          break;
        case 23:
          Usbh_PCE_wChangeERROR_Action(a1, a2, a4, a5, v15, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}
