/*
 * XREFs of ?EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131E18
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140131900 (-EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitClearCasters(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 12;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 290;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
