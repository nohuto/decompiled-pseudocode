/*
 * XREFs of _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$0 @ 0x1806F9443
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800281C0 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<tagRECT>::~vector<tagRECT>(*(_QWORD *)(a2 + 120));
  }
  return result;
}
