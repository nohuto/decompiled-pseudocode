/*
 * XREFs of _TouchGestureSettings::GetTouchGestureTarget_::_1_::dtor$0 @ 0x1806CECBA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180066C0C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchGestureSettings::GetTouchGestureTarget_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(__int64 **)(a2 + 120));
  }
  return result;
}
