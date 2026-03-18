/*
 * XREFs of ??$?0$0?0V?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@$0A@@?$span@PEAVCBrush@@$0?0@gsl@@QEAA@AEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x1801E0710
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall gsl::span<CBrush *,-1>::span<CBrush *,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  bool v4; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, (a2[1] - *a2) >> 3);
  v4 = *a1 == -1LL;
  a1[1] = v2;
  if ( v4 || !v2 && *a1 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a1;
}
