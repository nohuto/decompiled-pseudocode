/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x14003E824
 * Callers:
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400BAD30 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(const struct tagDomLock *this, __int64 a2)
{
  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this)) )
  {
    __int2c();
  }
}
