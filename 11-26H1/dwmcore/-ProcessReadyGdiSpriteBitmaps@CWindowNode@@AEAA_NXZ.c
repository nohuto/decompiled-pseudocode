/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18001F980 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1800DF910 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ @ 0x1801C6784 (-ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  bool v1; // zf
  _QWORD *v2; // rsi
  __int64 *v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v8; // rdx

  v1 = *((_BYTE *)this + 745) == 0;
  v2 = (_QWORD *)((char *)this + 824);
  v4 = (__int64 *)((char *)this + 824);
  if ( v1 )
  {
    v5 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(v4);
    do
      v6 = v5--;
    while ( v6
         && !*(_BYTE *)(*(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2) + 8 * v5) + 148LL) );
  }
  else
  {
    v5 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(v4) - 1;
  }
  if ( v5 == -1LL || !v5 && (*((_BYTE *)this + 896) & 4) != 0 )
    return 0;
  *((_BYTE *)this + 896) |= 4u;
  CWindowNode::DiscardOldestGdiSpriteBitmaps(this, v5);
  if ( *((_BYTE *)this + 745) )
  {
    v8 = 8LL;
LABEL_16:
    CVisual::PropagateFlags(this, v8);
    return 1;
  }
  if ( !*((_BYTE *)this + 744) )
  {
    CVisual::ClearContentTreeDataCaches(this);
    v8 = 4LL;
    goto LABEL_16;
  }
  CWindowNode::ResetEffectiveGdiSpriteClip(this);
  return 1;
}
