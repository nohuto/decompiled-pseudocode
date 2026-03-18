/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401CEC50
 * Callers:
 *     <none>
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1400DF080 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(struct _HEAD *a1, int a2, int a3)
{
  if ( a1 && *(_BYTE *)(HMPheFromObject(a1, a2, a3) + 24) == 1 )
    return (struct tagDomLock *)GetDomainLockRef(10, a2, a3);
  else
    return (struct tagDomLock *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 42384);
}
