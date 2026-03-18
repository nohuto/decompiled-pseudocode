/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1401562A4
 * Callers:
 *     rimFreeSpecificDevFinal @ 0x14017E314 (rimFreeSpecificDevFinal.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D65E4 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     rimFindHoldingFrame @ 0x14002EF30 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x14002EF5C (rimReclaimHoldingFrame.c)
 */

char *__fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rdx
  char **v9; // rax

  while ( 1 )
  {
    result = (char *)rimFindHoldingFrame(a1, a2);
    v7 = result;
    if ( !result )
      break;
    rimReclaimHoldingFrame(v6, v5, (__int64)result);
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = (char **)*((_QWORD *)v7 + 1), *v9 != v7) )
      __fastfail(3u);
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    GreDeleteFastMutex(v7);
  }
  return result;
}
