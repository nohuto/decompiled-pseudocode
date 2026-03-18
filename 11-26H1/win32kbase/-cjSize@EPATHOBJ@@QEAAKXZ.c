/*
 * XREFs of ?cjSize@EPATHOBJ@@QEAAKXZ @ 0x14016C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?cjSize@PATH_CORE@@QEBAKXZ @ 0x14016C3E0 (-cjSize@PATH_CORE@@QEBAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ::cjSize(EPATHOBJ *this)
{
  return PATH_CORE::cjSize((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
