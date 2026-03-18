/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x14001F69C
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140020DC0 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x140017B50 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140017E00 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhSyncSendCommandToDevice @ 0x140019B80 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAcquireFdoPnpLock @ 0x140030180 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x140030244 (UsbhReleaseFdoPnpLock.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x140061600 (memmove.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorForPDO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        _BYTE *a6,
        char a7,
        char a8)
{
  int v12; // r10d
  unsigned __int16 *v13; // rdi
  __int64 v14; // rbx
  _DWORD *v15; // r14
  __int64 v16; // r15
  int v17; // r10d
  char v18; // r14
  _DWORD *v19; // rax
  unsigned int v20; // eax
  char v21; // al
  _WORD *v22; // rdx
  unsigned __int16 v23; // si
  unsigned __int16 v24; // si
  int v25; // r10d
  __int64 v26; // r9
  int v27; // edx
  int v28; // r8d
  int v29; // r8d
  char v30; // al
  __int64 v31; // r11
  _BYTE *v32; // rbx
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  int v36; // [rsp+88h] [rbp+20h] BYREF

  v36 = 0;
  Log(a1, 32, 1195659313, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      33,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
    v12 = 32;
  }
  v13 = a5;
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v12, 1195659314, a2, 0LL);
    LODWORD(v14) = -1073741789;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(a4 + 1) != 6 )
  {
    Log(a1, v12, 1195659315, a2, *(unsigned __int8 *)(a4 + 1));
LABEL_8:
    LODWORD(v14) = -1073741811;
    goto LABEL_64;
  }
  if ( *(char *)a4 >= 0 )
  {
    Log(a1, v12, 1195659316, a2, 0LL);
    goto LABEL_8;
  }
  v15 = PdoExt(a2);
  v16 = UsbhRefPdoDeviceHandle(a1, a2, a3, 0x48446E67u);
  Log(a1, 32, 1919304753, 0LL, v16);
  if ( v16 && !a8 )
  {
    v18 = a7;
    if ( a7 )
    {
      v19 = FdoExt(a1);
      UsbhReleaseFdoPnpLock(a1, v19 + 434);
    }
    v14 = (int)UsbhSyncSendCommandToDevice(a1, a2, (char *)a4, (__int64)a6, v13, v35, &v36);
    UsbhDerefPdoDeviceHandle(a1, v16, a3, 0x48446E67u);
    if ( v18 )
    {
      v20 = (unsigned int)FdoExt(a1);
      UsbhAcquireFdoPnpLock(a1, v20 + 1736, 11, -267583477, 0);
    }
    Log(a1, 32, 1195659316, v14, v36);
    goto LABEL_64;
  }
  v21 = *(_BYTE *)(a4 + 3);
  if ( v21 == 2 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v22 = (_WORD *)*((_QWORD *)v15 + 299);
      goto LABEL_21;
    }
    goto LABEL_42;
  }
  if ( v21 != 1 )
  {
    if ( v21 == 15 && !*(_BYTE *)(a4 + 2) )
    {
      v22 = (_WORD *)*((_QWORD *)v15 + 300);
LABEL_21:
      if ( v22 )
      {
        v23 = v22[1];
        if ( *v13 <= v23 )
          v23 = *v13;
        if ( v23 <= *(_WORD *)(a4 + 6) && v23 <= *v13 && v23 )
        {
          memmove(a6, v22, v23);
          LODWORD(v14) = 0;
        }
        else
        {
          LODWORD(v14) = -1073741823;
          v23 = 0;
        }
        *v13 = v23;
        goto LABEL_62;
      }
      goto LABEL_60;
    }
    goto LABEL_42;
  }
  if ( *(_BYTE *)(a4 + 2) )
  {
LABEL_42:
    if ( v21 != 3 )
      goto LABEL_61;
    v30 = *(_BYTE *)(a4 + 2);
    if ( !v30 || v30 != *((_BYTE *)v15 + 1416) || !*((_QWORD *)v15 + 267) || !v15[533] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_61;
    v24 = *((_WORD *)v15 + 1066);
    if ( *(unsigned __int8 *)v13 <= v24 )
      v24 = *(unsigned __int8 *)v13;
    Log(a1, v17, 1195659319, *(unsigned __int16 *)(a4 + 6), *v13);
    if ( v24 <= *(_WORD *)(a4 + 6) && v24 <= *v13 )
    {
      v32 = a6;
      if ( v24 )
        *a6 = v24;
      if ( v24 >= (unsigned __int16)v31 )
      {
        v32[1] = 3;
        if ( v24 > (unsigned __int16)v31 )
        {
          memmove(v32 + 2, *((const void **)v15 + 267), v24 - v31);
          v25 = 32;
        }
      }
      v26 = (__int64)v32;
      v34 = v24;
      v28 = 1195659320;
      v27 = v25;
      goto LABEL_37;
    }
    v29 = 1195659321;
    goto LABEL_59;
  }
  v24 = *v13;
  if ( *v13 > 0x12u )
    v24 = 18;
  Log(a1, v17, 1195659316, *(unsigned __int16 *)(a4 + 6), *v13);
  if ( v24 <= *(_WORD *)(a4 + 6) && v24 <= *v13 )
  {
    memmove(a6, v15 + 350, v24);
    v26 = (__int64)a6;
    v27 = 32;
    v28 = 1195659317;
    v34 = v24;
LABEL_37:
    *v13 = v24;
    Log(a1, v27, v28, v26, v34);
    LODWORD(v14) = 0;
    goto LABEL_62;
  }
  v29 = 1195659318;
LABEL_59:
  Log(a1, v25, v29, (__int64)a6, v24);
LABEL_60:
  *v13 = 0;
LABEL_61:
  LODWORD(v14) = -1073741823;
LABEL_62:
  if ( v16 )
    UsbhDerefPdoDeviceHandle(a1, v16, a3, 0x48446E67u);
LABEL_64:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      34,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v14);
  return (unsigned int)v14;
}
