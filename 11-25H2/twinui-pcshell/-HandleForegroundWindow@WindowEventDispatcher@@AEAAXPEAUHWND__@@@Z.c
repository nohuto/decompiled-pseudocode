/*
 * XREFs of ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18040F650
 * Callers:
 *     ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x18040F740 (-HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1804101B0 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1803542F8 (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180408750 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x18041526C (-WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInterna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::HandleForegroundWindow(WindowEventDispatcher *this, HWND a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v7 = 0;
    v5 = (__int64 *)WindowEventDispatcher::WindowWrapperFromFrameOrWindow(this, &v9, a2, &v7);
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=(&v8, v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    v4 = v8;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 336LL))(v8);
  }
  v6 = *((_QWORD *)this + 57);
  if ( v6 != v4 )
  {
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 344LL))(v6, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
  }
  wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=((__int64 *)this + 57, &v8);
  *((_QWORD *)this + 56) = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
}
