/*
 * XREFs of ??1?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801A9D00
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ??1CSpotLight@@UEAA@XZ @ 0x1802461A0 (--1CSpotLight@@UEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAAXXZ @ 0x1801A9D24 (-clear@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 */

void __fastcall detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::~vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>(
        __int64 *a1)
{
  detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear(a1);
  detail::pointer_buffer_impl<CResource *,0>::~pointer_buffer_impl<CResource *,0>(a1);
}
