/*
 * XREFs of ??_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800BDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ @ 0x1800BDD04 (--1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ.c)
 */

CProjectedShadowScene::CProjectedShadowSceneInstance *__fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::`scalar deleting destructor'(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        char a2)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance::~CProjectedShadowSceneInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
