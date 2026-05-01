/*
 * XREFs of ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18036F338
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803701F0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180370394 (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180014E48 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x180369830 (--$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18036FC68 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded(CortanaSharedExperienceManager *this)
{
  int *v1; // rdi
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v8; // [rsp+40h] [rbp+20h] BYREF
  __int64 v9; // [rsp+48h] [rbp+28h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp+30h] BYREF

  v8 = 0;
  v1 = (int *)((char *)this + 532);
  v2 = 0;
  if ( *((_DWORD *)this + 133) )
  {
    CortanaSharedExperienceManager::_GetViewWrapper(this, &v10);
    if ( v10 )
    {
      v9 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             &v10,
             (__int64)&v9);
      v2 = v3;
      if ( v3 >= 0 )
      {
        v8 = v3;
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
        v2 = v5;
        v4 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x55A,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x557,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
        v4 = v2;
      }
      v8 = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  }
  CortanaProactiveTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v8, v1);
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
