/*
 * XREFs of ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1400EAA90
 * Callers:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x1400EA9A8 (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputGlobals::GetGlobalTickCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx

  v2 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v4 = *(_QWORD *)(a1 + 8 * v2 + 16);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
