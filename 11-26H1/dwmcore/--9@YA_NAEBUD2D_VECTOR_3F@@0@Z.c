/*
 * XREFs of ??9@YA_NAEBUD2D_VECTOR_3F@@0@Z @ 0x1802463E0
 * Callers:
 *     ?SetDirection@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024ADD8 (-SetDirection@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F.c)
 *     ?SetDirection@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024AE64 (-SetDirection@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 *     ?SetDwmRestartValues@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_3F@@@Z @ 0x18024AF24 (-SetDwmRestartValues@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTracke.c)
 *     ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024B078 (-SetEmissiveFactor@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2.c)
 *     ?SetInertiaDecayRates@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_3F@@@Z @ 0x18024B2EC (-SetInertiaDecayRates@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrack.c)
 *     ?SetOffset@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024C3D8 (-SetOffset@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 *     ?SetOffset@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024C464 (-SetOffset@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
