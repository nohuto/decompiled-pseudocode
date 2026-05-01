/*
 * XREFs of _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$0 @ 0x1806D12A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18022E684 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<tagRECT>::~vector<tagRECT>(*(_QWORD *)(a2 + 120));
  }
}
