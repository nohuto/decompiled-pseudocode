/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1401C7890
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  HSEMAPHORE v2; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v2);
  if ( pssem->lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
  }
  --pssem->lCount;
  SEMOBJ<20>::vUnlock(&v2);
}
