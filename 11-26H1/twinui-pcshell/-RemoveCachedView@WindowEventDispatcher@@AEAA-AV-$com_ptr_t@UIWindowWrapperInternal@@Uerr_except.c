/*
 * XREFs of ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041D534
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804161A0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804203D8 (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::RemoveCachedView(__int64 a1, __int64 *a2, int a3)
{
  _QWORD *v5; // rsi
  __int64 i; // rdi
  __int64 v7; // rcx
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  v5 = (_QWORD *)(a1 + 368);
  for ( i = (__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 368)) >> 3; i; --i )
  {
    v7 = *(_QWORD *)(*v5 + 8 * i - 8);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 288LL))(v7) == a3 )
    {
      wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a2, (__int64 *)(*v5 - 8LL + 8 * i));
      std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(v5, &v9, *v5 - 8LL + 8 * i);
      return a2;
    }
  }
  return a2;
}
