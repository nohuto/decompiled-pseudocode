/*
 * XREFs of _lambda_f3c5176796a442ffa96ae8ba53d93332_::operator() @ 0x1801F6D48
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f3c5176796a442ffa96ae8ba53d93332___::Run @ 0x1801F6D20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f3c5176796a442ffa96ae8ba53d93332___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1802C6D80 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_f3c5176796a442ffa96ae8ba53d93332_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int i; // edi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int j; // ebx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  const char *v21; // r9
  __int64 v23; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v24[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 *v28; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v29; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 184);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x102,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v3,
        0);
    v26 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(MEMORY[0] + 56LL))(0LL, &v26);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x105,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v4,
        0);
    v24[0] = 0LL;
    v5 = *(__int64 **)(*a1 + 192);
    v6 = *v5;
    v24[0] = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v6 + 48))(v5, v24);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x108,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v7,
        0);
    for ( i = 0; i < v26; ++i )
    {
      v28 = 0LL;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(MEMORY[0] + 48LL))(0LL, i, &v28);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x10D,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v9,
          0);
      v29 = 0LL;
      v10 = *v28;
      v29 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v10 + 48))(v28, &v29);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x110,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v11,
          0);
      v27 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v29 + 56))(v29, &v27);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x113,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v12,
          0);
      for ( j = 0; j < v27; ++j )
      {
        v23 = 0LL;
        v14 = *v29;
        v23 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 48))(v29, j, &v23);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x118,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v15,
            0);
        v16 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v28 + 104))(v28, v23);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x119,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v16,
            0);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 184) + 88LL))(
              *(_QWORD *)(*a1 + 184),
              v28);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x11C,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v17,
          0);
      if ( v29 )
        (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
      if ( v28 )
        (*(void (__fastcall **)(__int64 *))(*v28 + 16))(v28);
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 56LL))(v24[0]);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11F,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v18,
        0);
    v19 = *a1;
    v20 = *(_QWORD **)(*a1 + 168);
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>>>(
      *a1 + 168,
      *a1 + 168,
      v20[1]);
    v20[1] = v20;
    *v20 = v20;
    v20[2] = v20;
    *(_QWORD *)(v19 + 176) = 0LL;
    if ( v24[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x124,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v21);
  }
  return 0LL;
}
