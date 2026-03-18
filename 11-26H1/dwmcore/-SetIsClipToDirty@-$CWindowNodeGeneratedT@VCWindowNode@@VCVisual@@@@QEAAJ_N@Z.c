/*
 * XREFs of ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B7E8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E470 (-SetProperty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ @ 0x1800E0830 (-last@-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsClipToDirty(__int64 a1, char a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  if ( a2 != *(_BYTE *)(a1 + 744) )
  {
    v3 = (__int64 *)(a1 + 824);
    *(_BYTE *)(a1 + 744) = a2;
    v4 = (__int64 *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)(a1 + 824));
    v5 = detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last(v3);
    while ( v4 != (__int64 *)v5 )
    {
      v6 = *v4++;
      *(_BYTE *)(v6 + 152) = *(_BYTE *)(a1 + 744);
    }
    CShapePtr::~CShapePtr((CShapePtr *)(a1 + 880));
    CWindowNode::Invalidate((CVisual *)a1, 1, 5u);
  }
  return 0LL;
}
