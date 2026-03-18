/*
 * XREFs of ?RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180282730
 * Callers:
 *     <none>
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@@Z @ 0x1801B0FA4 (-erase@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 *     ?RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z @ 0x180264B80 (-RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CSpotLight::RemoveExcludedTargetVisual(const __m128i **this, struct CVisual *a2)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // rbp
  struct CVisual **i; // rbx
  struct CVisual **v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  CLight::RemoveExcludedTargetVisual(this, a2);
  v4 = (__int64 *)(this + 42);
  v5 = detail::pointer_buffer_impl<CVisual *,0>::last(v4);
  for ( i = (struct CVisual **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v4);
        i != (struct CVisual **)v5 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != (struct CVisual **)detail::pointer_buffer_impl<CVisual *,0>::last(v4) )
  {
    v7 = i;
    detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::erase(
      (__int64)v4,
      (__int64)&v8,
      (__int64 *)&v7);
  }
}
