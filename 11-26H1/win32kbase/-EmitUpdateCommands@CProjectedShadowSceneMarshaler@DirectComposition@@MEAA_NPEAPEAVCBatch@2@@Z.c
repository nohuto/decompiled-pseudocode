/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140246670
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitLightSource@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14018735C (-EmitLightSource@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOpacityFalloff@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401882A4 (-EmitOpacityFalloff@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMinOpacity@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14018835C (-EmitMinOpacity@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMaxOpacity@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140195008 (-EmitMaxOpacity@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMaxBlurRadius@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DBF4 (-EmitMaxBlurRadius@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMinBlurRadius@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DC34 (-EmitMinBlurRadius@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0NP@$0NM@$0A@$0GA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402467BC (-Marshal@-$CResourceMarshalerArray@$0NP@$0NM@$0A@$0GA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0OG@$0NN@$0A@$0GB@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402467E0 (-Marshal@-$CResourceMarshalerArray@$0OG@$0NN@$0A@$0GB@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<223,220,0,96>::Marshal(
                          (char *)this + 72,
                          a2,
                          *((unsigned int *)this + 8))
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<230,221,0,97>::Marshal(
                          (char *)this + 96,
                          a2,
                          *((unsigned int *)this + 8)) )
  {
    if ( (*((_DWORD *)this + 4) & 0x800) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 222;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 30);
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    if ( DirectComposition::CProjectedShadowSceneMarshaler::EmitMaxBlurRadius(
           this,
           (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitMinBlurRadius(
           this,
           (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitMaxOpacity(this, a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitMinOpacity(
           this,
           (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitOpacityFalloff(
           this,
           (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitLightSource(
           this,
           (struct DirectComposition::CBatch **)a2) )
    {
      return 1;
    }
  }
  return v4;
}
