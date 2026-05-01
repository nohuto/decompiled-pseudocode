/*
 * XREFs of ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800FCE00
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800FD8A0 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     _lambda_56bc88237345be46eea563c70201c1d4_::operator() @ 0x1804175D4 (_lambda_56bc88237345be46eea563c70201c1d4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpWindowEventDispatcher::GetCachedView(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 384);
  v6 = *(_QWORD **)(a1 + 392);
  while ( v5 != v6 )
  {
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 288LL))(*v5, &v10) == a3 )
    {
      v7 = *v5;
      v8 = *a2;
      *a2 = *v5;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      return a2;
    }
    ++v5;
  }
  return a2;
}
