/*
 * XREFs of ??1_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x140166580
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 */

void __fastcall tagTLBLOCK::_unnamed_type_list_::~_unnamed_type_list_(tagTLBLOCK::_unnamed_type_list_ *this)
{
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)this);
}
