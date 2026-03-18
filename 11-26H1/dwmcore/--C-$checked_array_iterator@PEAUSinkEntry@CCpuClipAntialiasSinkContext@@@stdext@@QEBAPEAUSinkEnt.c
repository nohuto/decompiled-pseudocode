/*
 * XREFs of ??C?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@QEBAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@XZ @ 0x18025B674
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C2910 (--$emplace_back@$$V@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 432 * v1;
}
