/*
 * XREFs of ??_E?$_Ref_count_obj2@V?$optional@_N@std@@@std@@UEAAPEAXI@Z @ 0x1805EE560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<std::optional<bool>>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<std::optional<bool>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
