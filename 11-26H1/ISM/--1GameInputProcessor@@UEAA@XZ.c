/*
 * XREFs of ??1GameInputProcessor@@UEAA@XZ @ 0x1801B1504
 * Callers:
 *     ??_EGameInputProcessor@@UEAAPEAXI@Z @ 0x1801B15D0 (--_EGameInputProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180041338 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall GameInputProcessor::~GameInputProcessor(GameInputProcessor *this)
{
  const char *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &GameInputProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &GameInputProcessor::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 192) )
    NtMITSetKeyboardInputRoutingPolicy(0LL);
  if ( !gbIsDWMNoRawGameController )
  {
    try
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 56LL))(
        *((_QWORD *)this + 3),
        (char *)this + 104);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x5F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gameinputprocessor.cpp",
        v2);
    }
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)this + 21);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)this + 104, v3);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)this + 40, v4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
