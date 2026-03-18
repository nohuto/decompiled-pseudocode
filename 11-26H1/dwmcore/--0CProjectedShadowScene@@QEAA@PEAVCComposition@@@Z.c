/*
 * XREFs of ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x1802087AC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x180208838 (--0-$list@UReceiverEntry@CProjectedShadowScene@@V-$allocator@UReceiverEntry@CProjectedShadowScen.c)
 *     ??0?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x180208874 (--0-$list@UCasterEntry@CProjectedShadowScene@@V-$allocator@UCasterEntry@CProjectedShadowScene@@@.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::CProjectedShadowScene(
        CProjectedShadowScene *this,
        struct CComposition *a2)
{
  CProjectedShadowScene *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  std::list<CProjectedShadowScene::CasterEntry>::list<CProjectedShadowScene::CasterEntry>((char *)this + 72);
  std::list<CProjectedShadowScene::ReceiverEntry>::list<CProjectedShadowScene::ReceiverEntry>((char *)this + 88);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1065353216;
  *(_QWORD *)((char *)this + 132) = 1065353216LL;
  result = this;
  *((_QWORD *)this + 15) = 2139095039LL;
  *((_DWORD *)this + 35) = -1082130432;
  return result;
}
