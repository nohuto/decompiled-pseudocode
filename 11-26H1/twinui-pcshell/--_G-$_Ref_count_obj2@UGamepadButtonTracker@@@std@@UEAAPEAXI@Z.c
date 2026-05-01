/*
 * XREFs of ??_G?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@UEAAPEAXI@Z @ 0x1803621A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<GamepadButtonTracker>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<GamepadButtonTracker>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
