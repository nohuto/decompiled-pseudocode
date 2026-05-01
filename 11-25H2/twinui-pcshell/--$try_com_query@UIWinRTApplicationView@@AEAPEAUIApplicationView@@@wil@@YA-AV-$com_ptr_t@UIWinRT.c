/*
 * XREFs of ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180208230
 * Callers:
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FE374 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsSameAppId@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1804DE7E0 (-IsSameAppId@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, a1);
  return a1;
}
