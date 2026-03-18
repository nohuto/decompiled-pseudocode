/*
 * XREFs of RIMRemoveHoldingFrame @ 0x140192634
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x14005E0A4 (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimFreeSpecificDevFinal @ 0x1401BB4C0 (rimFreeSpecificDevFinal.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     rimReclaimHoldingFrame @ 0x1400761B0 (rimReclaimHoldingFrame.c)
 *     rimFindHoldingFrame @ 0x140077F1C (rimFindHoldingFrame.c)
 */

char *__fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 *v12; // rax

  while ( 1 )
  {
    result = (char *)rimFindHoldingFrame(a1, a2);
    v8 = result;
    if ( !result )
      break;
    rimReclaimHoldingFrame(v6, v5, (__int64)result, v7);
    v11 = *(_QWORD *)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v12 = (__int64 *)*((_QWORD *)v8 + 1), (char *)*v12 != v8) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    GreDeleteFastMutex(v8, v11, v9, v10);
  }
  return result;
}
