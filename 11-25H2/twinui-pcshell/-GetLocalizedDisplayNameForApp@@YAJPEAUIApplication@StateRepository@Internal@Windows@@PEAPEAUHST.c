/*
 * XREFs of ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1801B2934
 * Callers:
 *     ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1801B2640 (-LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B2A10 (--$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetLocalizedDisplayNameForApp(
        struct Windows::Internal::StateRepository::IApplication *a1,
        HSTRING *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v12; // [rsp+40h] [rbp+18h]

  *a2 = 0LL;
  try
  {
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationResourceResolverStatics>();
    v11 = 0LL;
    v4 = *v12;
    v11 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::StateRepository::IApplication *, __int64 *))(v4 + 48))(
           v12,
           a1,
           &v11);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x56,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5,
        v9);
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x58,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        v9);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v7);
  }
  return result;
}
