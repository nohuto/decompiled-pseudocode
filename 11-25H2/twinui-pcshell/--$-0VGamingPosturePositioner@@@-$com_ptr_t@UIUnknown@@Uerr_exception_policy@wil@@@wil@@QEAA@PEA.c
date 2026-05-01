/*
 * XREFs of ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804E0058
 * Callers:
 *     _lambda_7403f855236cea0e6d88639637f0f4a5_::operator() @ 0x1804E1840 (_lambda_7403f855236cea0e6d88639637f0f4a5_--operator().c)
 *     ?DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804E2450 (-DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_.c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50 (-HandleViewFallback@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v3 = (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, a1);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v3,
      v5);
  return a1;
}
