/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D00A0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     SetProtocolType @ 0x14017D3E0 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D476C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(struct W32_PUSH_LOCK *a1, __int64 a2, unsigned int a3)
{
  W32AcquirePushLockExclusiveEx(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  W32ReleasePushLockExclusiveEx(a1);
}
