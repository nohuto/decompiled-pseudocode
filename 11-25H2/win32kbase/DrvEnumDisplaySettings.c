/*
 * XREFs of DrvEnumDisplaySettings @ 0x14004AE70
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x14004BC10 (NtUserEnumDisplaySettings.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x14002BCA0 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     DrvGetDeviceFromName @ 0x14004A170 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14004B800 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     DrvBuildDevmodeList @ 0x14004BF38 (DrvBuildDevmodeList.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     DrvGetDisplayDriverParameters @ 0x14004C840 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008205C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 DrvEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // r15
  __int64 DeviceFromName; // rdi
  __int64 v9; // r12
  char v10; // si
  int v12; // eax
  char *v13; // rbx
  __int64 v14; // rdx
  int v15; // r14d
  _WORD *v16; // rax
  _WORD *v17; // r15
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  int v20; // r10d
  __int64 v21; // rax
  int PreferredMode; // r14d
  unsigned __int16 v23; // r12
  PDEV *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  __int64 v29; // r13
  unsigned __int16 v30; // ax
  unsigned int v31; // ebx
  size_t v32; // rsi
  char *v33; // rcx
  char *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  int DevModeForLddmPath; // eax
  unsigned __int16 v38; // ax
  __int64 v39; // rcx
  __int64 *i; // rax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // [rsp+20h] [rbp-78h]
  unsigned __int16 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+38h] [rbp-60h]
  PCUNICODE_STRING String1; // [rsp+58h] [rbp-40h] BYREF
  __int64 v48; // [rsp+60h] [rbp-38h] BYREF
  __int64 v49; // [rsp+68h] [rbp-30h] BYREF
  __int64 v51; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v51 = va_arg(va1, _QWORD);
  v4 = a4;
  DeviceFromName = 0LL;
  v9 = a3;
  v10 = v51;
  v43 = (unsigned int)v51;
  WdLogSingleEntry4(4LL, a1, a2);
  WdLogGlobalForLineNumber = 11012;
  if ( (v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v45 = *(unsigned __int16 *)(v4 + 70);
  v44 = *(_WORD *)(v4 + 70);
  ProbeForWrite((volatile void *)v4, v45 + 220, 2u);
  if ( *(_WORD *)(v4 + 68) != 220 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 11031;
    return 3221225507LL;
  }
  if ( a1 )
  {
    String1 = 0LL;
    v12 = DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1);
    v13 = (char *)String1;
    if ( v12 >= 0 )
      DeviceFromName = DrvGetDeviceFromName(String1);
    if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
      DeviceFromName = 0LL;
    if ( v13 )
      GreDeleteFastMutex(v13);
  }
  else if ( a2 )
  {
    DeviceFromName = *(_QWORD *)(a2 + 2568);
  }
  if ( !DeviceFromName )
  {
    PreferredMode = -1073741585;
    v23 = v45;
    goto LABEL_52;
  }
  switch ( a3 )
  {
    case 0xFFFFFFFD:
      PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)v4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
      v23 = v45;
      goto LABEL_52;
    case 0xFFFFFFFE:
      v35 = PALLOCMEM(65755LL, 1986356295LL);
      v36 = v35;
      if ( !v35 )
      {
        PreferredMode = -1073741801;
        goto LABEL_54;
      }
      if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
      {
        DevModeForLddmPath = DrvGetDevModeForLddmPath(
                               (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                               -2,
                               (struct _devicemodeW *)v35,
                               0LL);
      }
      else
      {
        *(_DWORD *)(v35 + 68) = -8739;
        DevModeForLddmPath = DrvGetDisplayDriverParameters(DeviceFromName, v35, 0LL, 0LL, v43);
      }
      PreferredMode = DevModeForLddmPath;
      if ( DevModeForLddmPath >= 0 )
      {
        v38 = *(_WORD *)(v36 + 70);
        if ( (unsigned __int16)v45 < v38 )
          v38 = v45;
        v23 = v38;
        memmove((void *)(v4 + 220), (const void *)(v36 + 220), v38);
        *(_OWORD *)v4 = *(_OWORD *)v36;
        *(_OWORD *)(v4 + 16) = *(_OWORD *)(v36 + 16);
        *(_OWORD *)(v4 + 32) = *(_OWORD *)(v36 + 32);
        *(_OWORD *)(v4 + 48) = *(_OWORD *)(v36 + 48);
        *(_OWORD *)(v4 + 64) = *(_OWORD *)(v36 + 64);
        *(_OWORD *)(v4 + 80) = *(_OWORD *)(v36 + 80);
        *(_OWORD *)(v4 + 96) = *(_OWORD *)(v36 + 96);
        *(_OWORD *)(v4 + 112) = *(_OWORD *)(v36 + 112);
        *(_OWORD *)(v4 + 128) = *(_OWORD *)(v36 + 128);
        *(_OWORD *)(v4 + 144) = *(_OWORD *)(v36 + 144);
        *(_OWORD *)(v4 + 160) = *(_OWORD *)(v36 + 160);
        *(_OWORD *)(v4 + 176) = *(_OWORD *)(v36 + 176);
        *(_OWORD *)(v4 + 192) = *(_OWORD *)(v36 + 192);
        *(_QWORD *)(v4 + 208) = *(_QWORD *)(v36 + 208);
        *(_DWORD *)(v4 + 216) = *(_DWORD *)(v36 + 216);
      }
      else
      {
        v23 = v45;
      }
      GreDeleteFastMutex((char *)v36);
LABEL_52:
      if ( !PreferredMode )
        *(_WORD *)(v4 + 70) = v23;
      goto LABEL_54;
    case 0xFFFFFFFF:
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v48);
      v21 = hdevEnumerate<1>(0LL);
      PreferredMode = -1073741585;
      v23 = v45;
      while ( 1 )
      {
        v24 = (PDEV *)v21;
        if ( !v21 )
          break;
        v25 = *(_QWORD *)(v21 + 2568);
        if ( v25 == DeviceFromName && *(_DWORD *)(v21 + 12) )
        {
          LOBYTE(v51) = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v21 + 2584) + 184LL) == 1 && (*(_DWORD *)(v25 + 160) & 0x800000) != 0 )
          {
            v42 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)DeviceFromName, -1, 0LL, (bool *)va);
            if ( v42 < 0 )
            {
              WdLogSingleEntry1(5LL, v42);
              WdLogGlobalForLineNumber = 11181;
            }
          }
          if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
          {
            v46 = (unsigned int)Feature_Vail__private_featureState;
            if ( (Feature_Vail__private_featureState & 0x10) == 0 )
            {
              LODWORD(v46) = Feature_Vail__private_featureState | 1;
              wil_details_FeatureReporting_ReportUsageToService(&Feature_Vail__private_descriptor, v46, 3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v46, 3LL, &Feature_Vail__private_descriptor);
            }
            LOBYTE(v51) = 1;
            v23 = v44;
          }
          v26 = *((_QWORD *)v24 + 323);
          v27 = *(_WORD *)(v26 + 70);
          if ( v23 < v27 )
            v27 = v23;
          v23 = v27;
          v44 = v27;
          memmove((void *)(v4 + 220), (const void *)(v26 + 220), v27);
          v28 = *((_QWORD *)v24 + 323);
          *(_OWORD *)v4 = *(_OWORD *)v28;
          *(_OWORD *)(v4 + 16) = *(_OWORD *)(v28 + 16);
          *(_OWORD *)(v4 + 32) = *(_OWORD *)(v28 + 32);
          *(_OWORD *)(v4 + 48) = *(_OWORD *)(v28 + 48);
          *(_OWORD *)(v4 + 64) = *(_OWORD *)(v28 + 64);
          *(_OWORD *)(v4 + 80) = *(_OWORD *)(v28 + 80);
          *(_OWORD *)(v4 + 96) = *(_OWORD *)(v28 + 96);
          *(_OWORD *)(v4 + 112) = *(_OWORD *)(v28 + 112);
          v28 += 128LL;
          *(_OWORD *)(v4 + 128) = *(_OWORD *)v28;
          *(_OWORD *)(v4 + 144) = *(_OWORD *)(v28 + 16);
          *(_OWORD *)(v4 + 160) = *(_OWORD *)(v28 + 32);
          *(_OWORD *)(v4 + 176) = *(_OWORD *)(v28 + 48);
          *(_OWORD *)(v4 + 192) = *(_OWORD *)(v28 + 64);
          *(_QWORD *)(v4 + 208) = *(_QWORD *)(v28 + 80);
          *(_DWORD *)(v4 + 216) = *(_DWORD *)(v28 + 88);
          if ( (_BYTE)v51 )
            *(_DWORD *)(v4 + 184) = 64;
          *(_DWORD *)(v4 + 72) &= 0xF9FFFFFF;
          PreferredMode = 0;
        }
        v21 = hdevEnumerate<1>(v24);
      }
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v48);
      goto LABEL_52;
  }
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11236;
  }
  DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName);
  v15 = 0;
  if ( (v10 & 4) == 0 )
  {
    if ( *(_WORD *)(W32GetUserSessionState(0LL, v14) + 68752) )
    {
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v49);
      for ( i = *(__int64 **)(*(_QWORD *)(W32GetSessionState(v39) + 88) + 3848LL); i; i = (__int64 *)*i )
      {
        if ( i[321] == DeviceFromName && *((_DWORD *)i + 3) )
        {
          v41 = i[323];
          if ( (*(_DWORD *)(v41 + 72) & 0x80u) != 0 )
            v15 = *(_DWORD *)(v41 + 84);
          break;
        }
      }
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v49);
    }
    else
    {
      v16 = (_WORD *)PALLOCMEM(65755LL, 1986356295LL);
      v17 = v16;
      if ( v16 )
      {
        memset(v16, 0, 0xDCuLL);
        v17[34] = -8739;
        if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v17, 0LL, 0LL, v43) >= 0
          && (*((_DWORD *)v17 + 18) & 0x80u) != 0 )
        {
          v15 = *((_DWORD *)v17 + 21);
        }
        GreDeleteFastMutex((char *)v17);
      }
      v4 = a4;
    }
  }
  if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
  {
    v18 = *(_DWORD *)(DeviceFromName + 188);
    if ( a3 >= v18 )
    {
      PreferredMode = -1073741584;
      v23 = v45;
      v29 = 0LL;
    }
    else if ( (v10 & 6) == 6 )
    {
      _mm_lfence();
      v29 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16 * v9 + 8);
      PreferredMode = -1073741584;
      v23 = v44;
    }
    else
    {
      v19 = 0;
      v20 = 0;
      while ( v19 < v18 )
      {
        if ( ((v10 & 2) != 0 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v19))
          && ((v10 & 4) != 0
           || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v19 + 8) + 84LL) == v15) )
        {
          if ( v20 == a3 )
          {
            _mm_lfence();
            v29 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v19 + 8);
            PreferredMode = -1073741584;
            v23 = v44;
            goto LABEL_57;
          }
          ++v20;
        }
        ++v19;
      }
      PreferredMode = -1073741584;
      v23 = v45;
      v29 = 0LL;
    }
LABEL_57:
    if ( v29 )
    {
      v30 = *(_WORD *)(v29 + 70);
      if ( v23 < v30 )
        v30 = v23;
      v31 = v30;
      v23 = v30;
      v32 = 220LL;
      memset((void *)v4, 0, 0xDCuLL);
      memmove((void *)(v4 + 220), (const void *)(v29 + *(unsigned __int16 *)(v29 + 68)), v31);
      if ( *(_WORD *)(v29 + 68) <= 0xDCu )
        v32 = *(unsigned __int16 *)(v29 + 68);
      memmove((void *)v4, (const void *)v29, v32);
      if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v29 + 184) == 1 )
        *(_DWORD *)(v4 + 184) = 64;
      PreferredMode = 0;
    }
    if ( PreferredMode == -1073741584 )
    {
      *(_DWORD *)(DeviceFromName + 184) = 0;
      v33 = *(char **)(DeviceFromName + 176);
      if ( v33 )
      {
        GreDeleteFastMutex(v33);
        *(_QWORD *)(DeviceFromName + 176) = 0LL;
      }
      v34 = *(char **)(DeviceFromName + 192);
      if ( v34 )
      {
        GreDeleteFastMutex(v34);
        *(_QWORD *)(DeviceFromName + 192) = 0LL;
      }
      *(_DWORD *)(DeviceFromName + 188) = 0;
    }
    goto LABEL_52;
  }
  WdLogSingleEntry0(5LL);
  WdLogGlobalForLineNumber = 11324;
  PreferredMode = -1073741823;
LABEL_54:
  WdLogSingleEntry1(5LL, PreferredMode);
  WdLogGlobalForLineNumber = 11450;
  return (unsigned int)PreferredMode;
}
