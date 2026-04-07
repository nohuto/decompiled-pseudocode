/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DDC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = &std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::`vftable';
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
