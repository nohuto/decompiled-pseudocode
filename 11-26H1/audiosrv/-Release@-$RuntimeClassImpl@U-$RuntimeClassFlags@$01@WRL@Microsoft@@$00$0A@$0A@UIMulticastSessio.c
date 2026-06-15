/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessionManager@@UIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801082D0
 * Callers:
 *     ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x180106E08 (--$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMultica.c)
 *     ??1?$ComPtr@VCMulticastSessionManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180107174 (--1-$ComPtr@VCMulticastSessionManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18010719C (--1-$com_ptr_t@VCMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z @ 0x1801080B4 (-InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessionManager@@UIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180108330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_180108330.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180048900 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastSessionManager,IMulticastManagerNotificationClient>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 20), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
