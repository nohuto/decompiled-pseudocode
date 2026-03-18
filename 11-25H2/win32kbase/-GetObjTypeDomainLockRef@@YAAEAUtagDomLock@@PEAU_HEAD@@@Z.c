/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401AC7C0
 * Callers:
 *     <none>
 * Callees:
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140040C50 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(struct _HEAD *a1, __int64 a2)
{
  if ( a1 && *(_BYTE *)(HMPheFromObject((int *)a1, a2) + 24) == 1 )
    return (struct tagDomLock *)GetDomainLockRef(10LL, a2);
  else
    return (struct tagDomLock *)(W32GetUserSessionState(a1, a2) + 42360);
}
