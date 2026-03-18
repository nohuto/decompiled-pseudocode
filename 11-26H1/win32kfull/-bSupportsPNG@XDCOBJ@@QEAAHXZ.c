/*
 * XREFs of ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x140264B58
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x14025AFFC (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140311298 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsPNG(XDCOBJ *this)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 76LL) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 32LL) == 1 )
    return 0LL;
  return result;
}
