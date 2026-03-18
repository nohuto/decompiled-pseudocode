/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18009B688
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18002B2C0 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x18009B658 (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x18009B848 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  _QWORD *result; // rax
  __int64 v9; // rax
  CCachedVisualImage::CCachedTarget *v10; // rdx

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v9 = *i;
    *i = 0LL;
    v10 = (CCachedVisualImage::CCachedTarget *)*(i - 1);
    *(i - 1) = v9;
    if ( v10 )
      std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(a1, v10);
  }
  std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(*(_QWORD *)(a1 + 8) - 8LL);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
