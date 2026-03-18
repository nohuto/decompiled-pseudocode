/*
 * XREFs of ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1400AFD30
 * Callers:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x140125A68 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?IsSignaled@CEvent@DirectComposition@@QEAA_NXZ @ 0x1400AFD80 (-IsSignaled@CEvent@DirectComposition@@QEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(DirectComposition::CBatch *this)
{
  DirectComposition::CEvent *v2; // rcx
  DirectComposition::CEvent *v4; // rcx
  __int64 v5; // rdi

  while ( 1 )
  {
    v2 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
    if ( !v2 )
      return 0;
    if ( !DirectComposition::CEvent::IsSignaled(v2) )
      break;
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
    v5 = *(_QWORD *)v4;
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 11) = v5;
  }
  return 1;
}
