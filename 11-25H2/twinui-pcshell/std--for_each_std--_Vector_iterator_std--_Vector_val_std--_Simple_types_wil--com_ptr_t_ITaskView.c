/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___ @ 0x18067E3F0
 * Callers:
 *     ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x18067F0F0 (-DismissViewAnimated@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801AAFC0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // r13
  __int64 *v8; // r15
  __int64 v9; // r14
  void (__fastcall *v10)(__int64, __int64); // rbp
  __int64 v11; // rsi
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+10h]
  __int64 v15; // [rsp+70h] [rbp+18h]

  for ( i = a2; i != a3; ++i )
  {
    v8 = wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
           &v13,
           i);
    v14 = v8;
    v9 = *v8;
    v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v8 + 56LL);
    v11 = __abi_winrt_cast_to(
            0,
            *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a4 + 208),
            (__int64)&_uuidof__AUIMonitorFrameDismissAnimationCallback__);
    v15 = v11;
    v10(v9, v11);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
  }
  *a1 = a4;
  return a1;
}
