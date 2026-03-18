/*
 * XREFs of DrvBuildDevmodeList @ 0x14004BF38
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14006D21C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140080A98 (PruneModesByDisplayDeviceCaps.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x140101838 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x14011D910 (DrvGetDisplayDriverNames.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x1401CFF84 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, __int64 a2, int a3)
{
  bool v4; // zf
  int v5; // edi
  __int64 DxgkWin32kInterface; // rax
  char *v8; // rcx
  char *v9; // rcx
  _DWORD *v10; // rsi
  const void **v11; // rdi
  unsigned int *v12; // r14
  char *DisplayDriverNames; // rax
  char *v14; // rbp
  unsigned int v15; // r14d
  unsigned int DriverModes; // eax
  void *v17; // r13
  size_t v18; // r12
  char *v19; // r15
  int v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rax
  char *v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // ebp
  char *v26; // rdx
  int v27; // ecx
  __int64 v28; // rcx
  unsigned int v29; // edi
  unsigned int v30; // r8d
  unsigned int v31; // esi
  unsigned int v32; // edx
  __int64 v33; // r9
  int v34; // r10d
  __int64 v35; // r11
  __int64 v36; // rdx
  __int64 v37; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  v4 = (*((_DWORD *)a1 + 40) & 0x4000000) == 0;
  v5 = a2;
  Src = 0LL;
  if ( v4 || *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68704) )
  {
    if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 || !*((_DWORD *)a1 + 46) || !*((_QWORD *)a1 + 22) || a3 && !v5 )
      goto LABEL_12;
    v5 = 0;
    v37 = 0LL;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
    if ( (*(int (__fastcall **)(char *, _QWORD, __int64 *))(DxgkWin32kInterface + 344))(
           (char *)a1 + 240,
           *((unsigned int *)a1 + 62),
           &v37) >= 0 )
    {
      if ( *((_QWORD *)a1 + 21) == v37 )
        goto LABEL_12;
      *((_QWORD *)a1 + 21) = v37;
    }
  }
  v5 = 1;
LABEL_12:
  if ( (unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline()
    && (*((_DWORD *)a1 + 40) & 0x2000000) != 0
    || v5 )
  {
    if ( *((_DWORD *)a1 + 46) )
    {
      v8 = (char *)*((_QWORD *)a1 + 22);
      if ( v8 )
      {
        GreDeleteFastMutex(v8);
        v9 = (char *)*((_QWORD *)a1 + 24);
        *((_QWORD *)a1 + 22) = 0LL;
        *((_DWORD *)a1 + 46) = 0;
        if ( v9 )
        {
          GreDeleteFastMutex(v9);
          *((_QWORD *)a1 + 24) = 0LL;
        }
      }
    }
  }
  v10 = (_DWORD *)((char *)a1 + 184);
  if ( *((_DWORD *)a1 + 46) )
    return;
  v11 = (const void **)((char *)a1 + 176);
  if ( *((_QWORD *)a1 + 22) )
    return;
  v12 = (unsigned int *)((char *)a1 + 188);
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = (char *)DrvGetDisplayDriverNames(a1);
  v14 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v15 = 0;
    if ( *(_DWORD *)DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v14[16 * v15 + 16],
                        *(void **)&v14[16 * v15 + 8],
                        (struct _devicemodeW **)&Src);
        v17 = Src;
        v18 = DriverModes;
        if ( DriverModes )
        {
          v19 = (char *)PALLOCNOZ(DriverModes + *v10, 1936876615LL);
          if ( v19 )
          {
            if ( *v10 )
            {
              memmove(v19, *v11, (unsigned int)*v10);
              GreDeleteFastMutex((char *)*v11);
            }
            memmove(&v19[*v10], v17, v18);
            *v10 += v18;
            *v11 = v19;
          }
        }
        if ( v17 )
          GreDeleteFastMutex((char *)v17);
        ++v15;
      }
      while ( v15 < *(_DWORD *)v14 );
      v10 = (_DWORD *)((char *)a1 + 184);
      v11 = (const void **)((char *)a1 + 176);
    }
    GreDeleteFastMutex(v14);
    v12 = (unsigned int *)((char *)a1 + 188);
  }
  if ( *v10 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      ++v20;
      v21 += *(unsigned __int16 *)((char *)*v11 + v21 + 70) + *(unsigned __int16 *)((char *)*v11 + v21 + 68);
    }
    while ( v21 < *v10 );
    v10 = (_DWORD *)((char *)a1 + 184);
    v11 = (const void **)((char *)a1 + 176);
    v12 = (unsigned int *)((char *)a1 + 188);
  }
  else
  {
    if ( !*v11 )
      goto LABEL_69;
    v20 = 0;
  }
  v22 = PALLOCMEM((unsigned int)(16 * v20), 1936876615LL);
  *((_QWORD *)a1 + 24) = v22;
  if ( !v22 )
  {
    v23 = (char *)*v11;
    *v10 = 0;
    GreDeleteFastMutex(v23);
    *v11 = 0LL;
    goto LABEL_69;
  }
  v24 = 0;
  *((_DWORD *)a1 + 47) = v20;
  v25 = 0;
  if ( !*v10 )
    goto LABEL_52;
  do
  {
    v26 = (char *)*v11 + v25;
    v27 = *((_DWORD *)v26 + 18);
    if ( (v27 & 0x80u) != 0 )
    {
      if ( *((_DWORD *)v26 + 21) <= 3u )
        goto LABEL_46;
    }
    else
    {
      v27 |= 0x80u;
      *((_DWORD *)v26 + 18) = v27;
    }
    *((_DWORD *)v26 + 21) = 0;
LABEL_46:
    if ( (v27 & 0x20000000) != 0 )
    {
      if ( (unsigned int)(*((_DWORD *)v26 + 22) - 1) <= 1 )
        goto LABEL_50;
      *((_DWORD *)v26 + 18) = v27 & 0xDFFFFFFF;
    }
    *((_DWORD *)v26 + 22) = 0;
LABEL_50:
    v28 = v24++;
    v28 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v28) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v28 + 8) = v26;
    v25 += *((unsigned __int16 *)v26 + 35) + *((unsigned __int16 *)v26 + 34);
  }
  while ( v25 < *v10 );
  v12 = (unsigned int *)((char *)a1 + 188);
LABEL_52:
  v29 = 1;
  if ( *((_DWORD *)a1 + 47) )
  {
    v30 = *((_DWORD *)a1 + 47);
    v31 = 0;
    do
    {
      v32 = v30;
      v33 = *(_QWORD *)(*((_QWORD *)a1 + 24) + 16LL * v31 + 8);
      if ( *(_DWORD *)(v33 + 184) == 1 )
      {
        v34 = 1;
        if ( v30 )
        {
          while ( 1 )
          {
            if ( v34 != v29 )
            {
              v35 = *((_QWORD *)a1 + 24);
              v36 = *(_QWORD *)(v35 + 16LL * (unsigned int)(v34 - 1) + 8);
              if ( *(_DWORD *)(v33 + 168) == *(_DWORD *)(v36 + 168)
                && *(_DWORD *)(v33 + 172) == *(_DWORD *)(v36 + 172)
                && *(_DWORD *)(v33 + 176) == *(_DWORD *)(v36 + 176)
                && ((*(_BYTE *)(v33 + 180) ^ *(_BYTE *)(v36 + 180)) & 4) == 0
                && *(_DWORD *)(v33 + 84) == *(_DWORD *)(v36 + 84)
                && *(_DWORD *)(v33 + 88) == *(_DWORD *)(v36 + 88) )
              {
                break;
              }
            }
            if ( ++v34 > v30 )
            {
              v32 = v30;
              goto LABEL_65;
            }
          }
          if ( v30 > v29 )
            memmove((void *)(v35 + 16LL * v31), (const void *)(v35 + 16LL * v29), 16LL * (v30 - v29));
          --*v12;
          --v29;
          v32 = *v12;
          --v31;
        }
      }
LABEL_65:
      ++v29;
      ++v31;
      v30 = v32;
    }
    while ( v29 <= v32 );
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    v25 = PruneModesByDisplayDeviceCaps(a1);
  if ( !v25 )
LABEL_69:
    DrvLogDisplayDriverEvent(2LL);
}
