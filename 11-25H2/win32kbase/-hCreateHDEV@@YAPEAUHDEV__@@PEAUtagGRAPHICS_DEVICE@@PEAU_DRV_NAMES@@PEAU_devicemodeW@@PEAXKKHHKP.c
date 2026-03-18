/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004507C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140074F40 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400864A4 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088EB8 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1400912D0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400939A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C3120 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ldevLoadInternal @ 0x140101720 (ldevLoadInternal.c)
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x140101E40 (ldevUnloadImage.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012DECC (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140134208 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x140142714 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x140146B8C (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014711C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x14014A194 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014D960 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14015CBF0 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401C9158 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C919C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     memmove @ 0x140243540 (memmove.c)
 *     memcmp @ 0x140243810 (memcmp.c)
 */

HDEV __fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct tagGRAPHICS_DEVICE *v11; // r15
  __int64 v12; // rcx
  HDEV v13; // rbx
  BOOL v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r15
  PDEV *v18; // rcx
  PDEV *v19; // rsi
  struct tagGRAPHICS_DEVICE *v20; // rcx
  HDEV v21; // r15
  HDEV v22; // r13
  const struct _devicemodeW *v23; // rdx
  int v24; // ecx
  int v25; // eax
  struct _MDEV *v26; // rcx
  HDEV result; // rax
  __int64 v28; // rsi
  struct _DRV_NAMES *v29; // rdx
  unsigned int v30; // ebx
  char *v31; // r13
  struct _LDEV *Driver; // rax
  char *v33; // r15
  HDEV v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  void *v39; // rcx
  HDEV v40; // [rsp+68h] [rbp-51h] BYREF
  __int64 v41; // [rsp+70h] [rbp-49h] BYREF
  PDEV *v42; // [rsp+78h] [rbp-41h] BYREF
  HDEV v43; // [rsp+80h] [rbp-39h] BYREF
  __int64 v44[14]; // [rsp+88h] [rbp-31h] BYREF

  v11 = a1;
  WdLogSingleEntry5(4LL, a1, a4, a5, a6, a9);
  WdLogGlobalForLineNumber = 20641;
  v13 = 0LL;
  v14 = 0;
  v16 = *(_QWORD *)(W32GetSessionState(v12) + 88);
  *a10 = 0LL;
  if ( v11 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_55;
  if ( !a3 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 20673;
    return 0LL;
  }
  v17 = *(_QWORD *)(W32GetSessionState(v15) + 88);
  GreAcquireSemaphore<19,>((struct _ERESOURCE **)v17);
  v18 = *(PDEV **)(v17 + 3848);
  v19 = 0LL;
  while ( v18 )
  {
    if ( (*((_DWORD *)v18 + 10) & 1) != 0 )
    {
      v19 = v18;
      PDEV::IncrementClientReferenceCount(v18);
      break;
    }
    v18 = *(PDEV **)v18;
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)v17);
  if ( !v19 )
    goto LABEL_48;
  do
  {
    v20 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v19 + 321);
    v42 = v19;
    if ( (((unsigned __int64)v20 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || a1 != v20 )
      goto LABEL_39;
    GreAcquireSemaphore<1,>((__int64 *)v16);
    GreAcquireSemaphore<8,PDEVOBJ>((__int64)v19);
    v21 = 0LL;
    v22 = 0LL;
    if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v42) )
      v24 = DevmodeEqualEx(a3, v23);
    else
      v24 = memcmp(a3, v23, 0xDCuLL) == 0;
    v25 = *((_DWORD *)v19 + 10);
    if ( (v25 & 0x80000) != 0
      || *((void **)v19 + 320) != a4
      || *((_DWORD *)v19 + 650) != a5
      || *((_DWORD *)v19 + 651) != a6
      || !v24
      || a8 )
    {
      if ( a7 == 1 )
        v14 = 1;
      else
        v21 = (HDEV)v19;
      goto LABEL_30;
    }
    if ( !v13 )
      goto LABEL_25;
    if ( (v25 & 0x400) == 0 )
    {
      v21 = v13;
LABEL_25:
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v42);
      v13 = (HDEV)v19;
    }
    v22 = v21;
LABEL_30:
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *((_QWORD *)v19 + 6));
    if ( v21 )
    {
      if ( *(_DWORD *)(v16 + 1064) )
      {
        v26 = *(struct _MDEV **)(v16 + 1072);
        *(_DWORD *)(v16 + 1064) = 0;
        v14 = DrvDisableMDEVChildren(v26, 0, 0) == 0;
      }
      if ( ((_DWORD)v21[10] & 0x400) == 0 )
      {
        if ( (unsigned int)DrvDisableDisplay(v21, 0) )
          *a10 = v21;
        else
          v14 = 1;
      }
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v16);
    if ( v22 )
    {
      v43 = v22;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v43);
    }
LABEL_39:
    v19 = hdevEnumerate<1>(v19);
  }
  while ( v19 );
  if ( v14 )
  {
    if ( v13 )
    {
      a10 = (HDEV *)v13;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&a10);
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 20892;
    return 0LL;
  }
  if ( v13 )
  {
    GreAcquireSemaphore<19,>((struct _ERESOURCE **)v16);
    *((_QWORD *)v13 + 4) = 0LL;
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v16);
    GreAcquireSemaphore<1,>((__int64 *)v16);
    GreAcquireSemaphore<4,PDEVOBJ>((__int64)v13);
    GreAcquireSemaphore<6,>((struct _ERESOURCE **)v16);
    GreAcquireSemaphore<8,PDEVOBJ>((__int64)v13);
    GreAcquireSemaphore<10,>((struct _ERESOURCE **)v16);
    GreAcquireSemaphore<19,>((struct _ERESOURCE **)v16);
    ++*((_DWORD *)v13 + 3);
    if ( ((_DWORD)v13[10] & 0x400) != 0 )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)v16);
      DrvEnableDisplay(v13);
      GreAcquireSemaphore<19,>((struct _ERESOURCE **)v16);
    }
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v16);
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *((_QWORD *)v13 + 6));
    GreReleaseSemaphoreExclusive<10,>((struct _ERESOURCE **)v16);
    GreReleaseSemaphoreExclusive<6,>((struct _ERESOURCE **)v16);
    GreReleaseSemaphoreExclusive<4,PDEVOBJ>((__int64)v13);
    GreReleaseSemaphoreShared<1,>((__int64 *)v16);
    WdLogSingleEntry1(5LL, v13);
    result = v13;
    WdLogGlobalForLineNumber = 20978;
    return result;
  }
LABEL_48:
  if ( *(_DWORD *)(v16 + 1064) )
  {
    *(_DWORD *)(v16 + 1064) = 0;
    SEMOBJ<1>::SEMOBJ<1>(&v41, (_QWORD *)v16);
    if ( !(unsigned int)DrvDisableMDEVChildren(*(struct _MDEV **)(v16 + 1072), 0, 0) )
    {
      if ( v41 )
      {
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v41);
        v41 = 0LL;
      }
      goto LABEL_72;
    }
    v14 = 0;
    if ( v41 )
    {
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v41);
      v41 = 0LL;
    }
  }
  v11 = a1;
LABEL_55:
  v28 = PALLOCMEM(2128LL, 1886221383LL);
  if ( !v28 )
    goto LABEL_72;
  v29 = a2;
  v30 = 0;
  if ( !*(_DWORD *)a2 )
    goto LABEL_71;
  while ( 2 )
  {
    if ( a9 == 1 )
    {
      v31 = (char *)v29 + 16 * v30;
      Driver = ldevLoadDriver(*((PCWSTR *)v31 + 2), 1, (*((_DWORD *)v11 + 40) & 0x4000000 | 0x2000000u) >> 25);
    }
    else
    {
      if ( a9 != 2 )
      {
        if ( a9 == 4 )
          Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck();
LABEL_64:
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 21074;
LABEL_69:
        v11 = a1;
LABEL_70:
        v29 = a2;
        if ( ++v30 >= *(_DWORD *)a2 )
          goto LABEL_71;
        continue;
      }
      v31 = (char *)v29 + 16 * v30;
      Driver = (struct _LDEV *)ldevLoadInternal(
                                 *((unsigned int (__fastcall **)(__int64, __int64, tagDRVENABLEDATA *))v31 + 2),
                                 3);
    }
    break;
  }
  v33 = (char *)Driver;
  if ( !Driver )
    goto LABEL_64;
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v40,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v31 + 2),
    *((void **)v31 + 1),
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v40 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 21094;
    ldevUnloadImage(v33);
    goto LABEL_69;
  }
  v11 = a1;
  *((_QWORD *)v40 + 321) = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v40, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v40);
    goto LABEL_70;
  }
  v34 = v40;
  *((_QWORD *)v40 + 199) = 0LL;
  *((_QWORD *)v34 + 196) = 0LL;
  *((_DWORD *)v34 + 394) = 0;
  v35 = HmgShareLockCheck(*(_QWORD *)(v16 + 56), 16);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v44, v35);
  *(_QWORD *)(v28 + 976) = v28 + 544;
  *(_DWORD *)(v28 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v28 + 976) + 176LL) = 0xFFFFFF;
  v36 = *(_QWORD *)(v28 + 976);
  *(_DWORD *)(v28 + 120) = 0;
  *(_QWORD *)(v36 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (unsigned int *)v40 + 390,
    v28,
    v44[0],
    *(_QWORD *)(v16 + 3768),
    *(_QWORD *)(*((_QWORD *)v40 + 318) + 128LL),
    *((_QWORD *)v40 + 318),
    1u);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v44);
  v37 = *(_QWORD *)(v16 + 4264);
  if ( !*(_QWORD *)(v37 + 48) )
    *(_QWORD *)(v37 + 48) = v40;
  *((_QWORD *)v40 + 321) = a1;
  *((_QWORD *)v40 + 320) = a4;
  if ( a9 != 2 )
  {
    v38 = PALLOCNOZ(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL);
    *((_QWORD *)v40 + 323) = v38;
    v39 = (void *)*((_QWORD *)v40 + 323);
    if ( v39 )
    {
      memmove(v39, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v40 + 323) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1LL);
    }
    else
    {
      v14 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v40, 0);
  if ( ((_DWORD)v40[10] & 0x20000) == 0 && (*(_DWORD *)(*((_QWORD *)v40 + 321) + 160LL) & 0x800000) != 0 )
    *((_DWORD *)v40 + 11) |= 4u;
  if ( v14 )
  {
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v40);
LABEL_71:
    GreDeleteFastMutex((char *)v28);
LABEL_72:
    if ( *a10 )
      DrvEnableDisplay(*a10);
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 21255;
    return 0LL;
  }
  else
  {
    GreDeleteFastMutex((char *)v28);
    WdLogSingleEntry1(5LL, v40);
    result = v40;
    WdLogGlobalForLineNumber = 21223;
  }
  return result;
}
