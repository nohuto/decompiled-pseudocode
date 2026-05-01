/*
 * XREFs of _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x180143228
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run @ 0x180143200 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801435CC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802CC8B8 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t@UIW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_37b02de6af5cc70082ddb03b5db08654_::operator()(_QWORD *a1)
{
  _DWORD *v2; // r8
  __int64 *v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int i; // esi
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  const char *v24; // r9
  int v26[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v29; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v30; // [rsp+88h] [rbp+10h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v2 = (_DWORD *)a1[1];
  v3 = *(__int64 **)(*(_QWORD *)(*a1 + 168LL) + 8LL);
  v4 = *(__int64 **)(*a1 + 168LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    if ( *((_DWORD *)v3 + 8) >= *v2 )
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
    }
    else
    {
      v3 = (__int64 *)v3[2];
    }
  }
  if ( *((_BYTE *)v4 + 25) || *v2 < *((_DWORD *)v4 + 8) )
    v4 = *(__int64 **)(*a1 + 168LL);
  v5 = v4[5];
  *(_QWORD *)v26 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
  {
    v29 = v4;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v29);
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Extract(
           v6,
           v4);
    std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>>>(
      v8,
      v7);
    try
    {
      v32 = 0LL;
      v9 = *(__int64 **)(*a1 + 192LL);
      v10 = *v9;
      v32 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v9, &v32);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB6,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v11,
          v26[0]);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      v13 = v12;
      v27 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      if ( !v13 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)0x8000FFFFLL,
          v26[0]);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, 0LL);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBB,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v14,
          v26[0]);
      v30 = 0LL;
      v15 = *(_QWORD *)v13;
      v30 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v15 + 48))(v13, &v30);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBE,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v16,
          v26[0]);
      LODWORD(v29) = 0;
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(*v30 + 56))(v30, &v29);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC1,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v17,
          v26[0]);
      for ( i = 0; i < (unsigned int)v29; ++i )
      {
        v31 = 0LL;
        v19 = *v30;
        v31 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v19 + 48))(v30, i, &v31);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC6,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v20,
            v26[0]);
        v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 104LL))(v13, v31);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC7,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v21,
            v26[0]);
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
              *(_QWORD *)(*a1 + 184LL),
              v13);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCA,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v22,
          v26[0]);
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 56LL))(v32);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCC,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v23,
          v26[0]);
      if ( v30 )
        (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    catch ( ... )
    {
      LODWORD(v29) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0xCE,
                       (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                       v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v26);
      return (unsigned int)v29;
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
