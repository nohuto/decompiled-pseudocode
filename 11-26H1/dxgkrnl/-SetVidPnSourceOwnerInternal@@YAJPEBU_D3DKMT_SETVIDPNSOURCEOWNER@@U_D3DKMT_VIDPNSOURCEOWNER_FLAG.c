/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x140435750 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140038EE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140038F30 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003CE00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003D3C0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1400421EC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004B4C4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x140075B08 (Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x140075C2C (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x14018EE28 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401A3BC0 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HasContextWithAnyHintType@DXGDEVICE@@QEAAEPEBW4_D3DKMT_CLIENTHINT@@I@Z @ 0x1401C309C (-HasContextWithAnyHintType@DXGDEVICE@@QEAAEPEBW4_D3DKMT_CLIENTHINT@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShutdownBootGraphics @ 0x14030C080 (DxgkShutdownBootGraphics.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039D288 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D388 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1403A9C48 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1403DC9E0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403EC920 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1403EEBD4 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403F3714 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x140411924 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14042B790 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x14042F984 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140430DD8 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        struct _D3DKMT_SETVIDPNSOURCEOWNER *Src,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void **a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct DXGPROCESS *Current; // r14
  unsigned int v8; // ebx
  DXGDEVICE *v10; // rsi
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  DISPLAY_SOURCE *v19; // rcx
  int v20; // r12d
  char v21; // al
  __int64 v22; // r9
  DXGDEVICE *v23; // rdi
  __int64 v24; // rax
  DXGDEVICE *v25; // r14
  unsigned int v26; // r13d
  char v27; // cl
  struct DXGPROCESS *v28; // r15
  int v29; // edx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // r13
  unsigned __int8 v31; // bl
  int v32; // edx
  __int64 v33; // r14
  enum _D3DKMT_CLIENTHINT i; // ebx
  char v35; // r8
  enum _D3DKMT_CLIENTHINT *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int8 HasContextWithAnyHintType; // al
  unsigned int v40; // edx
  char v41; // [rsp+50h] [rbp-458h] BYREF
  unsigned __int8 v42; // [rsp+51h] [rbp-457h] BYREF
  unsigned __int8 v43[6]; // [rsp+52h] [rbp-456h] BYREF
  DXGDEVICE *v44; // [rsp+58h] [rbp-450h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v45; // [rsp+60h] [rbp-448h]
  void *Srca[2]; // [rsp+68h] [rbp-440h] BYREF
  void *v47[2]; // [rsp+78h] [rbp-430h]
  struct DXGPROCESS *v48; // [rsp+88h] [rbp-420h]
  _BYTE v49[16]; // [rsp+90h] [rbp-418h] BYREF
  _BYTE v50[16]; // [rsp+A0h] [rbp-408h] BYREF
  char v51[8]; // [rsp+B0h] [rbp-3F8h] BYREF
  _BYTE v52[24]; // [rsp+B8h] [rbp-3F0h] BYREF
  _BYTE v53[160]; // [rsp+D0h] [rbp-3D8h] BYREF
  _BYTE v54[432]; // [rsp+170h] [rbp-338h] BYREF
  enum _D3DKMT_CLIENTHINT v55[16]; // [rsp+320h] [rbp-188h] BYREF
  enum _D3DKMT_CLIENTHINT v56[4]; // [rsp+360h] [rbp-148h] BYREF
  __m128i si128; // [rsp+370h] [rbp-138h]
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v58[16]; // [rsp+3A0h] [rbp-108h] BYREF
  void *v59[16]; // [rsp+3E0h] [rbp-C8h] BYREF

  v45 = a4;
  Current = DXGPROCESS::GetCurrent((__int64)Src);
  v48 = Current;
  if ( !Current )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3081;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v8;
  }
  *(_OWORD *)Srca = 0LL;
  *(_OWORD *)v47 = 0LL;
  memset(v59, 0, sizeof(v59));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49, Current);
  v55[0] = D3DKMT_CLIENTHINT_UNKNOWN;
  RtlCopyFromUser(Srca, Src, 0x20uLL);
  if ( LODWORD(v47[1]) )
  {
    if ( LODWORD(v47[1]) > 0x10 )
    {
      WdLogSingleEntry3(2LL, LODWORD(Srca[0]), LODWORD(v47[1]), -1073741811LL);
      WdLogGlobalForLineNumber = 3105;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: VidPnSourceCount (0x%I64x) is too large, returning 0x%I64x",
        LODWORD(Srca[0]),
        LODWORD(v47[1]),
        -1073741811LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
      return 3221225485LL;
    }
    if ( !Srca[1] || !v47[0] )
    {
      WdLogSingleEntry5(2LL, LODWORD(Srca[0]), LODWORD(v47[1]), Srca[1], v47[0], -1073741811LL);
      WdLogGlobalForLineNumber = 3117;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: (0x%I64x) must have both Type (0x%I64x) and VidPnSourceId (0x%I64x) array, returning 0x%I64x",
        LODWORD(Srca[0]),
        LODWORD(v47[1]),
        (__int64)Srca[1],
        (__int64)v47[0],
        -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
      return 3221225485LL;
    }
    RtlCopyFromUser(v58, Srca[1], 4LL * LODWORD(v47[1]));
    RtlCopyFromUser(v55, v47[0], 4LL * LODWORD(v47[1]));
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
      RtlCopyFromUser(v59, a3, 8LL * LODWORD(v47[1]));
  }
  v44 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v51,
    (unsigned int)Srca[0],
    (struct _KTHREAD **)Current,
    &v44);
  v10 = v44;
  if ( !v44 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Srca[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 3151;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Srca[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_51:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v51);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
    return v8;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v44);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v52, (struct _KTHREAD **)v10 + 18);
  v11 = *((_QWORD *)v10 + 237);
  if ( !v11 )
  {
    v8 = -1073741637;
    WdLogSingleEntry2(2LL, LODWORD(Srca[0]), -1073741637LL);
    WdLogGlobalForLineNumber = 3165;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkSetVidPnSourceOwner function is called on a render only device (0x%I64x), returning 0x%I64x.",
      LODWORD(Srca[0]),
      -1073741637LL,
      0LL,
      0LL,
      0LL);
LABEL_16:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v52);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    goto LABEL_51;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v54,
    *(struct ADAPTER_DISPLAY **)(v11 + 3160),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v54);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v41, 1);
  v15 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3186;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v54);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v52);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    v8 = v15;
    goto LABEL_51;
  }
  v16 = 0;
  if ( LODWORD(v47[1]) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v11 + 3160);
      v18 = (unsigned int)v55[v16];
      if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 96) )
        break;
      v19 = (DISPLAY_SOURCE *)(*(_QWORD *)(v17 + 128) + 4024 * v18);
      if ( v58[v16] )
      {
        if ( !v19 || !DISPLAY_SOURCE::CheckSessionOwnership(v19, v18, v13, v14) )
        {
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
          MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v54);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v52);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
          v8 = -1071774910;
          goto LABEL_51;
        }
        v20 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v11 + 412), v55[v16], v59[v16]);
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3227;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed DispMgr ownership check on VidPn source 0x%I64x",
            (unsigned int)v55[v16],
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_50;
        }
      }
      if ( ++v16 >= LODWORD(v47[1]) )
        goto LABEL_26;
    }
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, v18, v16, -1073741811LL);
    WdLogGlobalForLineNumber = 3208;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x at index 0x%I64x) is specified, returning 0x%I64x",
      (unsigned int)v55[v16],
      v16,
      -1073741811LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v54);
    goto LABEL_16;
  }
LABEL_26:
  v44 = 0LL;
  if ( (unsigned int)Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline() )
    v21 = BYTE1(*(_DWORD *)(v11 + 444)) & 1;
  else
    v21 = 0;
  if ( (int)DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v11 + 412), &v44, 0LL, 0LL, v21) < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3267;
  }
  v23 = v44;
  if ( v44 )
  {
    DxgkShutdownBootGraphics(v44, 0);
    if ( *((_BYTE *)v23 + 1952) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3277;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCddDevice->IsVsyncForced() == FALSE",
        3277LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v23 )
    {
      v24 = *((_QWORD *)v10 + 2);
      if ( *((_QWORD *)v23 + 2) != v24 )
        v23 = 0LL;
      if ( v23 )
      {
        if ( *((_QWORD *)v23 + 2) != v24 || *((_QWORD *)v23 + 237) != *((_QWORD *)v10 + 237) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3292;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || ((pCddDevice->GetRenderCore() == pDevice->GetRenderCore()) && (pCddDevice->"
                      "GetDisplayAdapter(VidPnSourceId[0]) == pDevice->GetDisplayAdapter(VidPnSourceId[0])))",
            3292LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v23 + 1953) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v10, 1, v22, 0);
  v20 = COREDEVICEACCESS::AcquireExclusive((__int64)v53, 2LL);
  if ( v20 < 0 )
  {
    if ( v23 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49);
      *((_BYTE *)v23 + 1953) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
LABEL_50:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v54);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v52);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    v8 = v20;
    goto LABEL_51;
  }
  if ( !*(_QWORD *)(v11 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3328;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      3328LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v25 = *(DXGDEVICE **)(v11 + 3160);
  v44 = v25;
  v26 = *((_DWORD *)v25 + 24);
  v27 = 0;
  if ( !LODWORD(v47[1]) || LODWORD(v47[1]) == 1 && v58[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v55[0] < v26 )
    v27 = 1;
  if ( v27 )
  {
    if ( (unsigned int)Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline() )
    {
      v33 = 0LL;
      if ( LODWORD(v47[1]) )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v11 + 3160), v10, v55[0])
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v11 + 3160), v55[0]) == 2 )
        {
          v56[0] = v55[0];
          LODWORD(v33) = 1;
        }
      }
      else
      {
        for ( i = D3DKMT_CLIENTHINT_UNKNOWN; i < v26; ++i )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v11 + 3160), v10, i)
            && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v11 + 3160), i) == 2 )
          {
            v56[v33] = i;
            v33 = (unsigned int)(v33 + 1);
          }
        }
      }
      v35 = 0;
      if ( (_DWORD)v33 )
      {
        v36 = v56;
        v37 = (unsigned int)v33;
        do
        {
          v38 = *(unsigned int *)v36;
          if ( *((_BYTE *)v10 + v38 + 1304) )
          {
            *((_BYTE *)v10 + v38 + 1304) = 0;
            v35 = 1;
          }
          ++v36;
          --v37;
        }
        while ( v37 );
      }
      *(__m128i *)v56 = _mm_load_si128((const __m128i *)&_xmm);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      if ( v35 )
      {
        HasContextWithAnyHintType = DXGDEVICE::HasContextWithAnyHintType((ADAPTER_RENDER **)v10, v56);
        v30 = v45;
        if ( !HasContextWithAnyHintType )
          ADAPTER_DISPLAY::OnPathFailedOrInvalidate(*(DXGADAPTER ***)(v11 + 3160), v45);
        v25 = v44;
        goto LABEL_117;
      }
      v25 = v44;
    }
    v30 = v45;
LABEL_117:
    if ( !LODWORD(v47[1])
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v25, v10) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v25, v10))
      || LODWORD(v47[1]) == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v25, v10, v55[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v25, v10, v55[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, v10, -1);
      if ( LODWORD(v47[1]) )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v25, v10, v55[0]);
        v40 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v25, v10);
        v40 = *((_DWORD *)v10 + 477);
      }
      DXGDEVICE::RemoveVidPnOwnership(v10, v40);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v10, 0);
    }
    v28 = v48;
    goto LABEL_78;
  }
  if ( g_OSTestSigningEnabled
    && (*(_DWORD *)(*((_QWORD *)v10 + 5) + 408LL) & 0x2000) != 0
    && v58[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
  {
    v58[0] = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
  }
  v28 = v48;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v48 + 11) + 224LL))()
    || (v58[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED || v58[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED)
    && !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v28 + 11) + 320LL))(0LL) )
  {
    v20 = -1073741790;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3432;
    goto LABEL_77;
  }
  MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, 0LL, -1);
  v20 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v25, v10, v58, (char *)v55, (unsigned int)v47[1], a2);
  if ( v20 >= 0 )
  {
    if ( v58[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( v58[0] == D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE || v58[0] == D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        v29 = 7;
        goto LABEL_76;
      }
      if ( v58[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3412;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid VidPn source ownership!",
          3412LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v29 = 0;
LABEL_76:
        DXGDEVICE::SetSchedulingPriorityAdjustment(v10, v29);
        *((_DWORD *)v10 + 477) += LODWORD(v47[1]);
        goto LABEL_77;
      }
    }
    v29 = 3;
    goto LABEL_76;
  }
LABEL_77:
  v30 = v45;
LABEL_78:
  v31 = 0;
  v42 = 0;
  v43[0] = 0;
  if ( v20 >= 0 && v23 )
  {
    ADAPTER_DISPLAY::EnsureGdiOutput(v25, v23, (struct COREDEVICEACCESS *)v53, &v42, v43, v30);
    v31 = v42;
  }
  if ( v20 < 0 || (v32 = 1, !v31) )
    v32 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, v32);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v53);
  if ( v23 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49);
    *((_BYTE *)v23 + 1953) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
  if ( v20 >= 0 )
  {
    if ( v31 && v43[0] )
    {
      MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks((MANAGEDPRIMARIESTRACKER *)v54);
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v10 + 5) + 88LL) + 216LL))();
    }
    (*(void (**)(void))(*((_QWORD *)v28 + 11) + 360LL))();
    *(_QWORD *)v56 = 1LL;
    *(_QWORD *)&v56[2] = 0LL;
    si128 = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v56) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3602;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3602LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v41);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v54);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v52);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v51);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
  return (unsigned int)v20;
}
