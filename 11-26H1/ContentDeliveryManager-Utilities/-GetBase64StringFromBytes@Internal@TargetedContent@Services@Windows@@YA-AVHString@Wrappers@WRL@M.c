/*
 * XREFs of ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x180081F3C
 * Callers:
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180087484 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800890F0 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008168C (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *); // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-20h]
  __int64 *v13; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v4 = a2;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>((const WCHAR *)&v13, a2, a3);
  v15 = 0LL;
  v6 = *v13;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v6 + 72))(v13, v4, a3, &v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      307LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7,
      v12);
  *a1 = 0LL;
  v8 = (__int64)v13;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*v13 + 112);
  WindowsDeleteString(0LL);
  *a1 = 0LL;
  v10 = v9(v8, v15, a1);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      310LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v10,
      v12);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v15);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v13);
  return a1;
}
