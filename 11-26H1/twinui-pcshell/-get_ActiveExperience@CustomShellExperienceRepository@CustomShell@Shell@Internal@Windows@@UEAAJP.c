/*
 * XREFs of ?get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUICustomShellExperience@2345@@Z @ 0x180318D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?_Unchecked_begin@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180318D40 (-_Unchecked_begin@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allo.c)
 *     ?_Unchecked_end@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180318D50 (-_Unchecked_end@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // r8d
  const char *v6; // r9
  __int64 v7; // r14
  const WCHAR *v8; // rcx
  PVOID Reserved1; // rcx
  int v10; // edi
  int v11; // eax
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v12; // rcx
  int v13; // eax
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v14; // rcx
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-48h] BYREF
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v17; // [rsp+28h] [rbp-40h] BYREF
  WCHAR *v18; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER v19; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v3 = std::vector<std::wstring>::_Unchecked_begin();
  v4 = std::vector<std::wstring>::_Unchecked_end();
  v7 = v4;
  try
  {
    while ( 1 )
    {
      if ( v3 == v7 )
        return 0LL;
      v17 = 0LL;
      v8 = (const WCHAR *)v3;
      if ( *(_QWORD *)(v3 + 24) > 7uLL )
        v8 = *(const WCHAR **)v3;
      v18 = (WCHAR *)v8;
      Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, (const WCHAR **)&v18, v5)[1].Reserved.Reserved1;
      v17 = 0LL;
      v18 = 0LL;
      v10 = RoActivateInstance(Reserved1, &v18);
      if ( v10 < 0 )
        goto LABEL_9;
      v11 = memcmp_0(&GUID_6ff11408_7eca_429b_8440_22c10384b01d, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL);
      v12 = (struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *)v18;
      if ( v11 )
        break;
      v17 = (struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *)v18;
LABEL_10:
      if ( v10 != -2147221164 )
      {
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3F,
            (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
            (const char *)(unsigned int)v10,
            v16);
        LOBYTE(v16) = 0;
        v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, int *))(*(_QWORD *)v12 + 56LL))(
                v12,
                &v16);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x42,
            (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
            (const char *)(unsigned int)v13,
            v16);
        if ( (_BYTE)v16 )
        {
          v14 = v17;
          if ( v17 )
          {
            *a2 = v17;
            (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *))(*(_QWORD *)v14 + 8LL))(v14);
          }
          else
          {
            *a2 = 0LL;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
          return 0LL;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      v3 += 32LL;
    }
    v10 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **))v18)(
            v18,
            &GUID_6ff11408_7eca_429b_8440_22c10384b01d,
            &v17);
    (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_9:
    v12 = v17;
    goto LABEL_10;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
                           v6);
  }
  return result;
}
