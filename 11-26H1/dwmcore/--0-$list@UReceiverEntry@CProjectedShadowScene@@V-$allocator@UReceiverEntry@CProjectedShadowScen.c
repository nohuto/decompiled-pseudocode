/*
 * XREFs of ??0?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x180208838
 * Callers:
 *     ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x1802087AC (--0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::ReceiverEntry>::list<CProjectedShadowScene::ReceiverEntry>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x78uLL, a2);
  *v3 = v3;
  v3[1] = v3;
  *a1 = v3;
  return a1;
}
