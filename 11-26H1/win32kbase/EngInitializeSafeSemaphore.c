/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1401F38A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1400A69FC (GreCreateSemaphoreInternal.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v2; // rdx
  int v3; // r8d
  BOOL v4; // ebx
  char *SemaphoreInternal; // rax
  HSEMAPHORE v7; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v7);
  v4 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = GreCreateSemaphoreInternal(1), (pssem->hsem = (HSEMAPHORE)SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v4 = 1;
  }
  SEMOBJ<20>::vUnlock(&v7, v2, v3);
  return v4;
}
