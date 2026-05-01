/*
 * XREFs of ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x180420058
 * Callers:
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18041A314 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromFrameOrWindow(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        bool *a4)
{
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax

  *a4 = 0;
  *a2 = 0LL;
  v7 = *(__int64 **)(a1 + 368);
  v8 = *(__int64 **)(a1 + 376);
  while ( v7 != v8 )
  {
    if ( *v7 )
    {
      v9 = (*(int (__fastcall **)(__int64))(*(_QWORD *)*v7 + 256LL))(*v7);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 352LL))(*v7);
      if ( a3 == v9 || a3 == v10 )
      {
        wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a2, v7);
        *a4 = a3 == v9;
        return a2;
      }
    }
    ++v7;
  }
  return a2;
}
