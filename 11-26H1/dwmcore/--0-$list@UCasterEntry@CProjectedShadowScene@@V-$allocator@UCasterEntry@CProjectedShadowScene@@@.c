/*
 * XREFs of ??0?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x180208874
 * Callers:
 *     ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x1802087AC (--0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::CasterEntry>::list<CProjectedShadowScene::CasterEntry>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0xB0uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
