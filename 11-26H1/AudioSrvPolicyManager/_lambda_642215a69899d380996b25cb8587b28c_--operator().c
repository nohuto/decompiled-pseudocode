/*
 * XREFs of _lambda_642215a69899d380996b25cb8587b28c_::operator() @ 0x18002AC1C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Do_call @ 0x180040B30 (std--_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_--_Do_call.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002ADC4 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18002C968 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z @ 0x18002C9E4 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002D43C (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18003FE28 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_642215a69899d380996b25cb8587b28c_::operator()(CDuckingManager **a1)
{
  unsigned __int16 *v2; // rbp
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // eax
  CDuckingManager *v5; // rbx
  CDuckingManager *v6; // rbx
  const unsigned __int16 *v7; // rax
  int v8; // eax
  CDuckingManager *v9; // rbx
  const unsigned __int16 *v10; // rax
  int v11; // eax
  __int64 v12[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  Sleep(0x1F4u);
  v2 = (unsigned __int16 *)(*(__int64 (__fastcall **)(CDuckingManager *))(*(_QWORD *)*a1 + 72LL))(*a1);
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v12[1] = (__int64)v3;
  v12[0] = 0LL;
  v4 = CDuckingManager::RemoveDuckingGainStages(a1[1], a1[2], v2, v12);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA4,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v4,
      v12[0]);
  CDuckingManager::RecalculateSessionVolumes(a1[1], v2, v12);
  v5 = a1[1];
  std::wstring::wstring(v14, v2);
  LODWORD(v5) = *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
                                         (char *)v5 + 176,
                                         v13,
                                         v14)
                          + 48LL);
  std::wstring::~wstring((__int64)v14);
  if ( !(_DWORD)v5 )
  {
    v6 = a1[1];
    v7 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(CDuckingManager *))(*(_QWORD *)*a1 + 64LL))(*a1);
    v8 = CDuckingManager::NotifyFilteredClientsAutoUnduck(v6, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB4,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v8,
        v12[0]);
  }
  v9 = a1[1];
  v10 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(CDuckingManager *))(*(_QWORD *)*a1 + 64LL))(*a1);
  v11 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(v9, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBA,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v11,
      v12[0]);
  if ( v3 )
    LeaveCriticalSection(v3);
}
