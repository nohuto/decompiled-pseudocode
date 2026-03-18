/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x140099CE8
 * Callers:
 *     EPATHOBJ_bMoveTo @ 0x1400993E0 (EPATHOBJ_bMoveTo.c)
 *     bPolyPolygon @ 0x140099400 (bPolyPolygon.c)
 *     PATHOBJ_bMoveTo @ 0x1401416D0 (PATHOBJ_bMoveTo.c)
 * Callees:
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140099D60 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bMoveTo(EPATHOBJ *this, const struct EXFORMOBJR *a2, const struct _POINTL *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v3 = *((_QWORD *)this + 1);
  result = 0LL;
  v5[0] = a3;
  v5[1] = 1LL;
  v5[2] = 0LL;
  v6 = 0;
  if ( v3 )
    return PATH_CORE::bMoveTo(v3 + 24, a2, v5);
  return result;
}
