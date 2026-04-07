/*
 * XREFs of ??0CProjectedShadowScene@@QEAA@XZ @ 0x1800BD0F4
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008DA78 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::CProjectedShadowScene(CProjectedShadowScene *this)
{
  __int64 v1; // rcx

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CProjectedShadowScene::`vftable';
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_BYTE *)(v1 + 64) = 0;
  return (CProjectedShadowScene *)v1;
}
