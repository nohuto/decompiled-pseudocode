/*
 * XREFs of ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x180087DC0
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007C934 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateExternalObjectVector@VTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$AgileVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@$0A@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@$0A@@1234@@Z @ 0x1800799B8 (--$CreateExternalObjectVector@VTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_ @ 0x180084FCC (std--_Func_impl_std--_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std--allocator_s.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086F88 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggeredRegistration(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  const char *v10; // r9
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  *a2 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v6 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal,Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,0>>(
         v4,
         &v19,
         v5);
  try
  {
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        432LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v6,
        v14);
    v20 = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v16 = 0LL;
    v16 = std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_(
            v15,
            &v20);
    v7 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v14,
           a1);
    Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(v7, v8, (__int64)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    v9 = v19;
    v19 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  }
  catch ( ... )
  {
    LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1BC,
                     (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v10);
    v13 = (std::_Ref_count_base *)a1[1];
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return (unsigned int)v19;
  }
  v11 = (std::_Ref_count_base *)a1[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return 0LL;
}
