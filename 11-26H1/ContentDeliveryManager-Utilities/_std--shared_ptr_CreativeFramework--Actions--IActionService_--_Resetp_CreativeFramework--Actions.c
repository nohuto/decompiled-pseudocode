/*
 * XREFs of _std::shared_ptr_CreativeFramework::Actions::IActionService_::_Resetp_CreativeFramework::Actions::SetLockScreenHotspotsService__::_1_::catch$1 @ 0x1800BD5C3
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn std::shared_ptr_CreativeFramework::Actions::IActionService_::_Resetp_CreativeFramework::Actions::SetLockScreenHotspotsService__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}
