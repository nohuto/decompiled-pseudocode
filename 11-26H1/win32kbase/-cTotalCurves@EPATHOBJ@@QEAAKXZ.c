/*
 * XREFs of ?cTotalCurves@EPATHOBJ@@QEAAKXZ @ 0x140133ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?cTotalCurves@PATH_CORE@@QEBAKXZ @ 0x140133EF0 (-cTotalCurves@PATH_CORE@@QEBAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ::cTotalCurves(EPATHOBJ *this)
{
  return PATH_CORE::cTotalCurves((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
