/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1401C7A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x140027848 (GreCreateSemaphoreInternal.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  BOOL v2; // ebx
  HSEMAPHORE SemaphoreInternal; // rax
  HSEMAPHORE v5; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v5);
  v2 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = (HSEMAPHORE)GreCreateSemaphoreInternal(1), (pssem->hsem = SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v2 = 1;
  }
  SEMOBJ<20>::vUnlock(&v5);
  return v2;
}
