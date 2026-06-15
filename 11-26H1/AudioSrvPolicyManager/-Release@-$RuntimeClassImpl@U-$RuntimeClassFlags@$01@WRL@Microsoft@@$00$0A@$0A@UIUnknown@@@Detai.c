/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18001A8D8 (--$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@.c)
 *     ??1CProcess@@MEAA@XZ @ 0x18001ADE4 (--1CProcess@@MEAA@XZ.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001B2E4 (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18001C1E0 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ??1?$com_ptr_t@VCApplicationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002A08C (--1-$com_ptr_t@VCApplicationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x18002B0DC (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002D120 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1?$ComPtr@VCApplication@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B3C8 (--1-$ComPtr@VCApplication@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18003B43C (--1CApplicationManager@@MEAA@XZ.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18003CDC4 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x1800456AC (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180047388 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x1800476F0 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 3);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 3, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
