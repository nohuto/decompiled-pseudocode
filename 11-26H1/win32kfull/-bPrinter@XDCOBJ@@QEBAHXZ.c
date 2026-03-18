/*
 * XREFs of ?bPrinter@XDCOBJ@@QEBAHXZ @ 0x140230C94
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bPrinter(XDCOBJ *this)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x80;
}
