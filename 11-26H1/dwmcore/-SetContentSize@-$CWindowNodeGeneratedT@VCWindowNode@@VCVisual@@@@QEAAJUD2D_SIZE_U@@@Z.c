/*
 * XREFs of ?SetContentSize@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z @ 0x18020C84C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentSize(_QWORD *a1, __int64 a2)
{
  bool v3; // zf

  if ( a2 != a1[90] )
  {
    v3 = a1[101] == 0LL;
    a1[90] = a2;
    if ( v3 )
      CShapePtr::~CShapePtr((CShapePtr *)(a1 + 110));
    CWindowNode::Invalidate((CVisual *)a1, 3, 5u);
  }
  return 0LL;
}
