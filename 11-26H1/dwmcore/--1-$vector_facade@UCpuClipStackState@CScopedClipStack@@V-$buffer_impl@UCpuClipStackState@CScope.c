/*
 * XREFs of ??1?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180183324
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180183278 (--1CScopedClipStack@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180183358 (-clear@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CS.c)
 */

void __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::~vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  void *v2; // rcx
  bool v3; // zf

  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear();
  v2 = *a1;
  v3 = *a1 == a1 + 3;
  *a1 = 0LL;
  if ( v3 )
    v2 = 0LL;
  operator delete(v2);
}
