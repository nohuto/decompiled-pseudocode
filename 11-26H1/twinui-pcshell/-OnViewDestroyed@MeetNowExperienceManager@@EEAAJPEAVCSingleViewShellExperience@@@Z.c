/*
 * XREFs of ?OnViewDestroyed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$com_query_to_nothrow@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@wil@@YAJAEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@PEAPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803C0E28 (--$com_query_to_nothrow@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV-$Com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MeetNowExperienceManager::OnViewDestroyed(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) && *((_QWORD *)this + 48) )
  {
    v8 = 0LL;
    v3 = wil::com_query_to_nothrow<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> &>(
           (_QWORD *)a2 + 3,
           (__int64)&v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 592LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
      return v4;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, *((_QWORD *)this + 48));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 593LL;
      goto LABEL_7;
    }
    *((_QWORD *)this + 48) = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  }
  return 0LL;
}
