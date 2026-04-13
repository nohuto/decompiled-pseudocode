/*
 * XREFs of _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$4 @ 0x1800BE0CB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x18004CF48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 40);
  }
}
