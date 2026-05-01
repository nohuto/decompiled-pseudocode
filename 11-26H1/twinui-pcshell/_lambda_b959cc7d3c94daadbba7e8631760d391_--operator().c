/*
 * XREFs of _lambda_b959cc7d3c94daadbba7e8631760d391_::operator() @ 0x18036B584
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b959cc7d3c94daadbba7e8631760d391___::Run @ 0x18036E310 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b959cc7d3c94daadbba7e8631760d391___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18001B9B0 (--$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$DoInvoke@V_lambda_55ef0cd80e80512d01823a56755fd8f1_@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_55ef0cd80e80512d01823a56755fd8f1_@@@Z @ 0x18005C034 (--$DoInvoke@V_lambda_55ef0cd80e80512d01823a56755fd8f1_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801E2090 (--$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 */

void __fastcall lambda_b959cc7d3c94daadbba7e8631760d391_::operator()(_QWORD *a1)
{
  int v2; // eax
  RTL_SRWLOCK *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+10h]
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+30h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
    a1 + 1,
    &v7);
  if ( v7 )
  {
    v6 = 0LL;
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(&v6);
    if ( v2 >= 0 )
    {
      v3 = (RTL_SRWLOCK *)*a1;
      v9 = v6;
      *(_QWORD *)&v4 = &v8;
      v8 = v3;
      *((_QWORD *)&v4 + 1) = &v9;
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_55ef0cd80e80512d01823a56755fd8f1_>(
        v3 + 104,
        &v4);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5CF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
}
