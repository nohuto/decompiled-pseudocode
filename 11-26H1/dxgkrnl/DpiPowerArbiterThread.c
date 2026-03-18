/*
 * XREFs of DpiPowerArbiterThread @ 0x14030C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x140011620 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1400323CC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1400325B4 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x140032F68 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x14004D6F0 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x14019D2F4 (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkResumeMemorySegments @ 0x1401AA694 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1401AA9DC (DxgkSuspendMemorySegments.c)
 *     ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x14030B6A8 (-NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x14030B7CC (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x14030B880 (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x14030BF64 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkShutdownBootGraphics @ 0x14030C080 (DxgkShutdownBootGraphics.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x14030C27C (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CD68 (-MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x14030D094 (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x14030DB28 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  NTSTATUS v2; // esi
  bool v3; // zf
  void *v4; // rax
  DXGADAPTER *v5; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r8
  int v7; // r14d
  char IsPowerRuntimeDStateTransition; // r15
  bool v9; // bl
  struct _LIST_ENTRY *v10; // r13
  char v11; // r14
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  char v13; // r12
  GUID *v14; // rbx
  __int64 v15; // r9
  int Blink; // edx
  __int64 Blink_low; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v18; // r15
  bool v19; // bp
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  void *v25; // rbx
  DXGGLOBAL *Global; // rax
  char started; // al
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // r14d
  DXGADAPTER *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rdx
  int v46; // ebp
  int v47; // eax
  unsigned __int8 v48[8]; // [rsp+38h] [rbp-50h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v49; // [rsp+40h] [rbp-48h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-40h] BYREF

  v1 = StartContext[8];
  v2 = 0;
  v3 = *(_DWORD *)(v1 + 4120) == 7;
  *(_QWORD *)(v1 + 4096) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 4072);
    while ( 1 )
    {
      v2 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      if ( !v2 )
        break;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2058;
LABEL_44:
      v4 = (void *)(v1 + 4072);
      if ( *(_DWORD *)(v1 + 4120) == 7 )
        goto LABEL_45;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v10 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_44;
      v13 = 0;
      v14 = (GUID *)((char *)&PowerActionQueueEntry[4].Blink + 4);
      v2 = 0;
      v48[0] = 0;
      ActivityId = 0LL;
      if ( PowerActionQueueEntry == (struct _LIST_ENTRY *)-76LL
        || !memcmp((char *)&PowerActionQueueEntry[4].Blink + 4, &ActivityId, 0x10uLL) )
      {
        EtwActivityIdControl(3u, &ActivityId);
      }
      else
      {
        ActivityId = *v14;
      }
      DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x45u, 0, &v49, v48);
      Blink = (int)v10[2].Blink;
      Blink_low = LODWORD(v10[1].Blink);
      v18 = v49;
      v19 = Blink != 64;
      v9 = Blink != 64;
      if ( LODWORD(v10[1].Blink) != 1 )
        break;
      v20 = *(_DWORD *)(v1 + 4120);
      if ( v20 != 1 && v20 != 3 )
      {
        DxgkShutdownBootGraphics(0LL, 0);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3928), 1u);
        ExReleaseResourceLite((PERESOURCE)(v1 + 3928));
        KeLeaveCriticalRegion();
        v21 = (int)v10[2].Blink;
        v22 = (__int64 *)(v1 + 4032);
        v23 = *(_QWORD *)(v1 + 4032);
        if ( (v21 & 0x40) != 0 )
        {
          DxgkAcquireAdapterCoreSync(v23, 4LL);
          if ( DxgkIsAdapterCoreSyncAcquired(*v22) )
          {
            WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
            WdLogGlobalForLineNumber = 2141;
            goto LABEL_29;
          }
          WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
          WdLogGlobalForLineNumber = 2132;
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          v2 = -1073741823;
LABEL_43:
          v9 = v19;
          goto LABEL_16;
        }
        v33 = 6LL;
        if ( (v21 & 0x98) == 0 )
          v33 = 3LL;
        DxgkAcquireAdapterCoreSync(v23, v33);
LABEL_29:
        if ( *(_DWORD *)(v1 + 284) == 1 )
        {
          MonitorAdapterPowerChange((DXGADAPTER *)*v22, 1u, v18);
          DmmAdapterPowerChange((PERESOURCE *)*v22, 1);
        }
        DmmResetModeState((PERESOURCE *)*v22, -1);
        v24 = (int)v10[2].Blink;
        if ( (v24 & 0x20) != 0 )
        {
          v31 = 4LL;
        }
        else if ( (v24 & 0x10) != 0 )
        {
          v31 = 3LL;
        }
        else if ( (v24 & 8) != 0 )
        {
          v31 = 2LL;
        }
        else
        {
          if ( (v24 & 0x80u) == 0 )
          {
            if ( (v24 & 0x40) != 0 )
            {
              WdLogSingleEntry3(9LL, v1, 1LL, 0LL);
              WdLogGlobalForLineNumber = 2206;
              if ( *(_BYTE *)(v1 + 5816) )
              {
                v25 = *(void **)(v1 + 4032);
                Global = DXGGLOBAL::GetGlobal();
                DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(Global, v25, 4u, 1);
              }
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v28 = *(_QWORD *)(v1 + 4032);
              if ( started )
              {
                DXGADAPTER::ApplyCoreSyncAction(v28, 3LL);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 4120) == 1 )
                {
                  if ( *(_BYTE *)(v1 + 5816) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), 4u, 0);
                  goto LABEL_42;
                }
                WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
                v28 = *(_QWORD *)(v1 + 4032);
                v30 = 5LL;
                WdLogGlobalForLineNumber = 2246;
              }
              else
              {
                v30 = 2LL;
              }
              DxgkReleaseAdapterCoreSync(v28, v30);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              if ( *(_BYTE *)(v1 + 5816) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), 1u, 0);
              goto LABEL_43;
            }
            v32 = *(_QWORD *)(v1 + 4032);
            v31 = 1LL;
LABEL_57:
            DXGADAPTER::ApplyCoreSyncAction(v32, v31);
LABEL_42:
            *(_DWORD *)(v1 + 4120) = 1;
            goto LABEL_43;
          }
          v31 = 5LL;
        }
        v32 = *v22;
        goto LABEL_57;
      }
      if ( (unsigned __int8)DpiIsPowerRuntimeDStateTransition(v1) )
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v29, 5, 0);
LABEL_16:
      if ( v9 )
      {
        LODWORD(v10[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v10[3], 0, 0);
      }
      if ( v48[0] )
        DisplayScenarioContextDissociate(&v49);
    }
    if ( LODWORD(v10[1].Blink) == 2 )
    {
      if ( *(_DWORD *)(v1 + 4120) != 1 )
        goto LABEL_16;
      v5 = *(DXGADAPTER **)(v1 + 4032);
      v6 = v49;
      *(_DWORD *)(v1 + 4120) = 2;
      v7 = (int)v10[2].Blink;
      MonitorAdapterPowerChange(v5, 0, v6);
      IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v1);
      if ( IsPowerRuntimeDStateTransition )
      {
        if ( v7 != 64 )
        {
          WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
          WdLogGlobalForLineNumber = 2350;
          LODWORD(v10[4].Blink) = 0;
          v9 = 0;
          KeSetEvent((PRKEVENT)&v10[3], 0, 0);
          v10 = 0LL;
          if ( *(_BYTE *)(v1 + 5816) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), 1u, 0);
        }
      }
      v2 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 5LL);
      if ( IsPowerRuntimeDStateTransition )
      {
        if ( v7 == 64 )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          if ( *(_BYTE *)(v1 + 5816) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), 1u, 0);
        }
        KeSetEvent((PRKEVENT)(v1 + 4240), 0, 0);
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(v1);
      }
      goto LABEL_14;
    }
    if ( LODWORD(v10[1].Blink) == 3 || LODWORD(v10[1].Blink) == 4 )
    {
      v41 = *(_DWORD *)(v1 + 4120);
      if ( v41 != 3 && *(_QWORD *)(v1 + 4032) )
      {
        if ( (_DWORD)Blink_low == 4 )
        {
          KeClearEvent((PRKEVENT)(v1 + 4264));
          LODWORD(v10[4].Blink) = 0;
          v9 = 0;
          KeSetEvent((PRKEVENT)&v10[3], 0, 0);
          v10 = 0LL;
        }
        if ( v41 != 1 )
          v2 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 4032), 3LL);
        v42 = *(DXGADAPTER **)(v1 + 4032);
        if ( v42 )
          DXGADAPTER::PrepareToRemove(v42);
        if ( v41 != 1 )
          v2 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 3LL);
        if ( *(_QWORD *)(v1 + 488) )
        {
          KeSetEvent((PRKEVENT)(v1 + 4240), 0, 0);
          PoFxUnregisterDevice(*(_QWORD *)(v1 + 488), v43, v44);
          *(_QWORD *)(*(_QWORD *)(v1 + 4032) + 3272LL) = 0LL;
          *(_QWORD *)(v1 + 488) = 0LL;
        }
        if ( v41 == 1 )
        {
          v45 = 5LL;
          if ( (*(_BYTE *)(v1 + 4040) & 0x18) == 0 && *(_BYTE *)(v1 + 1160) )
            v45 = 2LL;
          v2 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), v45);
        }
        LOBYTE(v15) = *(_BYTE *)(v1 + 1161);
        LOBYTE(Blink_low) = *(_BYTE *)(v1 + 1160);
        DpiRemoveAdapter(v18, v1, Blink_low, v15, 1);
        *(_DWORD *)(v1 + 4120) = 3;
        KeSetEvent((PRKEVENT)(v1 + 4264), 0, 0);
LABEL_14:
        v11 = 0;
        goto LABEL_15;
      }
      *(_DWORD *)(v1 + 4120) = 3;
      v11 = 0;
LABEL_15:
      if ( v2 >= 0 )
        goto LABEL_16;
      goto LABEL_117;
    }
    if ( LODWORD(v10[1].Blink) != 5 )
    {
      if ( LODWORD(v10[1].Blink) == 6 )
      {
        v34 = *(_DWORD *)(v1 + 4124);
        if ( (v34 & 4) != 0 )
        {
          v35 = *(_QWORD *)(v1 + 3000);
          *(_DWORD *)(v1 + 4124) = v34 & 0xFFFFFFFB;
          v36 = (*(__int64 (__fastcall **)(__int64))(v1 + 3032))(v35);
          if ( v36 < 0 )
          {
            WdLogSingleEntry4(0LL, 275LL, 21LL, *(_QWORD *)(v1 + 3032), v36);
            WdLogGlobalForLineNumber = 2694;
          }
        }
        v37 = *(_DWORD *)(v1 + 4124);
        v38 = *(_QWORD *)(v1 + 4032);
        if ( (v37 & 1) != 0 )
        {
          *(_DWORD *)(v1 + 4124) = v37 & 0xFFFFFFFE;
          v39 = DxgkReleaseAdapterCoreSync(v38, 5LL);
          v2 = v39;
          if ( v39 < 0 )
          {
            WdLogSingleEntry3(0LL, 275LL, 21LL, v39);
            WdLogGlobalForLineNumber = 2715;
          }
        }
        else
        {
          v2 = DxgkResumeMemorySegments(v38);
          if ( v2 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2734;
          }
          if ( (*(_DWORD *)(v1 + 4124) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 2LL) < 0 )
          {
            WdLogSingleEntry3(0LL, 275LL, 21LL, v2);
            WdLogGlobalForLineNumber = 2758;
          }
          *(_DWORD *)(v1 + 4124) &= ~2u;
        }
        *(_DWORD *)(v1 + 4120) = 6;
        v9 = v19;
      }
      else
      {
        if ( LODWORD(v10[1].Blink) != 7 )
          goto LABEL_16;
        if ( *(_DWORD *)(v1 + 4120) == 1 )
          v2 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 5LL);
        *(_DWORD *)(v1 + 4120) = 7;
      }
      goto LABEL_14;
    }
    if ( (Blink & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 4032), 3LL);
      DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 4032), 1LL);
    }
    else
    {
      if ( (Blink & 2) != 0 )
        goto LABEL_86;
      v2 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 4032), 2LL);
      if ( v2 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2604;
        goto LABEL_16;
      }
    }
    v13 = 1;
LABEL_86:
    if ( ((__int64)v10[2].Blink & 1) != 0 )
    {
      v11 = 0;
    }
    else
    {
      v2 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 4032));
      if ( v2 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2631;
LABEL_120:
        if ( v13 == 1 )
        {
          v47 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 5LL);
          if ( v47 < 0 )
          {
            WdLogSingleEntry3(0LL, 275LL, 21LL, v47);
            WdLogGlobalForLineNumber = 2834;
          }
        }
        goto LABEL_16;
      }
      v11 = 1;
    }
    if ( ((__int64)v10[2].Blink & 4) != 0 )
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 3024))(*(_QWORD *)(v1 + 3000));
      v2 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 3024), v40);
        WdLogGlobalForLineNumber = 2654;
LABEL_117:
        if ( v11 == 1 )
        {
          v46 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 4032));
          if ( v46 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2814;
            v2 = v46;
          }
        }
        goto LABEL_120;
      }
    }
    *(_DWORD *)(v1 + 4120) = 5;
    *(_DWORD *)(v1 + 4124) |= LODWORD(v10[2].Blink);
    goto LABEL_15;
  }
LABEL_45:
  PsTerminateSystemThread(v2);
}
