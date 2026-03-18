/*
 * XREFs of ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM@@@Z @ 0x18021A748
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x18005F7B0 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  struct CResource *Resource; // rdi

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x93u)) != 0LL )
  {
    if ( Resource != this[24] )
    {
      CResource::RegisterNotifier((CResource *)this, Resource);
      CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
      this[24] = Resource;
      COffScreenRenderTarget::UpdateTransformAndTreeBounds((COffScreenRenderTarget *)this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xB6u, 0LL);
  }
  return v4;
}
