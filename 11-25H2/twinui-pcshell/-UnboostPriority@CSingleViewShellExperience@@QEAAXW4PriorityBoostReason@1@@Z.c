/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x180013F38
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180013B48 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180013E3C (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800156EC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::Invoke @ 0x18065BD50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_18065BD50.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180014320 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18002F338 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v3; // eax
  HSTRING v4; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR v14; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR v15; // [rsp+58h] [rbp+20h] BYREF

  v13 = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    if ( !*(_BYTE *)(a1 + 140) )
      goto LABEL_5;
    *(_BYTE *)(a1 + 140) = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v3 >= 0 )
      goto LABEL_5;
    v9 = 1243LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3,
      v10);
    goto LABEL_5;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    a1 + 144,
    0LL);
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
  if ( *(_BYTE *)(a1 + 141) )
  {
    v8 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 128LL))(v8, a1);
    if ( v3 < 0 )
    {
      v9 = 1234LL;
      goto LABEL_10;
    }
  }
LABEL_5:
  v4 = *(HSTRING *)(a1 + 16);
  v12 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v4, 0LL);
  v6 = *(HSTRING *)(a1 + 8);
  v14 = StringRawBuffer;
  v15 = WindowsGetStringRawBuffer(v6, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           (unsigned int)&v15,
           (unsigned int)&v14,
           (unsigned int)&v13,
           (int)a1 + 141,
           (__int64)&v12,
           a1 + 140);
}
