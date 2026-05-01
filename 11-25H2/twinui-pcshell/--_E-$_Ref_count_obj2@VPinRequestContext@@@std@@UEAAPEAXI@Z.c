/*
 * XREFs of ??_E?$_Ref_count_obj2@VPinRequestContext@@@std@@UEAAPEAXI@Z @ 0x1805C0440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<PinRequestContext>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<PinRequestContext>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
