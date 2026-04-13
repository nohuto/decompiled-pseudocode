/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy @ 0x180089660
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx

  v2 = a2;
  if ( !a2 )
  {
    v2 = operator new(0x18uLL);
    if ( !v2 )
      std::_Xbad_alloc();
  }
  *v2 = off_1800C9EF0;
  v4 = *(_QWORD *)(a1 + 8);
  v2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return v2;
}
