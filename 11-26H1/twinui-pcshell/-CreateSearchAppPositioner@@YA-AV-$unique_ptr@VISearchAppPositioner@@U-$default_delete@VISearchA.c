/*
 * XREFs of ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18023C0A4
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803B8640 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E4884 (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x180184560 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D5FFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreateSearchAppPositioner(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v9)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    1u,
    a3);
  v5 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = &SearchBoxOnTaskbarSearchAppPositionerConfig::`vftable';
    v5[1] = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5 + 1);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, __int64))v5;
    *v6 = &SearchBoxOnTaskbarSearchAppPositioner::`vftable';
    v6[1] = 0LL;
    wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
      (void (__fastcall ****)(_QWORD, __int64))v6 + 1,
      &v10);
    wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(&v10, 0LL);
    v5 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    &v9,
    (__int64 (__fastcall ***)(_QWORD, __int64))v6);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
  v7 = v9;
  v9 = 0LL;
  *a1 = v7;
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(&v9, 0LL);
  return a1;
}
