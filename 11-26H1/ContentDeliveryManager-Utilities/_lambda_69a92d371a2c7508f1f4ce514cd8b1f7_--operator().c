/*
 * XREFs of _lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator() @ 0x1800858E8
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_69a92d371a2c7508f1f4ce514cd8b1f7__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800898D0 (std--_Func_impl_std--_Callable_obj__lambda_69a92d371a2c7508f1f4ce514cd8b1f7__0__std_ea_1800898D0.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E44 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086034 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180088F40 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator()(__int64 a1, HSTRING a2, int a3, unsigned int a4)
{
  const WCHAR *v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v9; // rbx
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v10; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  const char *v15; // r9
  BOOL bIgnoreCase; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-28h] BYREF
  RTL_SRWLOCK *v21; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF

  v7 = **(const WCHAR ***)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, v7, -1, 1) == 2 && **(_DWORD **)(a1 + 8) == a3 )
  {
    v9 = *(RTL_SRWLOCK **)(a1 + 16);
    AcquireSRWLockExclusive(v9);
    v21 = v9;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                       *(Windows::Services::TargetedContent::Internal **)(a1 + 24),
                                       (struct CreativeFramework::Triggers::PropertySetHelper *)&v19,
                                       v10);
    try
    {
      if ( TriggerRegistrationFromSetting < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          585LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)TriggerRegistrationFromSetting,
          bIgnoreCase);
      v20[0] = v19;
      v23 = a4;
      v18 = a3;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
      if ( !v12 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, _QWORD *, int *, unsigned int *))(*(_QWORD *)v12 + 16LL))(v12, v20, &v18, &v23);
      v13 = v19;
      v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              v20,
              *(__int64 **)(a1 + 40));
      Windows::Services::TargetedContent::Internal::SetTriggerState(v14, v13, a4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x24D,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        v15);
    }
  }
  return 1;
}
