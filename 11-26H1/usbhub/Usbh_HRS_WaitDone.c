/*
 * XREFs of Usbh_HRS_WaitDone @ 0x14004CD44
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReleaseResetLock @ 0x140039FA4 (UsbhReleaseResetLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_WaitDone(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920160085, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v8);
  }
  if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 7 )
  {
    v6 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 1u);
    KeSetEvent((PRKEVENT)(v4 + 712), 0, 0);
  }
  else
  {
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  return v6;
}
