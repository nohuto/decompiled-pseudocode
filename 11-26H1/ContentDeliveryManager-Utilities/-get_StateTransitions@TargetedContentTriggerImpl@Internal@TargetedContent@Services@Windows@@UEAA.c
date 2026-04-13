/*
 * XREFs of ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x180078EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@1234@@Z @ 0x180077F60 (--$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@Targe_ea_180077F60.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_StateTransitions(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int i; // esi
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v17; // [rsp+58h] [rbp+38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+40h] BYREF
  __int64 v19; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v6 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>>(
         v4,
         &v19,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 261LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  v17 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 192) + 56LL))(*(_QWORD *)(a1 + 192), &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 263LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v17; ++i )
  {
    v18 = 0LL;
    v10 = *(_QWORD *)(a1 + 192);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    v12 = v11(v10, i, &v18);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 267LL;
      goto LABEL_13;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 104LL))(v19, v18);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 268LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  }
  v14 = v19;
  v19 = 0LL;
  *a2 = v14;
  v7 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return v7;
}
