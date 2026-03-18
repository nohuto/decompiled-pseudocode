/*
 * XREFs of ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1800DF910
 * Callers:
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800DF8E4 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCGdiSpriteBitmap@@@2@V?$basic_iterator@QEAVCGdiSpriteBitmap@@@2@0@Z @ 0x1800DF678 (-erase_unchecked@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitm.c)
 */

void __fastcall CWindowNode::DiscardOldestGdiSpriteBitmaps(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 *i; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  struct CResource *v8; // rdx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  for ( i = (__int64 *)((char *)this + 824); v2 < a2; ++v2 )
  {
    v8 = *(struct CResource **)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(i) + 8 * v2);
    *((_BYTE *)v8 + 149) = 0;
    CResource::UnRegisterNotifierInternal(this, v8);
  }
  v6 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(i) + 8 * a2;
  v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(i);
  v9 = v6;
  v10 = v7;
  detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::erase_unchecked(
    i,
    &v11,
    &v10,
    &v9);
}
