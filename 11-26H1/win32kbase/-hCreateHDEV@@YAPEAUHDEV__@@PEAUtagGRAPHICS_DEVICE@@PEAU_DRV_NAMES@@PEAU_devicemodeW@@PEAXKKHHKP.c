/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x14000D750 (ldevUnloadImage.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AA0C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7164 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7268 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1400C7400 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77A8 (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C7918 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140185B40 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140189204 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401896B8 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ldevLoadInternal @ 0x140190A00 (ldevLoadInternal.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
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
  struct _devicemodeW *v10; // r12
  struct _DRV_NAMES *v11; // rsi
  struct tagGRAPHICS_DEVICE *v12; // r13
  __int64 v13; // rcx
  HDEV v14; // rdi
  unsigned int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  struct _ERESOURCE *v24; // rsi
  unsigned __int16 *v25; // r14
  struct tagGRAPHICS_DEVICE *v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // r8d
  HDEV v32; // r13
  __int64 v33; // r12
  _WORD *Address; // r15
  __int64 v35; // rax
  int v36; // eax
  BOOL v37; // ecx
  int ExclusiveWaiters; // eax
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // r8d
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  int v47; // r8d
  int v48; // edx
  int v49; // r8d
  int v50; // edx
  int v51; // r8d
  int v52; // r8d
  __int64 v53; // rdx
  int v54; // r8d
  __int64 v55; // rdx
  int v56; // r8d
  __int64 v57; // rdx
  int v58; // r8d
  __int64 v59; // rdx
  int v60; // r8d
  HDEV result; // rax
  int v62; // esi
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // eax
  __int64 *v67; // rsi
  struct tagGRAPHICS_DEVICE *v68; // r13
  HDEV v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  struct HOBJ__ **v72; // rsi
  __int64 v73; // rcx
  bool v74; // zf
  void *v75; // rcx
  void *v76; // rcx
  int v77; // eax
  int v78; // eax
  struct _MDEV *v79; // rcx
  int v80; // edx
  int v81; // r8d
  char *v82; // r13
  struct _LDEV *Driver; // rax
  __int64 SessionState; // rax
  int v85; // [rsp+68h] [rbp-41h]
  HDEV v86; // [rsp+70h] [rbp-39h] BYREF
  __int64 v87; // [rsp+78h] [rbp-31h] BYREF
  struct BRUSH *v88; // [rsp+80h] [rbp-29h] BYREF
  _OWORD v89[6]; // [rsp+88h] [rbp-21h] BYREF
  struct tagGRAPHICS_DEVICE *v90; // [rsp+F8h] [rbp+4Fh] BYREF
  struct _DRV_NAMES *v91; // [rsp+100h] [rbp+57h]
  void *Buf1; // [rsp+108h] [rbp+5Fh]
  void *v93; // [rsp+110h] [rbp+67h]

  v93 = a4;
  Buf1 = a3;
  v91 = a2;
  v90 = a1;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  WdLogSingleEntry5(4LL, a1, a4, a5, a6, a9);
  WdLogGlobalForLineNumber = 622;
  v85 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = *(_QWORD *)(W32GetSessionState(v13) + 88);
  *a10 = 0LL;
  if ( v12 == (struct tagGRAPHICS_DEVICE *)-4LL )
  {
LABEL_2:
    v20 = PALLOCMEM(2176LL, 1886221383LL, v17, v18);
    if ( !v20 )
      goto LABEL_93;
    while ( 1 )
    {
      if ( v15 >= *(_DWORD *)v11 )
      {
LABEL_92:
        GreDeleteFastMutex((char *)v20, v19, v21, v22);
        goto LABEL_93;
      }
      if ( a9 == 1 )
      {
        v82 = (char *)v11 + 16 * v15;
        Driver = ldevLoadDriver(*((PCWSTR *)v82 + 2), 1, (*((_DWORD *)v90 + 40) & 0x4000000 | 0x2000000u) >> 25);
      }
      else
      {
        if ( a9 != 2 )
        {
          if ( a9 == 4 )
          {
            v87 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
            if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
            {
              LODWORD(v87) = Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
                Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1,
                3u,
                1LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v87,
                3LL,
                &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
            }
          }
LABEL_7:
          WdLogSingleEntry0(5LL);
          WdLogGlobalForLineNumber = 1055;
          goto LABEL_53;
        }
        v82 = (char *)v11 + 16 * v15;
        Driver = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v82 + 2), 3LL);
      }
      v67 = (__int64 *)Driver;
      if ( !Driver )
        goto LABEL_7;
      PDEVOBJ::PDEVOBJ(
        (PDEVOBJ *)&v86,
        Driver,
        v10,
        0LL,
        0LL,
        *((const unsigned __int16 **)v82 + 2),
        *((void **)v82 + 1),
        0LL,
        0LL,
        0,
        a5,
        a6);
      if ( v86 )
      {
        v68 = v90;
        *((_QWORD *)v86 + 321) = v90;
        if ( (unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v86, 0LL) )
        {
          v69 = v86;
          *((_QWORD *)v86 + 199) = 0LL;
          *((_QWORD *)v69 + 196) = 0LL;
          *((_DWORD *)v69 + 394) = 0;
          v88 = (struct BRUSH *)HmgShareLock(v16, *(_QWORD *)(v16 + 144), 16, 0);
          memset(v89, 0, 32);
          PushThreadGuardedObject(
            v89,
            (__int64)&v88,
            (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<BRUSH>>::OnUnexpectedThreadTerminationStatic);
          *(_QWORD *)(v20 + 976) = v20 + 544;
          *(_DWORD *)(v20 + 728) = 0;
          *(_DWORD *)(v20 + 720) = 0xFFFFFF;
          v70 = *(_QWORD *)(v20 + 976);
          *(_DWORD *)(v20 + 120) = 0;
          *(_QWORD *)(v70 + 248) = 0LL;
          EBRUSHOBJ::vInitBrush(
            (unsigned int *)v86 + 390,
            v20,
            (__int64)v88,
            *(_QWORD *)(v16 + 3872),
            *(_QWORD *)(*((_QWORD *)v86 + 318) + 128LL),
            *((_QWORD *)v86 + 318),
            1u);
          v72 = (struct HOBJ__ **)v88;
          if ( v88 )
          {
            SessionState = W32GetSessionState(v71);
            DEC_SHARE_REF_CNT_LAZY0(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v72);
            v88 = 0LL;
          }
          PopThreadGuardedObject(v89);
          v73 = *(_QWORD *)(v16 + 4376);
          if ( !*(_QWORD *)(v73 + 48) )
            *(_QWORD *)(v73 + 48) = v86;
          v74 = a9 == 2;
          v75 = v93;
          *((_QWORD *)v86 + 321) = v68;
          *((_QWORD *)v86 + 320) = v75;
          if ( !v74 )
          {
            *((_QWORD *)v86 + 323) = PALLOCNOZ(v10->dmSize + (unsigned int)v10->dmDriverExtra, 0x76656447u);
            v76 = (void *)*((_QWORD *)v86 + 323);
            if ( !v76 )
            {
              v62 = 1;
LABEL_43:
              PDEVOBJ::bDisabled((PDEVOBJ *)&v86, 0);
              if ( ((_DWORD)v86[10] & 0x20000) == 0 && (*(_DWORD *)(*((_QWORD *)v86 + 321) + 160LL) & 0x800000) != 0 )
                *((_DWORD *)v86 + 11) |= 4u;
              if ( !v62 )
              {
                GreDeleteFastMutex((char *)v20, v63, v64, v65);
                WdLogSingleEntry1(5LL, v86);
                result = v86;
                WdLogGlobalForLineNumber = 1206;
                return result;
              }
              PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v86, (struct Gre::Base::SESSION_GLOBALS *)v16);
              goto LABEL_92;
            }
            memmove(v76, v10, v10->dmSize + (unsigned __int64)v10->dmDriverExtra);
            *(_DWORD *)(*((_QWORD *)v86 + 323) + 72LL) |= 0x20u;
            DrvUpdateAttachFlag(v68, 1u);
          }
          v62 = v85;
          goto LABEL_43;
        }
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v86, (struct Gre::Base::SESSION_GLOBALS *)v16);
      }
      else
      {
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 1075;
        ldevUnloadImage(v67);
      }
LABEL_53:
      v11 = v91;
      ++v15;
    }
  }
  if ( !v10 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 654;
    return 0LL;
  }
  v24 = hdevEnumerate<1>(0LL);
  if ( !v24 )
    goto LABEL_80;
  v25 = (unsigned __int16 *)Buf1;
  do
  {
    v26 = *(struct tagGRAPHICS_DEVICE **)&v24[24].NumberOfSharedWaiters;
    v87 = (__int64)v24;
    if ( !v26 || v26 == (struct tagGRAPHICS_DEVICE *)-4LL || v12 != v26 )
      goto LABEL_33;
    GreAcquireSemaphore<1,>((__int64 *)v16, v23, v17);
    GreAcquireSemaphore<8,PDEVOBJ>((__int64)v24, v27, v28);
    v30 = *(_QWORD *)&v24[24].NumberOfSharedWaiters;
    v31 = 0;
    v32 = 0LL;
    v33 = 0LL;
    if ( v30 && v30 != -4 && (*(_DWORD *)(v30 + 160) & 0x800000) != 0 )
    {
      Address = v24[24].Address;
      v35 = v25[35];
      if ( (_WORD)v35 == Address[35] )
      {
        v36 = memcmp(v25, v24[24].Address, v35 + 220);
        v31 = 0;
        v37 = v36 == 0;
      }
      else if ( (_WORD)v35
             || (v77 = memcmp(v25, v24[24].Address, 0x46uLL), v31 = 0, v77)
             || (v78 = memcmp(v25 + 36, Address + 36, 0x94uLL), v31 = 0, v37 = 1, v78) )
      {
        v37 = 0;
      }
      v15 = v85;
    }
    else
    {
      v66 = memcmp(v25, v24[24].Address, 0xDCuLL);
      v31 = 0;
      v37 = v66 == 0;
    }
    ExclusiveWaiters = (int)v24->ExclusiveWaiters;
    if ( (ExclusiveWaiters & 0x80000) != 0
      || (v29 = (__int64)v93, *(void **)&v24[24].ActiveEntries != v93)
      || (v29 = a5, LODWORD(v24[25].SystemResourcesList.Flink) != a5)
      || (v29 = a6, HIDWORD(v24[25].SystemResourcesList.Flink) != a6)
      || !v37
      || a8 )
    {
      if ( a7 == 1 )
      {
        v15 = 1;
        v85 = 1;
      }
      else
      {
        v32 = (HDEV)v24;
      }
      goto LABEL_29;
    }
    if ( v14 )
    {
      if ( (ExclusiveWaiters & 0x400) != 0 )
        goto LABEL_28;
      v32 = v14;
    }
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v87, (struct Gre::Base::SESSION_GLOBALS *)v16);
    v14 = (HDEV)v24;
LABEL_28:
    v33 = (__int64)v32;
LABEL_29:
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v24, v29, v31);
    if ( v32 )
    {
      if ( *(_DWORD *)(v16 + 1152) )
      {
        v79 = *(struct _MDEV **)(v16 + 1160);
        *(_DWORD *)(v16 + 1152) = 0;
        v15 = DrvDisableMDEVChildren(v79, 0, 0) == 0;
        v85 = v15;
      }
      v74 = ((_DWORD)v32[10] & 0x400) == 0;
      v87 = (__int64)v32;
      if ( v74 )
      {
        if ( (unsigned int)DrvDisableDisplay((struct PDEVOBJ *)&v87, 0) )
        {
          *a10 = v32;
        }
        else
        {
          v15 = 1;
          v85 = 1;
        }
      }
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v16, v39, v40);
    if ( v33 )
    {
      v87 = v33;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v87, (struct Gre::Base::SESSION_GLOBALS *)v16);
    }
    v12 = v90;
LABEL_33:
    v24 = hdevEnumerate<1>((__int64)v24);
  }
  while ( v24 );
  if ( v15 )
  {
    if ( v14 )
    {
      v90 = (struct tagGRAPHICS_DEVICE *)v14;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v90, (struct Gre::Base::SESSION_GLOBALS *)v16);
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 873;
    return 0LL;
  }
  v15 = 0;
  if ( !v14 )
  {
    v10 = (struct _devicemodeW *)Buf1;
LABEL_80:
    if ( *(_DWORD *)(v16 + 1152) )
    {
      *(_DWORD *)(v16 + 1152) = 0;
      SEMOBJ<1>::SEMOBJ<1>(&v87, (_QWORD *)v16);
      if ( !(unsigned int)DrvDisableMDEVChildren(*(struct _MDEV **)(v16 + 1160), 0, 0) )
      {
        if ( v87 )
          GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            v87,
            v17);
LABEL_93:
        v90 = (struct tagGRAPHICS_DEVICE *)*a10;
        if ( v90 )
          DrvEnableDisplay((struct PDEVOBJ *)&v90);
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 1239;
        return 0LL;
      }
      v85 = 0;
      if ( v87 )
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v87,
          v17);
    }
    v11 = v91;
    goto LABEL_2;
  }
  v90 = (struct tagGRAPHICS_DEVICE *)v14;
  GreAcquireSemaphore<19,>((struct _ERESOURCE **)v16, v23, v17);
  *((_QWORD *)v14 + 4) = 0LL;
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)v16,
    v41);
  GreAcquireSemaphore<1,>((__int64 *)v16, v42, v43);
  GreAcquireSemaphore<4,PDEVOBJ>((__int64)v14, v44, v45);
  GreAcquireSemaphore<6,>((struct _ERESOURCE **)v16, v46, v47);
  GreAcquireSemaphore<8,PDEVOBJ>((__int64)v14, v48, v49);
  GreAcquireSemaphore<10,>(v16);
  GreAcquireSemaphore<19,>((struct _ERESOURCE **)v16, v50, v51);
  ++*((_DWORD *)v14 + 3);
  if ( ((_DWORD)v14[10] & 0x400) != 0 )
  {
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v16,
      v52);
    DrvEnableDisplay((struct PDEVOBJ *)&v90);
    GreAcquireSemaphore<19,>((struct _ERESOURCE **)v16, v80, v81);
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)v16,
    v52);
  GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v14, v53, v54);
  GreReleaseSemaphoreExclusive<10,>(v16);
  GreReleaseSemaphoreExclusive<6,>((struct _ERESOURCE **)v16, v55, v56);
  GreReleaseSemaphoreExclusive<4,PDEVOBJ>((__int64)v14, v57, v58);
  GreReleaseSemaphoreShared<1,>((__int64 *)v16, v59, v60);
  WdLogSingleEntry1(5LL, v14);
  result = v14;
  WdLogGlobalForLineNumber = 959;
  return result;
}
