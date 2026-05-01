/*
 * XREFs of ??_E?$_Ref_count_obj2@UNexusPolicyManager@@@std@@UEAAPEAXI@Z @ 0x1803428D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<NexusPolicyManager>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<NexusPolicyManager>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
