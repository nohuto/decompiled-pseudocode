/*
 * XREFs of ??_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800BD2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ @ 0x1800BD208 (--1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ.c)
 */

CProjectedShadowScene::CProjectedShadowSceneInstance *__fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::`scalar deleting destructor'(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CProjectedShadowScene::CProjectedShadowSceneInstance::~CProjectedShadowSceneInstance(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
