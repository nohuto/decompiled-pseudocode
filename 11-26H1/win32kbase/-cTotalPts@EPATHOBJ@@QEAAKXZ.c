/*
 * XREFs of ?cTotalPts@EPATHOBJ@@QEAAKXZ @ 0x140161C80
 * Callers:
 *     <none>
 * Callees:
 *     ?cTotalPts@PATH_CORE@@QEBAKXZ @ 0x140161CA0 (-cTotalPts@PATH_CORE@@QEBAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ::cTotalPts(EPATHOBJ *this)
{
  return PATH_CORE::cTotalPts((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
