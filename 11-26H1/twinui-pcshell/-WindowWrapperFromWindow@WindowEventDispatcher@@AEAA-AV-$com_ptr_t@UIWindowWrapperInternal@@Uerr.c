/*
 * XREFs of ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18042011C
 * Callers:
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18041AED0 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi

  *a2 = 0LL;
  v5 = *(__int64 **)(a1 + 368);
  v6 = *(__int64 **)(a1 + 376);
  while ( v5 != v6 )
  {
    if ( *v5 && a3 == (*(int (__fastcall **)(__int64))(*(_QWORD *)*v5 + 256LL))(*v5) )
    {
      wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a2, v5);
      return a2;
    }
    ++v5;
  }
  return a2;
}
