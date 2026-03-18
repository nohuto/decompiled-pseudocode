/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140048890
 * Callers:
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *a1, int a2, int a3)
{
  if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION() != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION() || ExIsResourceAcquiredExclusiveLite(*a1) != 1) )
  {
    __int2c();
  }
}
