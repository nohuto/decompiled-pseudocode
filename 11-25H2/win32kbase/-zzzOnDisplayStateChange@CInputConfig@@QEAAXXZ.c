/*
 * XREFs of ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F8B7C
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::zzzOnDisplayStateChange(CInputConfig *this, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx

  UserSessionState = W32GetUserSessionState(this, a2);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18640));
  if ( *((_BYTE *)this + 1504) )
    CInputConfig::_CreateLegacyInputSpace(this, v4);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18640));
  CInputConfig::_zzzNotifyExternalComponents(this, v5);
}
