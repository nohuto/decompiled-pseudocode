/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@AEBA_KXZ @ 0x180018540
 * Callers:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z @ 0x18001847C (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEAAX_K@Z @ 0x180025864 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CVisual *,0>::size(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return 1LL;
  if ( (*a1 & 3LL) == 1 )
    return *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
  if ( (*a1 & 3uLL) - 2 >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return 0LL;
}
