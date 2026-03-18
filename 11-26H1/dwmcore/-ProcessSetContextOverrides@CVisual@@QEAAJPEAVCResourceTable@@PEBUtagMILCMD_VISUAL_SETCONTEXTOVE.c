/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801973A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801974C0 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18019751C (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x18019757C (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801975CC (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180237988 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  FLOAT v6; // xmm1_4
  __int64 v7; // rax
  char v8; // al
  struct D2D_VECTOR_3F v10; // [rsp+20h] [rbp-28h] BYREF

  CVisual::GetWorldUpVectorOverride(this, &v10);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v10.x
    || *((float *)a3 + 4) != v10.y
    || *((float *)a3 + 5) != v10.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = *((float *)a3 + 4);
    v10.x = *((FLOAT *)a3 + 3);
    v10.z = *((FLOAT *)a3 + 5);
    v10.y = v6;
    CVisual::SetWorldUpVectorOverride(this, &v10);
    v7 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v7 + 4) & 0x40000) != 0 || (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
      v8 = 16;
    else
      v8 = 0;
    *((_BYTE *)this + 102) &= ~0x10u;
    *((_BYTE *)this + 102) |= v8;
    if ( (*((_DWORD *)this + 24) & 0x2000) != 0 )
    {
      CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 320));
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
