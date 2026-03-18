/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1400113C4
 * Callers:
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1400370A0 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     UsbhPdoArmedForWake @ 0x140011274 (UsbhPdoArmedForWake.c)
 *     UsbhPCE_Suspend @ 0x140011294 (UsbhPCE_Suspend.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x14002D218 (UsbhEnableDeviceForWake.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  int v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0;
  v20 = 0;
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
  v7 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *(unsigned __int16 *)(v6 + 1428), &v20, &v19);
  v10 = (unsigned int)v7;
  if ( v7 >= 0 && (v20 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v6 + 1420) & 0x100) != 0 && UsbhPdoArmedForWake(a2) && !a3 && (*(_DWORD *)(v6 + 1420) & 4) == 0 )
    {
      v18 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v19);
      v10 = 3221225472LL;
      if ( (v18 & 0xC0000000) == 0xC0000000 )
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *(unsigned __int16 *)(v6 + 1428),
          50,
          0,
          0,
          v18,
          v19,
          (__int64)usbfile_pdopwr_c,
          1404,
          0);
    }
    v19 = *(unsigned __int16 *)(v6 + 1428);
    if ( dword_1400705D0 )
    {
      v13 = FdoExt(*(_QWORD *)(a1 + 8), v10, v8, v9);
      if ( *(_QWORD *)(v13 + 4432) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v13 + 4432))(*(_QWORD *)(v13 + 4232), 0LL, 3LL, &v19);
    }
    v11 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *(unsigned __int16 *)(v6 + 1428), v9);
    v19 = *(unsigned __int16 *)(v6 + 1428);
    if ( dword_1400705D0 )
    {
      v17 = FdoExt(*(_QWORD *)(a1 + 8), v14, v15, v16);
      if ( *(_QWORD *)(v17 + 4432) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v17 + 4432))(*(_QWORD *)(v17 + 4232), 0LL, 4LL, &v19);
    }
  }
  else
  {
    UsbhException(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int16 *)(v6 + 1428),
      118,
      0,
      0,
      v7,
      v19,
      (__int64)usbfile_pdopwr_c,
      1420,
      0);
    return (unsigned int)-1073741823;
  }
  return v11;
}
