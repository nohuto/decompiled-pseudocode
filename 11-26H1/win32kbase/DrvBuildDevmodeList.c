/*
 * XREFs of DrvBuildDevmodeList @ 0x140150FE4
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x14000D210 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x14000DD90 (DrvGetDisplayDriverNames.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140029454 (PruneModesByDisplayDeviceCaps.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14002C914 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x140152324 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, __int64 a2, int a3)
{
  bool v4; // zf
  int v5; // edi
  __int64 DxgkWin32kInterface; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rcx
  _DWORD *v16; // rdi
  const void **v17; // rsi
  unsigned int *v18; // r14
  unsigned int *DisplayDriverNames; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  char *v22; // r9
  char *v23; // rbp
  unsigned int v24; // r14d
  unsigned int DriverModes; // eax
  void *v26; // r13
  size_t v27; // r12
  char *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  int v33; // ebp
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  char *v39; // rcx
  unsigned int v40; // r8d
  unsigned int v41; // ebp
  char *v42; // rdx
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // edi
  unsigned int v48; // esi
  __int64 v49; // r8
  unsigned int i; // r10d
  __int64 v51; // r11
  __int64 v52; // r9
  __int64 v53; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  v4 = (*((_DWORD *)a1 + 40) & 0x4000000) == 0;
  v5 = a2;
  Src = 0LL;
  if ( v4 || *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 68696) )
  {
    if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 || !*((_DWORD *)a1 + 46) || !*((_QWORD *)a1 + 22) || a3 && !v5 )
      goto LABEL_12;
    v5 = 0;
    v53 = 0LL;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
    if ( (*(int (__fastcall **)(char *, _QWORD, __int64 *))(DxgkWin32kInterface + 344))(
           (char *)a1 + 240,
           *((unsigned int *)a1 + 62),
           &v53) >= 0 )
    {
      if ( *((_QWORD *)a1 + 21) == v53 )
        goto LABEL_12;
      *((_QWORD *)a1 + 21) = v53;
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
      v11 = (char *)*((_QWORD *)a1 + 22);
      if ( v11 )
      {
        GreDeleteFastMutex(v11, v8, v9, v10);
        v15 = (char *)*((_QWORD *)a1 + 24);
        *((_QWORD *)a1 + 22) = 0LL;
        *((_DWORD *)a1 + 46) = 0;
        if ( v15 )
        {
          GreDeleteFastMutex(v15, v12, v13, v14);
          *((_QWORD *)a1 + 24) = 0LL;
        }
      }
    }
  }
  v16 = (_DWORD *)((char *)a1 + 184);
  if ( *((_DWORD *)a1 + 46) )
    return;
  v17 = (const void **)((char *)a1 + 176);
  if ( *((_QWORD *)a1 + 22) )
    return;
  v18 = (unsigned int *)((char *)a1 + 188);
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = DrvGetDisplayDriverNames((__int64)a1);
  v23 = (char *)DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v24 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v23[16 * v24 + 16],
                        *(void **)&v23[16 * v24 + 8],
                        &Src);
        v26 = Src;
        v27 = DriverModes;
        if ( DriverModes )
        {
          v28 = (char *)PALLOCNOZ(DriverModes + *v16, 0x73726447u);
          if ( v28 )
          {
            if ( *v16 )
            {
              memmove(v28, *v17, (unsigned int)*v16);
              GreDeleteFastMutex((char *)*v17, v29, v30, v31);
            }
            memmove(&v28[*v16], v26, v27);
            *v16 += v27;
            *v17 = v28;
          }
        }
        if ( v26 )
          GreDeleteFastMutex((char *)v26, v20, v21, (__int64)v22);
        ++v24;
      }
      while ( v24 < *(_DWORD *)v23 );
      v16 = (_DWORD *)((char *)a1 + 184);
      v17 = (const void **)((char *)a1 + 176);
    }
    GreDeleteFastMutex(v23, v20, v21, (__int64)v22);
    v18 = (unsigned int *)((char *)a1 + 188);
  }
  v32 = (unsigned int)*v16;
  if ( (_DWORD)v32 )
  {
    v33 = 0;
    v34 = 0;
    v22 = (char *)*v17;
    do
    {
      ++v33;
      v34 += *(unsigned __int16 *)&v22[v34 + 70] + *(unsigned __int16 *)&v22[v34 + 68];
    }
    while ( v34 < (unsigned int)v32 );
    v16 = (_DWORD *)((char *)a1 + 184);
    v17 = (const void **)((char *)a1 + 176);
    v18 = (unsigned int *)((char *)a1 + 188);
  }
  else
  {
    if ( !*v17 )
      goto LABEL_73;
    v33 = 0;
  }
  v35 = PALLOCMEM((unsigned int)(16 * v33), 1936876615LL, v32, (__int64)v22);
  *((_QWORD *)a1 + 24) = v35;
  if ( !v35 )
  {
    v39 = (char *)*v17;
    *v16 = 0;
    GreDeleteFastMutex(v39, v36, v37, v38);
    *v17 = 0LL;
    goto LABEL_73;
  }
  v40 = 0;
  *((_DWORD *)a1 + 47) = v33;
  v41 = 0;
  if ( !*v16 )
    goto LABEL_53;
  do
  {
    v42 = (char *)*v17 + v41;
    v43 = *((_DWORD *)v42 + 18);
    if ( (v43 & 0x80u) != 0 )
    {
      if ( *((_DWORD *)v42 + 21) <= 3u )
        goto LABEL_46;
    }
    else
    {
      v43 |= 0x80u;
      *((_DWORD *)v42 + 18) = v43;
    }
    *((_DWORD *)v42 + 21) = 0;
LABEL_46:
    if ( (v43 & 0x20000000) == 0 )
      goto LABEL_50;
    v44 = *((_DWORD *)v42 + 22);
    if ( !v44 || v44 > 2 )
    {
      *((_DWORD *)v42 + 18) = v43 & 0xDFFFFFFF;
LABEL_50:
      *((_DWORD *)v42 + 22) = 0;
    }
    v45 = v40++;
    v45 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v45) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v45 + 8) = v42;
    v41 += *((unsigned __int16 *)v42 + 35) + *((unsigned __int16 *)v42 + 34);
  }
  while ( v41 < *v16 );
  v18 = (unsigned int *)((char *)a1 + 188);
LABEL_53:
  v46 = *((_DWORD *)a1 + 47);
  v47 = 1;
  if ( v46 )
  {
    v48 = 0;
    do
    {
      v49 = *(_QWORD *)(*((_QWORD *)a1 + 24) + 16LL * v48 + 8);
      if ( *(_DWORD *)(v49 + 184) == 1 )
      {
        for ( i = 1; i <= v46; ++i )
        {
          if ( i != v47 )
          {
            v51 = *((_QWORD *)a1 + 24);
            v52 = *(_QWORD *)(v51 + 16LL * (i - 1) + 8);
            if ( *(_DWORD *)(v49 + 168) == *(_DWORD *)(v52 + 168)
              && *(_DWORD *)(v49 + 172) == *(_DWORD *)(v52 + 172)
              && *(_DWORD *)(v49 + 176) == *(_DWORD *)(v52 + 176)
              && ((*(_BYTE *)(v49 + 180) ^ *(_BYTE *)(v52 + 180)) & 4) == 0
              && *(_DWORD *)(v49 + 84) == *(_DWORD *)(v52 + 84)
              && *(_DWORD *)(v49 + 88) == *(_DWORD *)(v52 + 88) )
            {
              if ( *v18 > v47 )
                memmove((void *)(v51 + 16LL * v48), (const void *)(v51 + 16LL * v47), 16LL * (*v18 - v47));
              --*v18;
              --v47;
              --v48;
              break;
            }
          }
        }
      }
      v46 = *v18;
      ++v47;
      ++v48;
    }
    while ( v47 <= *v18 );
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    v41 = PruneModesByDisplayDeviceCaps(a1, v46, *((_QWORD *)a1 + 24));
  if ( !v41 )
LABEL_73:
    DrvLogDisplayDriverEvent(2LL);
}
