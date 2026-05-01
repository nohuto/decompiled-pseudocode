/*
 * XREFs of ??_G?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@UEAAPEAXI@Z @ 0x18023CB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
