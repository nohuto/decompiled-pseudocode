/*
 * XREFs of ??C?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEBAPEAUCpuClipStackState@CScopedClipStack@@XZ @ 0x180246414
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C5380 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800C57A0 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCVIRenderList@@@detail@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@detail@@YAXV?$basic_iterator@VCVIRenderList@@@0@0V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@Z @ 0x1801709B0 (--$move_backward_uninitialized@V-$basic_iterator@VCVIRenderList@@@detail@@V-$checked_array_itera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 40 * v1;
}
