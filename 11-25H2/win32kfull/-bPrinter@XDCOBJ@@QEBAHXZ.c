/*
 * XREFs of ?bPrinter@XDCOBJ@@QEBAHXZ @ 0x1401D3FF0
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bPrinter(XDCOBJ *this)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x80;
}
