/*
 * XREFs of ??_G?$_Ref_count_obj2@VUIAutomationHelpers@KeyboardHosting@@@std@@UEAAPEAXI@Z @ 0x180482D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
