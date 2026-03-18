/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x140034ED4
 * Callers:
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140034DF0 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEnableDeviceForWake @ 0x14001930C (UsbhEnableDeviceForWake.c)
 *     UsbhPCE_Suspend @ 0x140035154 (UsbhPCE_Suspend.c)
 *     UsbhPdoArmedForWake @ 0x140035280 (UsbhPdoArmedForWake.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rbx
  int v7; // edx
  unsigned int v8; // esi
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  int v12; // eax
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+48h] BYREF

  v13 = 0;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        18,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        a2);
  }
  v6 = PdoExt(a2);
  v7 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 714), (__int64)&v14, &v13);
  if ( v7 >= 0 && (v14 & 1) != 0 )
  {
    if ( (v6[355] & 0x100) != 0 )
    {
      if ( (unsigned __int8)UsbhPdoArmedForWake(a2) )
      {
        if ( !a3 && (v6[355] & 4) == 0 )
        {
          v12 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2);
          if ( (v12 & 0xC0000000) == 0xC0000000 )
            UsbhException(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 714), 50, 0LL, 0, v12, v13, usbfile_pdopwr_c, 1404, 0);
        }
      }
    }
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( dword_14006F570 )
    {
      v10 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v10 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v10 + 554))(*((_QWORD *)v10 + 529), 0LL, 3LL, &v13);
    }
    v8 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((unsigned __int16 *)v6 + 714));
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( dword_14006F570 )
    {
      v11 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v11 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v11 + 554))(*((_QWORD *)v11 + 529), 0LL, 4LL, &v13);
    }
  }
  else
  {
    UsbhException(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 714), 118, 0LL, 0, v7, v13, usbfile_pdopwr_c, 1420, 0);
    return (unsigned int)-1073741823;
  }
  return v8;
}
