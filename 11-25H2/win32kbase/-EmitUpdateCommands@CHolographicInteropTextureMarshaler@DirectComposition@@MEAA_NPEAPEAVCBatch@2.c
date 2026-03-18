/*
 * XREFs of ?EmitUpdateCommands@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140110C20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitFlags@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237B38 (-EmitFlags@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPosition@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237BA8 (-EmitPosition@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRootVisual@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237C2C (-EmitRootVisual@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v6; // rcx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, (void **)&v7) )
      return v2;
    v6 = v7;
    *v7 = 24;
    *(_OWORD *)(v6 + 1) = 0LL;
    v6[5] = 0;
    v6[1] = 155;
    v6[2] = *((_DWORD *)this + 8);
    v6[4] = *((_DWORD *)this + 19);
    v6[5] = *((_DWORD *)this + 20);
    v6[3] = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CHolographicInteropTextureMarshaler::EmitPosition(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CHolographicInteropTextureMarshaler::EmitRootVisual(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CHolographicInteropTextureMarshaler::EmitFlags(this, (struct DirectComposition::CBatch **)a2) )
  {
    return 1;
  }
  return v2;
}
