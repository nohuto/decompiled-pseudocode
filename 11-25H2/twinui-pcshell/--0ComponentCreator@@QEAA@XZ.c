/*
 * XREFs of ??0ComponentCreator@@QEAA@XZ @ 0x180192CA8
 * Callers:
 *     ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1802A3FA8 (--$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveSh.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803CFC84 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801288A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801288A0.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801574A8 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180192DC0 (--$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr.c)
 *     ?attach@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180192E30 (-attach@-$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Ue.c)
 *     ??$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA?AV?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@XZ @ 0x1802C4994 (--$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA-AV-$ComPtr@VCoCreate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
ComponentCreator *__fastcall ComponentCreator::ComponentCreator(ComponentCreator *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile int *v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+48h] [rbp+28h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v7,
    &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)this, &v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v7,
    &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)this + 2, &v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v7,
    &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)this + 1, &v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v2 = (__int64 *)wil::MakeOrThrow<CoCreateInstanceImmersiveShellComponentCreator,>(&v7);
  v3 = *v2;
  *v2 = 0LL;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::attach(
    (char *)this + 24,
    v3);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v5,
      v4);
  }
  return this;
}
