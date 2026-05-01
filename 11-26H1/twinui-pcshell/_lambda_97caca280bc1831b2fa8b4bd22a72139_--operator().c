/*
 * XREFs of _lambda_97caca280bc1831b2fa8b4bd22a72139_::operator() @ 0x180364288
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97caca280bc1831b2fa8b4bd22a72139___::Run @ 0x180367910 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_97caca280bc1831b2fa8b4bd22a72139___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18001B9B0 (--$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802BE69C (--$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIW.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180363074 (--$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_97caca280bc1831b2fa8b4bd22a72139_::operator()(__int64 a1)
{
  int v2; // eax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (__int64 *)(a1 + 8),
    &v10);
  if ( v10 )
  {
    v9 = 0LL;
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(&v9);
    if ( v2 >= 0 )
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>(
        *(_QWORD *)a1 + 776LL,
        *(_QWORD *)a1,
        v9);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1336LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, bool))(*(_QWORD *)ppv + 72LL))(ppv, *(_BYTE *)(a1 + 16) != 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1339LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v4;
}
