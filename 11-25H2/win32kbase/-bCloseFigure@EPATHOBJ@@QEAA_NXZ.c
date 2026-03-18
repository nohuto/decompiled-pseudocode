/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x14009A930
 * Callers:
 *     bPolyPolygon @ 0x140099400 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     PATHOBJ_bCloseFigure @ 0x14009C480 (PATHOBJ_bCloseFigure.c)
 * Callees:
 *     ?CloseFigure@PATH_CORE@@QEAA_NXZ @ 0x14009A970 (-CloseFigure@PATH_CORE@@QEAA_NXZ.c)
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
