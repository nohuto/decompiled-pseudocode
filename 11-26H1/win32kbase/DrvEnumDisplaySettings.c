/*
 * XREFs of DrvEnumDisplaySettings @ 0x14013BA10
 * Callers:
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013B978 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     DrvGetDisplayDriverParameters @ 0x1400285D4 (DrvGetDisplayDriverParameters.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x14007D128 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     DrvBuildDevmodeList @ 0x140150FE4 (DrvBuildDevmodeList.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401AD57C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Feature_Vail__private_IsEnabledPreCheck @ 0x1401BDD04 (Feature_Vail__private_IsEnabledPreCheck.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1402D21DC (RtlReadUShortFromUser.c)
 *     RtlSetUserMemory @ 0x1402D2218 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1402D23A8 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        struct _devicemodeW *a4,
        unsigned int a5)
{
  __int64 v6; // r12
  int PreferredMode; // r14d
  __int64 DeviceFromName; // rdi
  __int16 UShortFromUser; // ax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v17; // eax
  char *v18; // rbx
  unsigned int v19; // ebx
  __int64 v20; // rax
  _WORD *v21; // rbx
  int DevModeForLddmPath; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // di
  unsigned __int16 v28; // r12
  struct _ERESOURCE *i; // rax
  int v30; // r8d
  __int64 v31; // rsi
  __int64 v32; // rcx
  char v33; // bl
  int v34; // eax
  __int64 v35; // rdx
  unsigned __int16 v36; // ax
  __int64 v37; // rdx
  int ULongFromUser; // eax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // r8
  __int64 j; // r9
  char v43; // al
  int v44; // r11d
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 *v48; // rax
  int v49; // r8d
  __int64 v50; // rcx
  struct _devicemodeW *v51; // rax
  struct _devicemodeW *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rsi
  unsigned int v57; // r10d
  int v58; // eax
  unsigned __int16 v59; // ax
  unsigned int v60; // ebx
  size_t v61; // r14
  char *v62; // rcx
  char *v63; // rcx
  unsigned __int16 v64; // [rsp+38h] [rbp-60h]
  PCUNICODE_STRING String1; // [rsp+40h] [rbp-58h] BYREF
  int v66; // [rsp+48h] [rbp-50h]
  __int64 v67; // [rsp+50h] [rbp-48h]
  __int64 v68; // [rsp+58h] [rbp-40h] BYREF
  __int64 v69; // [rsp+60h] [rbp-38h] BYREF
  WORD *p_dmDriverExtra; // [rsp+68h] [rbp-30h]

  v6 = a3;
  PreferredMode = -1073741585;
  DeviceFromName = 0LL;
  v67 = 0LL;
  WdLogSingleEntry4(4LL, a1, a2, a3, a5);
  WdLogGlobalForLineNumber = 10868;
  if ( ((unsigned __int8)a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  p_dmDriverExtra = &a4->dmDriverExtra;
  v64 = ((__int64 (*)(void))RtlReadUShortFromUser)();
  ProbeForWrite(a4, v64 + 220LL, 2u);
  UShortFromUser = RtlReadUShortFromUser(&a4->dmSize);
  v15 = 220LL;
  if ( UShortFromUser != 220 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 10886;
    return 3221225507LL;
  }
  if ( a1 )
  {
    String1 = 0LL;
    v17 = DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1);
    v18 = (char *)String1;
    if ( v17 >= 0 )
    {
      DeviceFromName = DrvGetDeviceFromName(String1);
      v67 = DeviceFromName;
    }
    if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
    {
      if ( (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
        DeviceFromName = 0LL;
      v67 = DeviceFromName;
    }
    if ( v18 )
      GreDeleteFastMutex(v18, v12, v13, v14);
  }
  else if ( a2 )
  {
    DeviceFromName = *(_QWORD *)(a2 + 2568);
    v67 = DeviceFromName;
  }
  if ( !DeviceFromName )
    goto LABEL_104;
  v19 = a3;
  switch ( a3 )
  {
    case 0xFFFFFFFD:
      PreferredMode = DrvGetPreferredMode(a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
LABEL_104:
      v28 = v64;
LABEL_105:
      if ( !PreferredMode )
        RtlWriteUShortToUser(p_dmDriverExtra, v28);
      break;
    case 0xFFFFFFFE:
      v20 = PALLOCMEM(65755LL, 1986356295LL, v13, v14);
      v21 = (_WORD *)v20;
      v67 = v20;
      if ( v20 )
      {
        if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
        {
          DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                 (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                 -2,
                                 (struct _devicemodeW *)v20,
                                 0LL);
        }
        else
        {
          *(_DWORD *)(v20 + 68) = -8739;
          DevModeForLddmPath = DrvGetDisplayDriverParameters(DeviceFromName, (struct _devicemodeW *)v20, 0, 0LL);
        }
        PreferredMode = DevModeForLddmPath;
        if ( DevModeForLddmPath < 0 )
        {
          v28 = v64;
        }
        else
        {
          v26 = v21[35];
          if ( v64 < v26 )
            v26 = v64;
          v27 = v26;
          RtlCopyToUser(&a4[1], v21 + 110, v26);
          RtlCopyToUser(a4, v21, 0xDCuLL);
          v28 = v27;
        }
        GreDeleteFastMutex((char *)v21, v23, v24, v25);
        goto LABEL_105;
      }
      PreferredMode = -1073741801;
      break;
    case 0xFFFFFFFF:
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v68);
      for ( i = hdevEnumerate<1>(0LL); ; i = hdevEnumerate<1>(v31) )
      {
        String1 = (PCUNICODE_STRING)i;
        v31 = (__int64)i;
        if ( !i )
          break;
        v32 = *(_QWORD *)&i[24].NumberOfSharedWaiters;
        if ( v32 == DeviceFromName && HIDWORD(i->SystemResourcesList.Blink) )
        {
          v33 = 0;
          LOBYTE(a5) = 0;
          if ( *(_DWORD *)(i[24].CreatorBackTraceIndex + 184) == 1 && (*(_DWORD *)(v32 + 160) & 0x800000) != 0 )
          {
            v34 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)DeviceFromName, a3, 0LL, (bool *)&a5);
            if ( v34 < 0 )
            {
              WdLogSingleEntry1(5LL, v34);
              WdLogGlobalForLineNumber = 11036;
            }
            v33 = a5;
          }
          if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
          {
            Feature_Vail__private_IsEnabledPreCheck();
            v33 = 1;
          }
          v35 = *(_QWORD *)(v31 + 2584);
          v36 = *(_WORD *)(v35 + 70);
          if ( v64 < v36 )
            v36 = v64;
          v64 = v36;
          RtlCopyToUser(&a4[1], (void *)(v35 + 220), v36);
          RtlCopyToUser(a4, *(void **)(v31 + 2584), 0xDCuLL);
          if ( v33 )
            RtlWriteULongToUser(&a4->dmDisplayFrequency, 64LL);
          ULongFromUser = RtlReadULongFromUser(&a4->dmFields, v37);
          RtlWriteULongToUser(&a4->dmFields, ULongFromUser & 0xF9FFFFFF);
          PreferredMode = 0;
          v66 = 0;
        }
      }
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v68,
        v30);
      goto LABEL_104;
    default:
      if ( (*(_DWORD *)(PsGetCurrentThreadWin32Thread(v15, v12) + 24) & 0xC) != 8 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 11093;
      }
      DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      LODWORD(String1) = 0;
      v43 = a5;
      v44 = a5 & 4;
      LODWORD(v68) = v44;
      if ( (a5 & 4) == 0 )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v40, v39, v41) + 68744) )
        {
          SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v69);
          v48 = *(__int64 **)(*(_QWORD *)(W32GetSessionState(v47) + 88) + 3952LL);
          if ( v48 )
          {
            while ( v48[321] != DeviceFromName || !*((_DWORD *)v48 + 3) )
            {
              v48 = (__int64 *)*v48;
              if ( !v48 )
                goto LABEL_63;
            }
            v50 = v48[323];
            if ( (*(_DWORD *)(v50 + 72) & 0x80u) != 0 )
              LODWORD(String1) = *(_DWORD *)(v50 + 84);
          }
LABEL_63:
          GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            v69,
            v49);
        }
        else
        {
          v51 = (struct _devicemodeW *)PALLOCMEM(65755LL, 1986356295LL, v45, v46);
          v52 = v51;
          if ( v51 )
          {
            memset(v51, 0, sizeof(struct _devicemodeW));
            v52->dmSize = -8739;
            if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v52, 0, 0LL) >= 0 && (v52->dmFields & 0x80u) != 0 )
              LODWORD(String1) = v52->dmDisplayOrientation;
            GreDeleteFastMutex((char *)v52, v53, v54, v55);
          }
          v19 = a3;
        }
        v44 = v68;
        v43 = a5;
      }
      if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
      {
        v56 = 0LL;
        PreferredMode = -1073741584;
        v57 = *(_DWORD *)(DeviceFromName + 188);
        if ( v19 >= v57 )
          goto LABEL_87;
        v58 = v43 & 2;
        a5 = v58;
        if ( v58 && v44 )
        {
          _mm_lfence();
          v56 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16 * v6 + 8);
          goto LABEL_87;
        }
        v41 = 0LL;
        for ( j = 0LL; (unsigned int)v41 < v57; v58 = a5 )
        {
          v39 = (unsigned int)v41;
          if ( v58 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * (unsigned int)v41) )
          {
            v39 = 2LL * (unsigned int)v41;
            if ( v44
              || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * (unsigned int)v41 + 8) + 84LL) == (_DWORD)String1 )
            {
              if ( (_DWORD)j == v19 )
              {
                v56 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * (unsigned int)v41 + 8);
                break;
              }
              j = (unsigned int)(j + 1);
            }
          }
          v41 = (unsigned int)(v41 + 1);
        }
LABEL_87:
        if ( v56 )
        {
          v59 = *(_WORD *)(v56 + 70);
          if ( v64 < v59 )
            v59 = v64;
          v60 = v59;
          v28 = v59;
          v61 = 220LL;
          RtlSetUserMemory(a4);
          RtlCopyToUser(&a4[1], (void *)(v56 + *(unsigned __int16 *)(v56 + 68)), v60);
          if ( *(_WORD *)(v56 + 68) <= 0xDCu )
            v61 = *(unsigned __int16 *)(v56 + 68);
          RtlCopyToUser(a4, (void *)v56, v61);
          if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v56 + 184) == 1 )
            RtlWriteULongToUser(&a4->dmDisplayFrequency, 64LL);
          PreferredMode = 0;
          v66 = 0;
        }
        else
        {
          v28 = v64;
        }
        if ( PreferredMode == -1073741584 )
        {
          *(_DWORD *)(DeviceFromName + 184) = 0;
          v62 = *(char **)(DeviceFromName + 176);
          if ( v62 )
          {
            GreDeleteFastMutex(v62, v39, v41, j);
            *(_QWORD *)(DeviceFromName + 176) = 0LL;
          }
          v63 = *(char **)(DeviceFromName + 192);
          if ( v63 )
          {
            GreDeleteFastMutex(v63, v39, v41, j);
            *(_QWORD *)(DeviceFromName + 192) = 0LL;
          }
          *(_DWORD *)(DeviceFromName + 188) = 0;
        }
        goto LABEL_105;
      }
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 11181;
      PreferredMode = -1073741823;
      break;
  }
  WdLogSingleEntry1(5LL, PreferredMode);
  WdLogGlobalForLineNumber = 11307;
  return (unsigned int)PreferredMode;
}
