/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x1400C2A10
 * Callers:
 *     PATHOBJ_bCloseFigure @ 0x1400C0AC0 (PATHOBJ_bCloseFigure.c)
 *     bPolyPolygon @ 0x1400C0DA0 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?CloseFigure@PATH_CORE@@QEAA_NXZ @ 0x1400C2A50 (-CloseFigure@PATH_CORE@@QEAA_NXZ.c)
 */

char __fastcall EPATHOBJ::bCloseFigure(EPATHOBJ *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
    return 0;
  if ( PATH_CORE::CloseFigure((PATH_CORE *)(v2 + 24)) )
    ++*((_DWORD *)this + 1);
  return 1;
}
