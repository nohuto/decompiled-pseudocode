/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400C79AC
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400C91F0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     xxxDoSysExpunge @ 0x14017B8FC (xxxDoSysExpunge.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *a1, __int64 a2)
{
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(*a1) != 1) )
  {
    __int2c();
  }
}
