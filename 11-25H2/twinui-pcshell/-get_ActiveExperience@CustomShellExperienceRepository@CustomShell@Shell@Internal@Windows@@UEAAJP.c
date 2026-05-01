/*
 * XREFs of ?get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUICustomShellExperience@2345@@Z @ 0x18031C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ActivateInstance@UICustomShellExperience@CustomShell@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUICustomShellExperience@CustomShell@Shell@Internal@1@@Z @ 0x18031BF80 (--$ActivateInstance@UICustomShellExperience@CustomShell@Shell@Internal@Windows@@@Foundation@Wind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  int v10; // eax
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-48h] BYREF
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v14; // [rsp+28h] [rbp-40h] BYREF
  const WCHAR *v15; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER v16; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v6 = *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1);
  v5 = Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds;
  try
  {
    while ( 1 )
    {
      if ( v5 == v6 )
        return 0LL;
      v14 = 0LL;
      v7 = (const WCHAR *)v5;
      if ( *(_QWORD *)(v5 + 24) > 7uLL )
        v7 = *(const WCHAR **)v5;
      v15 = v7;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v15, a3);
      v9 = Windows::Foundation::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperience>(
             (__int64)v8[1].Reserved.Reserved1,
             &v14);
      if ( v9 != -2147221164 )
      {
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3F,
            (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
            (const char *)(unsigned int)v9,
            v13);
        LOBYTE(v13) = 0;
        v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, int *))(*(_QWORD *)v14 + 56LL))(
                v14,
                &v13);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x42,
            (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
            (const char *)(unsigned int)v10,
            v13);
        if ( (_BYTE)v13 )
          break;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
      v5 += 32LL;
    }
    v11 = v14;
    if ( v14 )
    {
      *a2 = v14;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a2 = 0LL;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
                           a4);
  }
  return result;
}
