/*
 * XREFs of ??_G?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@UEAAPEAXI@Z @ 0x180624A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
