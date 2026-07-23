/*
 * XREFs of ?ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CDCC
 * Callers:
 *     ExLookasideMgrsStart @ 0x140840B50 (ExLookasideMgrsStart.c)
 * Callees:
 *     ExDeleteTimer @ 0x1403B48D0 (ExDeleteTimer.c)
 *     ?ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z @ 0x14084D1D0 (-ExpLookasideMgrWorkerSetCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@@Z.c)
 */

void __fastcall ExpLookasideMgrCleanup(struct _EXP_LOOKASIDE_MGR *a1)
{
  unsigned __int16 v2; // bx

  ExDeleteTimer(*(_QWORD *)a1, 1, 1, 0LL);
  v2 = 0;
  *(_QWORD *)a1 = 0LL;
  while ( *((_DWORD *)a1 + 18) )
    _mm_pause();
  while ( v2 < *((_WORD *)a1 + 298) )
    ExpLookasideMgrWorkerSetCleanup((struct _EXP_LOOKASIDE_MGR *)((char *)a1 + 16 * v2++ + 600));
}
