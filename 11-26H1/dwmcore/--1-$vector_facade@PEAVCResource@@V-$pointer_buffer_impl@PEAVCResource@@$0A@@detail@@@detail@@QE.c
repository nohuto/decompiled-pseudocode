/*
 * XREFs of ??1?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800AD3A4
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x1800AD07C (--1CResource@@MEAA@XZ.c)
 *     ??1CPropertySet@@UEAA@XZ @ 0x1800AD1AC (--1CPropertySet@@UEAA@XZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x1800AD2A8 (--1CBrush@@MEAA@XZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ?clear_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001FE70 (-clear_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@.c)
 */

void __fastcall detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::~vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>(
        __int64 *a1)
{
  __int64 v2; // rax

  v2 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(a1);
  if ( v2 )
    detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::clear_region(a1, 0LL, v2);
  detail::pointer_buffer_impl<CResource *,0>::~pointer_buffer_impl<CResource *,0>(a1);
}
