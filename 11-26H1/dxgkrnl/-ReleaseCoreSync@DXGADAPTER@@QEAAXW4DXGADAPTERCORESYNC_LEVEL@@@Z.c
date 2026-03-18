/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300
 * Callers:
 *     DXGADAPTER_ReleaseCoreSync @ 0x140062740 (DXGADAPTER_ReleaseCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403E9BB0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x140013260 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BDF0 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x14030EA3C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x14030F698 (-StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x14030FF14 (-TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1403D8EE8 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rbx
  ADAPTER_RENDER *v4; // rcx
  ADAPTER_RENDER *v5; // rcx

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3880;
  }
  if ( (_DWORD)v2 == 5 || (unsigned int)(v2 - 1) <= 2 )
    DXGADAPTER::StartDeadlockTrackers((DXGADAPTER *)a1);
  v4 = *(ADAPTER_RENDER **)(a1 + 3168);
  if ( v4 )
  {
    if ( (_DWORD)v2 == 5 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v4);
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 3168), 10LL, 0xFFFFFFFFLL);
      ADAPTER_RENDER::TryRepinAllDirectFlipAllocations(*(ADAPTER_RENDER **)(a1 + 3168));
      goto LABEL_16;
    }
    if ( (_DWORD)v2 == 2 )
    {
      ADAPTER_RENDER::FlushScheduler(v4, 7LL, 0xFFFFFFFFLL);
      goto LABEL_16;
    }
  }
  if ( (_DWORD)v2 != 1 )
  {
    if ( (_DWORD)v2 != 2 )
    {
      if ( (_DWORD)v2 == 3 )
        goto LABEL_7;
      if ( (_DWORD)v2 != 5 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3946;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid synchronization level 0x%I64x",
          v2,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
    }
LABEL_16:
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 3708) = 0;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 3624) )
        DXGADAPTER::ScheduleAdapterActivityCheck((DXGADAPTER *)a1);
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a1 + 205) )
    *(_BYTE *)(a1 + 205) = 0;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)a1, 0LL);
LABEL_10:
  v5 = *(ADAPTER_RENDER **)(a1 + 3168);
  if ( v5 )
    ADAPTER_RENDER::EnableClockCalibration(v5, 1u);
}
