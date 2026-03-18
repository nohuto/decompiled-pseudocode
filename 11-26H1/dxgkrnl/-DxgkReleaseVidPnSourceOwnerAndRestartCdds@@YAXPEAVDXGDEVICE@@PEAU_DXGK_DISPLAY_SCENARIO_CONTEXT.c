/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403A21D8 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403EA650 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002E488 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140038EE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003CE00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1400421EC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x140075818 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x14018EE28 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039D288 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D388 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403F3714 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14042B790 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x14042F984 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  unsigned __int8 v7; // r14
  char v8; // r12
  int ProcessSessionId; // ebx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r9
  COREDEVICEACCESS *v13; // rcx
  __int64 v14; // r9
  struct DXGDEVICE *v15; // rbx
  __int64 v16; // rax
  char v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v18; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v19[6]; // [rsp+52h] [rbp-AEh] BYREF
  struct DXGDEVICE *v20; // [rsp+58h] [rbp-A8h]
  _BYTE v21[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+80h] [rbp-80h]
  _BYTE v24[160]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[160]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v26[432]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = *((_QWORD *)a1 + 237);
  v18 = 0;
  v19[0] = 0;
  v7 = 0;
  v8 = 0;
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2753;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2753LL, 0LL, 0LL, 0LL, 0LL);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2759;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetProcessSessionId(pDevice->GetProcess()->GetEProcess()) == PsGetCurrentProcessSessionId()",
      2759LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a1 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2761;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2761LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v3 + 3160)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2762;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      2762LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v26,
    *(struct ADAPTER_DISPLAY **)(v3 + 3160),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 5) + 360LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v26);
  v17 = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v17, 1);
  if ( v10 >= 0 )
  {
    v20 = 0LL;
    if ( (int)DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v3 + 412), 0) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 2815;
    }
    v15 = v20;
    if ( v20 )
    {
      v16 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v20 + 2) != v16 )
        v15 = 0LL;
      if ( v15 )
      {
        if ( *((_QWORD *)v15 + 2) != v16 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2830;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || (pCddDevice->GetRenderCore() == pDevice->GetRenderCore())",
            2830LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v15 + 1953) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)a1, 1, v14, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v24);
    if ( *(_DWORD *)(v3 + 200) == 1 )
    {
      if ( !*(_QWORD *)(v3 + 3160) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2866;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2866LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v26, a1, 0xFFFFFFFF);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1);
        v8 = 1;
        if ( v15 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v3 + 3160),
            v15,
            (struct COREDEVICEACCESS *)v24,
            &v18,
            v19,
            a2);
          v7 = v18;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v26, v7);
      }
      else
      {
        WdLogSingleEntry2(4LL, a1, v3);
        WdLogGlobalForLineNumber = 2876;
      }
    }
    else
    {
      WdLogSingleEntry2(4LL, a1, v3);
      WdLogGlobalForLineNumber = 2862;
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 3160), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v24);
    if ( v15 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
      *((_BYTE *)v15 + 1953) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v17);
    if ( v7 && v19[0] && *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL) )
    {
      MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks((MANAGEDPRIMARIESTRACKER *)v26);
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL) + 216LL))();
    }
    if ( v8 )
    {
      v22[1] = 0LL;
      v22[0] = 1LL;
      v23 = 0LL;
      if ( (int)DxgkStatusChangeNotify(v22) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2947;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2947LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v13 = (COREDEVICEACCESS *)v24;
    goto LABEL_49;
  }
  v11 = v10;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2781;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v11,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( a3 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)a1, 1, v12, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v25);
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3160), a1) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 3160), a1);
    }
    v13 = (COREDEVICEACCESS *)v25;
LABEL_49:
    COREDEVICEACCESS::~COREDEVICEACCESS(v13);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v17);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v26);
}
