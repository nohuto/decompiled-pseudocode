/*
 * XREFs of ?bAllClosed@EPATHOBJ@@QEAA_NXZ @ 0x1401C3B30
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllClosed@PATH_CORE@@QEBA_NXZ @ 0x1401C3C20 (-bAllClosed@PATH_CORE@@QEBA_NXZ.c)
 */

bool __fastcall EPATHOBJ::bAllClosed(EPATHOBJ *this)
{
  return PATH_CORE::bAllClosed((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
