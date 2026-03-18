/*
 * XREFs of UsbhGetDeviceBusInfo @ 0x14003C60C
 * Callers:
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040FA0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhAcquireBusInfo @ 0x1400545F0 (UsbhAcquireBusInfo.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     Usbh_UsbdInterfaceDereference @ 0x14003E830 (Usbh_UsbdInterfaceDereference.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x14003EC10 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhGetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  _DWORD *v9; // r15
  __int64 v10; // r11
  void *v11; // r10
  __int64 v13; // rbx
  _DWORD *v14; // rax
  int v15; // ebx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r11
  void *v19; // r10
  void (__fastcall *v20)(__int64); // rax
  int v21; // r9d
  unsigned int v22; // r8d
  _DWORD *Pool2; // rdi
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 (__fastcall *v26)(__int64, __int64, _DWORD *, _DWORD *, unsigned int *); // r10
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  _DWORD v32[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+20h] BYREF

  v4 = a4;
  v32[0] = 0;
  v5 = 0LL;
  v33 = 0;
  v9 = FdoExt(a1);
  Log(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    Log(a1, 8, 1734632005, v4, (__int64)a3);
    if ( WPP_RECORDER_INITIALIZED != v11 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 12, v10);
    }
    return 3221225507LL;
  }
  if ( !a2 )
  {
    Log(a1, 8, 1734631986, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != v19 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 14, v18);
    v5 = *((_QWORD *)v9 + 570);
    v20 = (void (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 571);
    if ( v20 )
      v20(v5);
LABEL_23:
    Log(a1, 8, 1734631987, 0LL, 0LL);
    v22 = v21 + 16;
    for ( v32[0] = v21 + 16; ; v22 = v32[0] )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, v22, 1112885333LL);
      if ( !Pool2 )
        break;
      v24 = *(_QWORD *)(a1 + 64);
      v25 = 0;
      v33 = 0;
      v26 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, _DWORD *, unsigned int *))(v24 + 4608);
      if ( v26 )
      {
        v15 = v26(v5, 1LL, Pool2, v32, &v33);
        v25 = v33;
      }
      else
      {
        v15 = -1073741822;
      }
      Log(a1, 8, 1734631988, (__int64)Pool2, v25);
      if ( v15 != -1073741789 )
        goto LABEL_31;
      v32[0] = v33;
      Log(a1, 8, 1734631989, v33, -1073741789LL);
      ExFreePoolWithTag(Pool2, 0);
    }
    v15 = -1073741670;
LABEL_31:
    Usbh_UsbdInterfaceDereference(a1, v5);
    if ( Pool2 )
    {
      if ( v15 >= 0 )
      {
        a3[1] = *Pool2;
        a3[2] = Pool2[1];
        a3[3] = Pool2[2];
        Log(a1, 8, 1734629425, (unsigned int)*Pool2, (unsigned int)Pool2[1]);
        Log(a1, 8, 1734629426, (unsigned int)Pool2[2], 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v27, v28, v29, v30, *Pool2, Pool2[1], Pool2[2]);
        }
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    goto LABEL_37;
  }
  v13 = *((_QWORD *)PdoExt(a2) + 145);
  v14 = FdoExt(a1);
  if ( *((_QWORD *)v14 + 543) )
  {
    v5 = (*((__int64 (__fastcall **)(_QWORD, __int64))v14 + 543))(*((_QWORD *)v14 + 529), v13);
    v15 = 0;
  }
  else
  {
    v15 = -1073741822;
  }
  Log(a1, 8, 1734631985, v15, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      v17,
      13,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v15,
      v5);
  if ( v15 >= 0 )
    goto LABEL_23;
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v31) = v15;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v31);
  }
  return (unsigned int)v15;
}
