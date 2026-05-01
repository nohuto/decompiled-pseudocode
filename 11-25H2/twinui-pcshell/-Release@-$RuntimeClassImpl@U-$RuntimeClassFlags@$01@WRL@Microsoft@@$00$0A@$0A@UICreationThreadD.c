/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069F60
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F6328 (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1800F94E4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ @ 0x1801EBAF0 (-RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ.c)
 *     _lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator() @ 0x18021E084 (_lambda_e637c9f76490f66fe2e1ec9f853f38ce_--operator().c)
 *     CreationThreadDispatcher::RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x18029A698 (CreationThreadDispatcher--RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___.c)
 *     ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1802ADB48 (-RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x1802BD41C (wistd--__invoke_void_return_wrapper_void_--__call__lambda_cfd27ea05118e91876b01966f7f941a5__-_en.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18034DA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICr_ea_18034DA60.c)
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803DCD38 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804E1340 (--0GamingPosturePositioner@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006B110 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
