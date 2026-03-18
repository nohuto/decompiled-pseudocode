/*
 * XREFs of ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A4AF4
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801A4CA8 (-RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180227190 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 */

__int64 __fastcall CManipulationContext::Revalidate(struct MCCollections *a1, __int64 a2)
{
  int v2; // esi
  __int64 v6; // r14
  CManipulationContext *v7; // rbx
  CManipulationContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    v6 = 0LL;
    do
    {
      v8 = *(CManipulationContext **)(v6 + *((_QWORD *)a1 + 3));
      v7 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v8);
      if ( (*((_BYTE *)v7 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMCTree(v7, a1);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v8);
      ++v2;
      v6 += 8LL;
    }
    while ( v2 < *((_DWORD *)a1 + 8) );
  }
  LODWORD(v8) = 0;
  CManipulationContext::RevalidateMCsAndLists(a1, (int *)&v8);
  return CManipulationContext::RevalidationCleanup((unsigned int)v8, a1, a2);
}
