/*
 * XREFs of _TouchGestureComponent::GetSuppressedDisplayRects_::_1_::dtor$0 @ 0x1806CEC78
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18016AC54 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 */

void __fastcall TouchGestureComponent::GetSuppressedDisplayRects_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(*(_QWORD *)(a2 + 144));
  }
}
