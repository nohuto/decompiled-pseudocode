/*
 * XREFs of ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x180280050
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x18027FEFC (-ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 *     ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x18027FFB4 (-ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::InitializeSpectreComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  CSceneMeshRendererComponent::ApplyMeshToMeshComponent(this, a2);
  CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(this, a2);
  return 0LL;
}
