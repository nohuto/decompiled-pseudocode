/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400265D4
 * Callers:
 *     xxxDoSysExpunge @ 0x140025A60 (xxxDoSysExpunge.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x140026714 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v4, v3) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v6, v5) || ExIsResourceAcquiredExclusiveLite(*a1) != 1) )
  {
    __int2c();
  }
}
