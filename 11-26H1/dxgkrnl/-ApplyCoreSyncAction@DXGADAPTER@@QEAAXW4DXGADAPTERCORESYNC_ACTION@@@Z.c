/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x14030DB28
 * Callers:
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1401D9CF0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 *     ?StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1402FE2F4 (-StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x14030EEC4 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x14030F4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-48h] BYREF
  __int128 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  struct _TDR_RECOVERY_CONTEXT *v17; // [rsp+70h] [rbp-28h]

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3717;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3717LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  WdLogSingleEntry3(9LL, a1, v2, *((unsigned __int8 *)Global + 304384));
  WdLogGlobalForLineNumber = 3719;
  if ( (_DWORD)v2 == 1 || (_DWORD)v2 == 2 || (_DWORD)v2 == 3 )
  {
LABEL_8:
    v5 = *(_QWORD *)(a1 + 3168);
    if ( v5 )
      ADAPTER_RENDER::FlushScheduler(v5, 8LL, 0xFFFFFFFFLL);
    v6 = *(ADAPTER_DISPLAY **)(a1 + 3160);
    if ( v6 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        v6,
        (struct ADAPTER_RENDER *)(*(_QWORD *)(a1 + 3168) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 3168) >> 64)));
    v7 = *(ADAPTER_RENDER **)(a1 + 3168);
    if ( v7 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v7);
      if ( (_DWORD)v2 == 3 )
      {
        v8 = 32;
        if ( *(_DWORD *)(a1 + 160) != 1 )
          v8 = 4;
      }
      else
      {
        v8 = 2;
        if ( (_DWORD)v2 != 2 )
        {
          v12 = 0;
          if ( (_DWORD)v2 == 5 )
            v12 = 32;
          v8 = v12;
        }
      }
      v9 = v8 | (*(_BYTE *)(a1 + 207) != 0 ? 65 : 1);
      if ( *(_BYTE *)(a1 + 5072) )
      {
        v9 |= 0x80u;
        *(_BYTE *)(a1 + 5072) = 0;
      }
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 3168), 9LL, 0xFFFFFFFFLL);
      WdLogSingleEntry2(9LL, a1, *(unsigned __int8 *)(a1 + 3093));
      v10 = *(_QWORD *)(a1 + 3168);
      WdLogGlobalForLineNumber = 3805;
      ADAPTER_RENDER::PurgeSegments(v10, v9, 0LL);
      WdLogSingleEntry2(9LL, a1, *(unsigned __int8 *)(a1 + 3093));
      WdLogGlobalForLineNumber = 3809;
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) )
      {
        if ( *(_BYTE *)(a1 + 3093) )
        {
          v17 = g_TdrRecoveryInProgress;
          v15 = 0LL;
          v14 = 0LL;
          v16 = 0LL;
          *((_QWORD *)g_TdrRecoveryInProgress + 363) = KeGetCurrentThread();
          TdrResetFromTimeoutWorkItem(&v14);
          WdLogSingleEntry1(9LL);
          v13 = *(_QWORD *)(a1 + 3168);
          WdLogGlobalForLineNumber = 3827;
          ADAPTER_RENDER::PurgeSegments(v13, v9, 0LL);
          WdLogSingleEntry2(9LL, a1, *(unsigned __int8 *)(a1 + 3093));
          WdLogGlobalForLineNumber = 3834;
          if ( *(_BYTE *)(a1 + 3093) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3835;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsTdrPending()", 3835LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    if ( (((_DWORD)v2 - 2) & 0xFFFFFFFC) == 0 )
      DXGADAPTER::StopDeadlockTrackers((DXGADAPTER *)a1);
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3860;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid synchronization action level 0x%I64x",
        v2,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
    goto LABEL_8;
  }
  v11 = *(_QWORD *)(a1 + 3168);
  if ( v11 )
    ADAPTER_RENDER::FlushScheduler(v11, 6LL, 0xFFFFFFFFLL);
}
