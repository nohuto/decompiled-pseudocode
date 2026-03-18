/*
 * XREFs of ??$?0$0?0$0A@@?$span@$$CBUPositionShift@@$0?0@gsl@@QEAA@PEBUPositionShift@@_K@Z @ 0x1801C4094
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall gsl::span<PositionShift const,-1>::span<PositionShift const,-1>(_QWORD *a1, __int64 a2, __int64 a3)
{
  bool v5; // zf

  gsl::details::extent_type<-1>::extent_type<-1>(a1, a3);
  v5 = *a1 == -1LL;
  a1[1] = a2;
  if ( v5 || !a2 && *a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
