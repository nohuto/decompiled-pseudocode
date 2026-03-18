/*
 * XREFs of ??$?0$0?0V?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVCOverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180182B20
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall gsl::span<COverlayContext *,-1>::span<COverlayContext *,-1>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = *a2;
  v3 = (a2[1] - *a2) >> 3;
  *a1 = v3;
  if ( v3 == -1 || (a1[1] = v2) == 0 && v3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
