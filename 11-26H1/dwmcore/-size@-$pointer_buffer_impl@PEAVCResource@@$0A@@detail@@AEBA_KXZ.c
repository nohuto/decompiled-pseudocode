/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@AEBA_KXZ @ 0x1800E07D0
 * Callers:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEAAX_K@Z @ 0x1800DFDD0 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z @ 0x180160574 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CResource *,0>::size(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return 1LL;
  if ( (*a1 & 3LL) == 1 )
    return *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
  if ( (*a1 & 3uLL) - 2 > 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return 0LL;
}
