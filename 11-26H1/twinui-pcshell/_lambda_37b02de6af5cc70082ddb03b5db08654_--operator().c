/*
 * XREFs of _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x180138884
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run @ 0x180138860 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800F1780 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802851E0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t@UIW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_37b02de6af5cc70082ddb03b5db08654_::operator()(_QWORD *a1)
{
  int *v2; // r9
  __int64 *v3; // rdx
  __int64 *v4; // r8
  __int64 *v5; // rbx
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int i; // esi
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  const char *v26; // r9
  int v28[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  int v30; // [rsp+3Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v32; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v33; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h] BYREF
  __int64 v35; // [rsp+98h] [rbp+20h] BYREF

  v2 = (int *)a1[1];
  v3 = *(__int64 **)(*a1 + 168LL);
  v4 = (__int64 *)v3[1];
  v30 = 0;
  v5 = v3;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *v2;
    do
    {
      if ( *((_DWORD *)v4 + 8) >= v6 )
        v5 = v4;
      v7 = v4 + 2;
      if ( *((_DWORD *)v4 + 8) >= v6 )
        v7 = v4;
      v4 = (__int64 *)*v7;
    }
    while ( !*(_BYTE *)(*v7 + 25) );
  }
  if ( *((_BYTE *)v5 + 25) || *v2 < *((_DWORD *)v5 + 8) )
    v5 = v3;
  v8 = v5[5];
  *(_QWORD *)v28 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8) )
  {
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Extract(
           (_QWORD *)(*a1 + 168LL),
           v5);
    std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>>>(
      v10,
      v9);
    try
    {
      v35 = 0LL;
      v11 = *(__int64 **)(*a1 + 192LL);
      v12 = *v11;
      v35 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v11, &v35);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB6,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v13,
          v28[0]);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
      v15 = v14;
      v29 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      if ( !v15 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)0x8000FFFFLL,
          v28[0]);
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 64LL))(v15, 0LL);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBB,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v16,
          v28[0]);
      v33 = 0LL;
      v17 = *(_QWORD *)v15;
      v33 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v17 + 48))(v15, &v33);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBE,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v18,
          v28[0]);
      v32 = 0;
      v19 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v33 + 56))(v33, &v32);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC1,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v19,
          v28[0]);
      for ( i = 0; i < v32; ++i )
      {
        v34 = 0LL;
        v21 = *v33;
        v34 = 0LL;
        v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v21 + 48))(v33, i, &v34);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC6,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v22,
            v28[0]);
        v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 104LL))(v15, v34);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC7,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v23,
            v28[0]);
        if ( v34 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
              *(_QWORD *)(*a1 + 184LL),
              v15);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCA,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v24,
          v28[0]);
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 56LL))(v35);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCC,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v25,
          v28[0]);
      if ( v33 )
        (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    catch ( ... )
    {
      v32 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xCE,
              (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              v26);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v28);
      return v32;
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
