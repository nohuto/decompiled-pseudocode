/*
 * XREFs of ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180408204
 * Callers:
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804070E0 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1803FF8E8 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180400584 (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Int.c)
 *     _LogEventWithViewHostItemData__ @ 0x1804013D4 (_LogEventWithViewHostItemData__.c)
 *     ??1?$com_ptr_t@VViewHostItemEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180401C88 (--1-$com_ptr_t@VViewHostItemEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_RaiseViewAdded(HolographicPositioner *this, struct IApplicationView *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 37);
  v4 = *v3;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, char *, __int64 *))(v4 + 48))(
         v3,
         a2,
         (char *)this + 304,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1596LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_12;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 36) + 56LL))(*((_QWORD *)this + 36), v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1598LL;
    goto LABEL_5;
  }
  LogEventWithViewHostItemData__(
    v13,
    (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::HolographicViewAdded<unsigned short const *,unsigned int &>);
  v15 = 0LL;
  v14 = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,Windows::Foundation::Collections::IPropertySet *>(
         &v14,
         &dword_1807A72E8,
         &v15);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v15 = v14;
    v11 = v13;
    v8 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemEventArgs *>(
           (char *)this + 320,
           &v11,
           &v15);
    v6 = v8;
    if ( v8 >= 0 )
    {
      wil::com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>(&v14);
      v6 = 0;
      goto LABEL_12;
    }
    v9 = 1604LL;
  }
  else
  {
    v9 = 1603LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v8);
  wil::com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>(&v14);
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  return v6;
}
