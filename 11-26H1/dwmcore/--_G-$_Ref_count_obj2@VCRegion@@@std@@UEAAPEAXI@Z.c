/*
 * XREFs of ??_G?$_Ref_count_obj2@VCRegion@@@std@@UEAAPEAXI@Z @ 0x180251620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CRegion>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CRegion>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
