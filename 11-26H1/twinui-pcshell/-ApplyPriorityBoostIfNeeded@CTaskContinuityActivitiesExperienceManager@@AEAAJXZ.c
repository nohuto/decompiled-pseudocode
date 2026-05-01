/*
 * XREFs of ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18037A560
 * Callers:
 *     ?OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18037A960 (-OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EA80 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::ApplyPriorityBoostIfNeeded(
        CTaskContinuityActivitiesExperienceManager *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 14) )
    return v1;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 96);
  if ( !*v2 )
    return v1;
  v8 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v2,
         &v8);
  v1 = v3;
  v4 = retaddr;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    v1 = v3;
    v4 = retaddr;
    if ( v3 >= 0 )
      goto LABEL_8;
    v5 = 140LL;
  }
  else
  {
    v5 = 137LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    (void *)v5,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  if ( (v1 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
      (const char *)v1);
  return v1;
}
