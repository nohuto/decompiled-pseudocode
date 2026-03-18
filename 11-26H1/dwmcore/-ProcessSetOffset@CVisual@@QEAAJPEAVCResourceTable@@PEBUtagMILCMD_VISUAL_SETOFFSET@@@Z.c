/*
 * XREFs of ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x180024F84
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x180025070 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::ProcessSetOffset(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOFFSET *a3)
{
  float v3; // xmm8_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  _DWORD v8[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *((float *)a3 + 2);
  v5 = *((float *)a3 + 4);
  v6 = *((float *)a3 + 3);
  if ( *((float *)this + 28) != v3 || *((float *)this + 29) != v6 || *((float *)this + 30) != v5 )
  {
    *((float *)this + 28) = v3;
    *((float *)this + 29) = v6;
    *((float *)this + 30) = v5;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v8 = v3;
    *(float *)&v8[1] = v6;
    *(float *)&v8[2] = v5;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 28LL, v8);
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  }
  return 0LL;
}
