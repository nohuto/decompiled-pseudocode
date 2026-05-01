/*
 * XREFs of ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x1801CA730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801CA8C4 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180318F34 (--$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CustomShellManager::TryLaunchCustomShell(CustomShellManager *this, int *a2)
{
  const char *v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0;
  try
  {
    if ( CustomShellManager::IsCurrentProcessCustomShellHost(this) )
    {
      wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>(&v13);
      v12 = 0LL;
      v5 = *v13;
      v12 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v13, &v12);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x47,
          (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
          (const char *)(unsigned int)v6,
          v10);
      v7 = v12;
      if ( v12 )
      {
        *a2 = 1;
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x50,
            (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
            (const char *)(unsigned int)v9,
            v10);
      }
      else
      {
        v8 = RtlPublishWnfStateData(WNF_CSH_LAUNCH_EXPLORER_REQUESTED, 0LL, 0LL, 0LL) | 0x10000000;
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x4B,
            (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
            (const char *)(unsigned int)v8,
            0);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
      result = 0LL;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x53,
                           (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v3);
  }
  return result;
}
