/*
 * XREFs of ?bUMPD@XDCOBJ@@QEBAHXZ @ 0x1401B4778
 * Callers:
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bUMPD(XDCOBJ *this)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000;
}
