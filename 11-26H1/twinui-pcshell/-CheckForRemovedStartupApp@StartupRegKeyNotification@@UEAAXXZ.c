/*
 * XREFs of ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1801E6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180033DCC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285684 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802AAC6C (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70__&_ @ 0x18058561C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70__-_.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_ @ 0x180585F64 (_lambda_88c52b909d46191f2a7b9cf853665f36_--_lambda_88c52b909d46191f2a7b9cf853665f36_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall StartupRegKeyNotification::CheckForRemovedStartupApp(HKEY *this)
{
  unsigned int v2; // eax
  LPWSTR *v3; // rax
  DWORD v4; // ebx
  _QWORD *v5; // rax
  WCHAR *v6; // r8
  LPWSTR *v7; // rdx
  __int64 v8; // rbx
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  _QWORD **v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rbx
  _QWORD **v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rbx
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-59h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-19h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-15h] BYREF
  BYTE Data[4]; // [rsp+70h] [rbp-11h] BYREF
  DWORD cbData; // [rsp+74h] [rbp-Dh] BYREF
  __int128 v23; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v24[8]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD **v25; // [rsp+90h] [rbp+Fh]
  LPWSTR lpValueName[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+2Fh]
  unsigned __int64 v28; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(this[1], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0xDB,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  cchValueName = ++cbMaxValueNameLen;
  std::wstring::wstring((__int64)lpValueName);
  if ( cchValueName > v27 )
  {
    std::wstring::append((__int64 *)lpValueName, cchValueName - v27, 0);
  }
  else
  {
    v27 = cchValueName;
    v3 = lpValueName;
    if ( v28 > 7 )
      v3 = (LPWSTR *)lpValueName[0];
    *((_WORD *)v3 + cchValueName) = 0;
  }
  *(_DWORD *)Data = 0;
  cbData = 4;
  v4 = 0;
  v23 = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(48LL);
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)&v23 = v5;
  while ( 1 )
  {
    v6 = (WCHAR *)lpValueName;
    if ( v28 > 7 )
      v6 = lpValueName[0];
    if ( RegEnumValueW(this[1], v4, v6, &cchValueName, 0LL, 0LL, Data, &cbData) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v7 = lpValueName;
      if ( v28 > 7 )
        v7 = (LPWSTR *)lpValueName[0];
      if ( RegQueryValueExW(this[8], (LPCWSTR)v7 + 12, 0LL, 0LL, 0LL, 0LL) == 2 )
        std::list<std::wstring>::_Emplace<std::wstring const &>(&v23, v23, lpValueName);
    }
    ++v4;
    cchValueName = cbMaxValueNameLen;
    cbData = 4;
  }
  v8 = *((_QWORD *)&v23 + 1);
  lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_(v24, this, &v23);
  if ( v8 )
  {
    v11 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70____(
            v9,
            *((unsigned int *)this + 4),
            v10,
            v24);
    v9 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10C,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = v25;
  *v25[1] = 0LL;
  v13 = *v12;
  if ( *v12 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>(v9);
      v13 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16>(v12, 48LL);
  v15 = (_QWORD **)v23;
  **(_QWORD **)(v23 + 8) = 0LL;
  v16 = *v15;
  if ( *v15 )
  {
    do
    {
      v17 = (_QWORD *)*v16;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>(v15);
      v16 = v17;
    }
    while ( v17 );
  }
  std::_Deallocate<16>(v23, 48LL);
  std::wstring::_Tidy_deallocate(lpValueName);
}
