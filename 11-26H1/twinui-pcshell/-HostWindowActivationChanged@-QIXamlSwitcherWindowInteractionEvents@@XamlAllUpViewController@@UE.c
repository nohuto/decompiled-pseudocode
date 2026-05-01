/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAX_N_K@Z @ 0x1806B6190
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAX_N_K@Z @ 0x1806B6240 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WB.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F58F0 (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1806B253C (--$query@UIAllUpViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2,
        __int64 a3)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, _QWORD *); // rdi
  int v5; // eax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 56);
    wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 56),
      v6);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6[0] + 24LL))(v6[0], a3) )
    {
      wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(v4, &v8);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x257,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v6);
  }
}
