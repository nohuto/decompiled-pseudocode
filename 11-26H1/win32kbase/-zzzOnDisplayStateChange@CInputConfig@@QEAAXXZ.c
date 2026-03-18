/*
 * XREFs of ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x14008055C
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::zzzOnDisplayStateChange(CInputConfig *this, int a2, int a3)
{
  __int64 UserSessionState; // rdi

  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18688));
  if ( *((_BYTE *)this + 1504) )
    CInputConfig::_CreateLegacyInputSpace(this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  CInputConfig::_zzzNotifyExternalComponents(this);
}
