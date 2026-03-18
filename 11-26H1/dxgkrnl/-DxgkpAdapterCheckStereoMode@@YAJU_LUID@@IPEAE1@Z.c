/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x140070784 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1401A4B38 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0298 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z @ 0x140400F9C (-IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x140431B2C (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  DWORD LowPart; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // r15
  __int64 HighPart; // rdi
  signed int CachedStereoStates; // ebx
  struct DXGADAPTER **v13; // rax
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  bool v21; // di
  const struct _DXGK_DISPLAYMODE_INFO *v22; // r10
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  unsigned int v24; // r9d
  __int64 v25; // r8
  int v26; // eax
  _BYTE v28[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v29[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct DXGADAPTER *v30; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID v32; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v33; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v34[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v35[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v36[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+C0h] [rbp-40h]
  _BYTE v39[88]; // [rsp+D0h] [rbp-30h] BYREF
  DXGADAPTER *v40; // [rsp+128h] [rbp+28h]

  v4 = 0LL;
  v5 = a2;
  v32 = a1;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9755;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAnyStereoExists && pCurModeSupportsStereo",
      9755LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v10 = Current;
  *a4 = 0;
  if ( !Current )
  {
    CachedStereoStates = -1073741811;
    WdLogSingleEntry4(2LL, 0LL, a3, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 9763;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Exception encountered validating process or input. pProcess=0x%I64x, pAnyStereoExists=0x%I64x, pCurModeSu"
                "pportsStereo=0x%I64x. Returning 0x%I64x",
      0LL,
      (__int64)a3,
      (__int64)a4,
      -1073741811LL,
      0LL);
    return (unsigned int)CachedStereoStates;
  }
  v34[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v34, &v32) )
  {
    v30 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v30);
    v14 = v34[0];
    if ( (int)DxgkpGetPairingAdapters(v34[0], v5, 0LL, 0LL, v13, &v31, 0) < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
      v17[3] = v14 != 0LL;
      v17[4] = v5;
      v17[5] = 0LL;
      WdLogGlobalForLineNumber = 9780;
LABEL_9:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v30, 0LL);
      CachedStereoStates = 0;
      goto LABEL_68;
    }
    if ( !v30 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9783;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter.Get() != NULL", 9783LL, 0LL, 0LL, 0LL, 0LL);
    }
    v28[0] = 0;
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v28, 0);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9793;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_70:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v28);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v30, 0LL);
      CachedStereoStates = v19;
      goto LABEL_68;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35, v30, 1);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v30, 0LL);
    if ( *((_DWORD *)v30 + 50) != 1 )
    {
      LODWORD(v19) = -1073741130;
      LOBYTE(v4) = v30 != 0LL;
      WdLogSingleEntry4(7LL, v10, v14, v4, -1073741130LL);
      WdLogGlobalForLineNumber = 9816;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      goto LABEL_70;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v30 + 395), v5) )
    {
      CachedStereoStates = -1071774238;
      LOBYTE(v4) = v30 != 0LL;
      WdLogSingleEntry3(7LL, v4, v5, -1071774238LL);
      WdLogGlobalForLineNumber = 9825;
      goto LABEL_67;
    }
    if ( ADAPTER_DISPLAY::IsStereoModeDisabledOnVidPnSource(*((ADAPTER_DISPLAY **)v30 + 395), v5) )
    {
      *a3 = 0;
      *a4 = 0;
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v28);
      goto LABEL_9;
    }
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v30 + 395), v5);
    if ( DisplayModeInfo && (*((_DWORD *)DisplayModeInfo + 10) & 0x10) != 0 )
    {
      *a3 = 1;
      *a4 = 1;
      goto LABEL_19;
    }
    v21 = 0;
    *(_WORD *)v29 = 0;
    v33.pModeList = 0LL;
    v33.ModeCount = 0;
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      v33.pModeList = (D3DKMT_DISPLAYMODE *)(4024 * v5 + 1128 + *(_QWORD *)(*((_QWORD *)v30 + 395) + 128LL));
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)&v33);
    }
    CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(*((ADAPTER_DISPLAY **)v30 + 395), v5, v29, &v29[1]);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v33);
    if ( CachedStereoStates != -1073741275 )
    {
LABEL_49:
      if ( CachedStereoStates >= 0 )
      {
        if ( v21 )
        {
          v33.pModeList = 0LL;
          v33.ModeCount = 0;
          if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(v40) )
            {
              CachedStereoStates = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
              if ( CachedStereoStates < 0 )
              {
                WdLogSingleEntry1(7LL);
                WdLogGlobalForLineNumber = 9981;
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v33);
                goto LABEL_67;
              }
            }
            v33.pModeList = (D3DKMT_DISPLAYMODE *)(4024 * v5 + 1128 + *(_QWORD *)(*((_QWORD *)v30 + 395) + 128LL));
            DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)&v33);
          }
          else if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v40) )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(v40) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v39);
            if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v39, 1LL) < 0 )
            {
              WdLogSingleEntry1(7LL);
              WdLogGlobalForLineNumber = 10003;
            }
          }
          LOWORD(v32.LowPart) = 0;
          v26 = ADAPTER_DISPLAY::GetCachedStereoStates(
                  *((ADAPTER_DISPLAY **)v30 + 395),
                  v5,
                  (unsigned __int8 *)&v32,
                  (unsigned __int8 *)&v32 + 1);
          CachedStereoStates = v26;
          if ( v26 < 0 )
          {
            if ( v26 == -1073741275 )
              CachedStereoStates = ADAPTER_DISPLAY::SetCachedStereoStates(
                                     *((_QWORD *)v30 + 395),
                                     v5,
                                     v29[1] != 0,
                                     v29[0] != 0);
          }
          else
          {
            *(_WORD *)v29 = v32.LowPart;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v33);
          if ( CachedStereoStates < 0 )
            goto LABEL_67;
        }
        *a3 = v29[0];
        *a4 = v29[1];
      }
LABEL_67:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v28);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v30, 0LL);
      goto LABEL_68;
    }
    v32.LowPart = -1;
    CachedStereoStates = DmmEnumClientVidPnPathTargetsFromSource(v30, v5, 0LL, (unsigned int *const)&v32);
    if ( CachedStereoStates < 0 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 9921;
    }
    else
    {
      *(_QWORD *)&v33.hAdapter = 0LL;
      LODWORD(v33.pModeList) = 0;
      CachedStereoStates = MonitorGetLinkInfoFromTarget(v30, v32.LowPart, (struct _DXGK_MONITORLINKINFO *)&v33);
      if ( CachedStereoStates < 0 )
      {
        if ( CachedStereoStates == -1073741275 )
        {
LABEL_35:
          v37 = 0LL;
          v38 = 0;
          memset(&v33, 0, sizeof(v33));
          v33.VidPnSourceId = v5;
          LOBYTE(v32.LowPart) = 0;
          CachedStereoStates = DxgkpGetDisplayModeList(
                                 v30,
                                 (struct COREADAPTERACCESS *)v39,
                                 (struct DXGAUTOPUSHLOCK *)v36,
                                 0,
                                 &v33,
                                 0LL,
                                 (unsigned __int8 *)&v32);
          if ( CachedStereoStates < 0 )
          {
            pModeList = v33.pModeList;
          }
          else
          {
            v22 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v30 + 395), v33.VidPnSourceId);
            pModeList = v33.pModeList;
            v24 = 0;
            if ( v33.ModeCount )
            {
              while ( 1 )
              {
                v25 = v24;
                if ( (*((_DWORD *)&v33.pModeList[v25].Flags + 1) & 0x10) != 0 )
                {
                  v29[1] = 1;
                  if ( v33.pModeList[v25].Width == *(_DWORD *)v22
                    && v33.pModeList[v25].Height == *((_DWORD *)v22 + 1)
                    && v33.pModeList[v25].Format == *((_DWORD *)v22 + 2) )
                  {
                    break;
                  }
                }
                if ( ++v24 >= v33.ModeCount )
                  goto LABEL_44;
              }
              v29[0] = 1;
            }
LABEL_44:
            v21 = 1;
          }
          if ( LOBYTE(v32.LowPart) )
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(pModeList);
            v33.pModeList = 0LL;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
          goto LABEL_49;
        }
        WdLogSingleEntry1(7LL);
        WdLogGlobalForLineNumber = 9907;
      }
      else
      {
        if ( (v33.VidPnSourceId & 1) == 0 )
          *(_WORD *)v29 = 0;
        CachedStereoStates = (v33.VidPnSourceId & 1) != 0 ? 0xC0000225 : 0;
        v21 = !(v33.VidPnSourceId & 1);
      }
    }
    if ( CachedStereoStates != -1073741275 )
      goto LABEL_49;
    goto LABEL_35;
  }
  HighPart = v32.HighPart;
  WdLogSingleEntry2(2LL, v32.HighPart, LowPart);
  WdLogGlobalForLineNumber = 9770;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkpAdapterCheckStereoMode function.",
    HighPart,
    LowPart,
    0LL,
    0LL,
    0LL);
  CachedStereoStates = -1073741811;
LABEL_68:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v34, 0LL);
  return (unsigned int)CachedStereoStates;
}
