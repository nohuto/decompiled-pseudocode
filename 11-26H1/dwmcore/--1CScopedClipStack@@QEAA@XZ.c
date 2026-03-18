/*
 * XREFs of ??1CScopedClipStack@@QEAA@XZ @ 0x180183278
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800F3470 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??1CD2DClipStack@@QEAA@XZ @ 0x1801832C0 (--1CD2DClipStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180183324 (--1-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CScope.c)
 */

void __fastcall CScopedClipStack::~CScopedClipStack(CScopedClipStack *this)
{
  CScopedClipStack::Clear(this);
  CD2DClipStack::~CD2DClipStack((CScopedClipStack *)((char *)this + 2392));
  CD2DClipStack::~CD2DClipStack((CScopedClipStack *)((char *)this + 2368));
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::~vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>((char *)this + 1944);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::~vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>(this);
}
