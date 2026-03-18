/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140099EA4
 * Callers:
 *     bPolyPolygon @ 0x140099400 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     EPATHOBJ_bPolyLineTo @ 0x140099B70 (EPATHOBJ_bPolyLineTo.c)
 *     PATHOBJ_bPolyLineTo @ 0x14009AED0 (PATHOBJ_bPolyLineTo.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x14009A0C4 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 */

char __fastcall EPATHOBJ::bPolyLineTo(
        EPATHOBJ *this,
        const struct EXFORMOBJR *a2,
        const struct _POINTL *a3,
        unsigned int a4)
{
  __int64 v6; // rcx
  char v7; // di
  bool v8; // al
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]
  unsigned int v13; // [rsp+44h] [rbp-14h]

  v6 = *((_QWORD *)this + 1);
  v7 = 0;
  if ( v6 )
  {
    v10[0] = a3;
    v10[1] = a4;
    v10[2] = 0LL;
    v11 = 0;
    v12 = 0;
    v13 = a4;
    v8 = PATH_CORE::addpoints((PATH_CORE *)(v6 + 24), a2, (struct PATHDATAL *)v10);
    if ( v8 )
    {
      *((_DWORD *)this + 1) += a4;
      *(_DWORD *)this &= ~2u;
    }
    return v8;
  }
  return v7;
}
