/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E4F0
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x14000E2A4 (HUBFDO_GetPortStatusForDebugging.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FE00 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  _WORD *v16; // rcx
  KIRQL v17; // al
  int v18; // ecx
  KIRQL v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned int v22; // r11d
  _QWORD *v23; // rcx
  __int64 v24; // r9
  __int64 j; // r10
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // edx
  bool v34; // sf
  void *v35; // rdx
  int v36; // edx
  __int128 *v37; // r8
  void *v39; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v40; // [rsp+38h] [rbp-30h]
  __int128 v41; // [rsp+40h] [rbp-28h] BYREF

  v39 = 0LL;
  LOBYTE(v8) = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006D270);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v39,
          0LL);
  if ( (v11 & 0x80000000) == 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v39, 35LL, a3);
    if ( (v11 & 0x80000000) == 0 )
    {
      v8 = *(unsigned __int16 *)v39;
      memset(v39, 0, a3);
      for ( i = *(_QWORD **)(v10 + 2376); ; i = (_QWORD *)*i )
      {
        v13 = i - 31;
        if ( (_QWORD *)(v10 + 2376) == i )
        {
          *(_DWORD *)((char *)v39 + 31) = 3;
          goto LABEL_10;
        }
        if ( *((unsigned __int16 *)v13 + 100) == v8 )
          break;
      }
      *(_DWORD *)((char *)v39 + 31) = *((_DWORD *)v13 + 356);
LABEL_10:
      if ( *(_BYTE *)(v10 + 12) )
        HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 16),
              0LL,
              1LL);
      if ( !v14 )
        goto LABEL_37;
      do
      {
        if ( v14 != *(_QWORD *)(v10 + 2672)
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v14,
                                     off_14006D1D0)
                                 + 48) == v8 )
        {
          break;
        }
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16),
                v14,
                1LL);
      }
      while ( v14 );
      if ( v14 )
      {
        v15 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v14,
                            off_14006D1D0)
                        + 24);
        *(_DWORD *)v39 = v8;
        v16 = v39;
        *(_OWORD *)((char *)v39 + 4) = *(_OWORD *)(v15 + 1996);
        v16[10] = *(_WORD *)(v15 + 2012);
        *(_DWORD *)((char *)v39 + 27) = 0;
        if ( a5 )
        {
          if ( *(_DWORD *)(v15 + 172) == 3 )
            *((_BYTE *)v39 + 23) = 2;
          else
            *((_BYTE *)v39 + 23) = *(_BYTE *)(v15 + 172);
        }
        else
        {
          *((_BYTE *)v39 + 23) = *(_DWORD *)(v15 + 172) == 0;
        }
        *(_WORD *)((char *)v39 + 25) = *(_WORD *)(v15 + 1656);
        if ( (*(_DWORD *)(v15 + 1640) & 2) != 0 )
          *((_BYTE *)v39 + 24) = 1;
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 40));
        v18 = *(_DWORD *)(v15 + 1644);
        v19 = v17;
        v40 = v17;
        if ( (v18 & 0x10) != 0 && (v20 = *(_QWORD *)(v15 + 48)) != 0 )
        {
          v21 = a3 - 35;
          v22 = 0;
          *((_BYTE *)v39 + 22) = *(_BYTE *)(v20 + 37);
          *(_DWORD *)((char *)v39 + 27) = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 8LL);
          v23 = (_QWORD *)(*(_QWORD *)(v15 + 48) + 16LL);
          v24 = *v23 - 8LL;
          if ( v23 != (_QWORD *)*v23 )
          {
            do
            {
              if ( v21 < 0xB )
                break;
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v24 + 24); *(_DWORD *)((char *)v39 + v26 + 42) = 0 )
              {
                if ( v21 < 0xB )
                  break;
                v26 = 11LL * v22;
                v27 = 10 * j;
                ++v22;
                v21 -= 11LL;
                j = (unsigned int)(j + 1);
                v28 = *(_QWORD *)(v24 + 8 * v27 + 72);
                v29 = v39;
                *(_DWORD *)((char *)v39 + v26 + 35) = *(_DWORD *)v28;
                *(_WORD *)&v29[v26 + 39] = *(_WORD *)(v28 + 4);
                v29[v26 + 41] = *(_BYTE *)(v28 + 6);
              }
              v30 = *(_QWORD *)(v24 + 8);
              v24 = v30 - 8;
            }
            while ( *(_QWORD *)(v15 + 48) + 16LL != v30 );
            v19 = v40;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 40), v19);
          v31 = a3 - v21;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 40), v17);
          v31 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v31);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
      }
      else
      {
LABEL_37:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          35LL);
        v11 = 0;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2536),
      2u,
      3u,
      0x41u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v11);
  }
  if ( a5 == 1 )
  {
    if ( (byte_140070D49 & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v41 = 0LL;
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    v33 = g_IoGetActivityIdIrp ? g_IoGetActivityIdIrp(v32, &v41) : -1073741275;
    if ( (byte_140070D49 & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v34 = v33 < 0;
    v35 = &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( (byte_140070D49 & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v41 = 0LL;
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    v36 = g_IoGetActivityIdIrp ? g_IoGetActivityIdIrp(v32, &v41) : -1073741275;
    if ( (byte_140070D49 & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    v34 = v36 < 0;
    v35 = &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  v37 = &v41;
  if ( v34 )
    LODWORD(v37) = 0;
  McTemplateK0pqq_EtwWriteTransfer(v32, (_DWORD)v35, (_DWORD)v37, *(_QWORD *)(v10 + 248), v8, v11);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
