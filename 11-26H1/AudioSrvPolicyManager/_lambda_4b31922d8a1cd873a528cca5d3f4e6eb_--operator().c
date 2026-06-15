/*
 * XREFs of _lambda_4b31922d8a1cd873a528cca5d3f4e6eb_::operator() @ 0x18003F204
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_::_Do_call @ 0x180040B20 (std--_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_--_Do_call.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18002C968 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002E90C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x18003F828 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18003FC94 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18003FF6C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_4b31922d8a1cd873a528cca5d3f4e6eb_::operator()(CDuckingManager **a1)
{
  unsigned __int16 *v2; // rbp
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  float *v6; // rdi
  unsigned int v7; // ebx
  const unsigned __int16 *v8; // rax
  int v9; // eax
  float *v10; // rdi
  unsigned int v11; // ebx
  const unsigned __int16 *v12; // rax
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CWindowsPolicyManager::Lock((__int64)a1, &v14);
  v2 = (unsigned __int16 *)(*(__int64 (__fastcall **)(CDuckingManager *))(*(_QWORD *)*a1 + 72LL))(*a1);
  v3 = CDuckingManager::ApplyDuckingGainStages(a1[1], a1[2], v2);
  v4 = retaddr;
  if ( v3 >= 0 )
  {
    v3 = CDuckingManager::RecalculateSessionVolumes(a1[1], v2, 0LL);
    v4 = retaddr;
    if ( v3 >= 0 )
      goto LABEL_6;
    v5 = 110LL;
  }
  else
  {
    v5 = 107LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    v5,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_6:
  v6 = (float *)a1[1];
  std::wstring::wstring(v15, v2);
  v7 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                    v6 + 44,
                    (unsigned __int8 *)v15);
  v8 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(CDuckingManager *))(*(_QWORD *)*a1 + 64LL))(*a1);
  v9 = CDuckingManager::NotifyFilteredClientsAutoDuck((CDuckingManager *)v6, v8, v2, v7);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      116LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v9);
  std::wstring::~wstring((__int64)v15);
  v10 = (float *)a1[1];
  std::wstring::wstring(v15, v2);
  v11 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                     v10 + 44,
                     (unsigned __int8 *)v15);
  v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(CDuckingManager *))(*(_QWORD *)*a1 + 64LL))(*a1);
  v13 = CDuckingManager::NotifyUnfilteredClientsAutoDuck((CDuckingManager *)v10, v12, v11);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      119LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v13);
  std::wstring::~wstring((__int64)v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
}
