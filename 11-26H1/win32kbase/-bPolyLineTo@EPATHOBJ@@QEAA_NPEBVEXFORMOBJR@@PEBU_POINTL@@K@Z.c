/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1400C18B0
 * Callers:
 *     PATHOBJ_bPolyLineTo @ 0x1400C0BE0 (PATHOBJ_bPolyLineTo.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 */

__int64 __fastcall EPATHOBJ::bPolyLineTo(
        EPATHOBJ *this,
        const struct EXFORMOBJR *a2,
        const struct _POINTL *a3,
        unsigned int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[1] = a4;
  v5[0] = a3;
  v5[2] = 0LL;
  v6 = 0;
  return EPATHOBJ::bPolyLineTo(this, a2, v5);
}
