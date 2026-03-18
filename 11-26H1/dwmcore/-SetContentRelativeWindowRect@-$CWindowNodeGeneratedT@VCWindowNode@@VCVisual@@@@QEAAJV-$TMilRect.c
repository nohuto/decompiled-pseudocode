/*
 * XREFs of ?SetContentRelativeWindowRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024AB58
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentRelativeWindowRect(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  _OWORD *v4; // rdx
  bool v5; // zf
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  v7 = *a2;
  if ( operator!=(&v7, (_DWORD *)(a1 + 704)) )
  {
    v5 = *(_QWORD *)(a1 + 808) == 0LL;
    *v4 = v2;
    if ( !v5 )
      CShapePtr::~CShapePtr((CShapePtr *)(a1 + 880));
    CWindowNode::Invalidate((CVisual *)a1, 3, 5u);
  }
  return 0LL;
}
