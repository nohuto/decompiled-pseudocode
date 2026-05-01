/*
 * XREFs of _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x180179650
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_687e5a8c7a4f05ed052b2b78739515ed___::Run @ 0x18044A2B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_687e5a8c7a4f05ed052b2b78739515ed___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18017A198 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator()(_QWORD **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD **); // rsi
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rsi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  const char *v14; // r9
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = 0LL;
  v2 = (*a1)[10];
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 48LL);
    v5 = v19;
    v19 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 16LL))(v5, *v5);
    v6 = v4(v3, &v19);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFD,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v16);
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*a1)[10] + 40LL))((*a1)[10]);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 56LL);
    v9 = v18;
    v18 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v8(v7, *(unsigned int *)(*a1[1] + 32LL), &v18);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x100,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10,
        v16);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*a1)[8] + 104LL))((*a1)[8], v18);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x101,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v11,
        v16);
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 56LL))(v19);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x103,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v12,
        v16);
    v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
            *a1 + 13,
            *a1[1]);
    std::_Deallocate<16>(v13, 64LL);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x107,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v14);
  }
  return 0LL;
}
