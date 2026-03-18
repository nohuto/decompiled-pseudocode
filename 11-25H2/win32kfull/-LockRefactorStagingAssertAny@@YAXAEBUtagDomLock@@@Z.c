/*
 * XREFs of ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1400C7900
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     PhkFirstGlobalValid @ 0x1400C8280 (PhkFirstGlobalValid.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1400C92D4 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertAny(PERESOURCE *a1, __int64 a2)
{
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL()
     || ExIsResourceAcquiredExclusiveLite(*a1) != 1 && !ExIsResourceAcquiredSharedLite(*a1)) )
  {
    __int2c();
  }
}
