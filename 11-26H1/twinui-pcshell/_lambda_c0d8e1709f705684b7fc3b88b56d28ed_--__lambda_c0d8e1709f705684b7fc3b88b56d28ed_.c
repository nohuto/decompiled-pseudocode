/*
 * XREFs of _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::__lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x18055C780
 * Callers:
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed____::_1_::dtor$0 @ 0x1806F43B8 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_6.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242____::_1_::dtor$0 @ 0x1806F43CA (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_8.c)
 *     _VirtualDesktopGestureWindow::Commit_::_1_::dtor$4 @ 0x1806F459C (_VirtualDesktopGestureWindow--Commit_--_1_--dtor$4.c)
 *     _VirtualDesktopGestureWindow::Commit_::_1_::dtor$16 @ 0x1806F45AE (_VirtualDesktopGestureWindow--Commit_--_1_--dtor$16.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall lambda_c0d8e1709f705684b7fc3b88b56d28ed_::__lambda_c0d8e1709f705684b7fc3b88b56d28ed_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
