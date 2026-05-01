/*
 * XREFs of _TouchGestureComponent::GetSuppressedDisplayRects_::_1_::dtor$0 @ 0x1806F73EB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801579D8 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 */

__int64 __fastcall TouchGestureComponent::GetSuppressedDisplayRects_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(*(__int64 **)(a2 + 144));
  }
  return result;
}
