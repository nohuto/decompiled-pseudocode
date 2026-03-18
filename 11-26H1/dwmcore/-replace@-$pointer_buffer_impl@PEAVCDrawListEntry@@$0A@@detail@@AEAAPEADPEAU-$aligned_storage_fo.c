/*
 * XREFs of ?replace@?$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@AEAAPEADPEAU?$aligned_storage_for@PEAVCDrawListEntry@@@2@@Z @ 0x180018594
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z @ 0x18001847C (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z @ 0x180160574 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *,0>::replace(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      result = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16;
      *a1 = a2 | 1;
      return result;
    }
    if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  *a1 = a2 | 1;
  return 0LL;
}
