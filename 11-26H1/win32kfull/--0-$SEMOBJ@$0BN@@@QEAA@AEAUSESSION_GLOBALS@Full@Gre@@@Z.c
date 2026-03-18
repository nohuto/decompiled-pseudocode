/*
 * XREFs of ??0?$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x14034938C
 * Callers:
 *     VerifierEngAllocMem @ 0x1403494D0 (VerifierEngAllocMem.c)
 *     VerifierEngFreeMem @ 0x1403499D0 (VerifierEngFreeMem.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BN@@@YAXXZ @ 0x14029630C (--$GrepAcquireLockValidate@$0BN@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<29>::SEMOBJ<29>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(a2 + 4784);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<29>();
  return a1;
}
