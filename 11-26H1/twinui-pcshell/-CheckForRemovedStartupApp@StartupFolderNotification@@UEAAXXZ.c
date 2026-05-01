/*
 * XREFs of ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180033DCC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x1801D2A00 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801D7210 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1801F3B78 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285684 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802AAC6C (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x1805856B8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36__-_.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_ @ 0x180585F64 (_lambda_88c52b909d46191f2a7b9cf853665f36_--_lambda_88c52b909d46191f2a7b9cf853665f36_.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall StartupFolderNotification::CheckForRemovedStartupApp(HKEY *this)
{
  unsigned int v2; // eax
  DWORD v3; // ebx
  _QWORD *v4; // rax
  WCHAR *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD **v9; // rdi
  _QWORD *v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // rdx
  LPWSTR *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  LPWSTR *v16; // rax
  std::filesystem::path *v17; // rax
  const struct std::filesystem::path *v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  unsigned int lpcSubKeys; // [rsp+20h] [rbp-89h]
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-49h] BYREF
  DWORD cchValueName; // [rsp+64h] [rbp-45h] BYREF
  BYTE Data[4]; // [rsp+68h] [rbp-41h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-3Dh] BYREF
  __int128 v26; // [rsp+70h] [rbp-39h] BYREF
  LPWSTR *v27; // [rsp+80h] [rbp-29h] BYREF
  LPWSTR lpValueName[2]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp-11h]
  unsigned __int64 v30; // [rsp+A0h] [rbp-9h]
  __int64 v31; // [rsp+A8h] [rbp-1h] BYREF
  _QWORD **v32; // [rsp+B0h] [rbp+7h]
  _QWORD v33[4]; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(this[1], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x16B,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  cchValueName = ++cbMaxValueNameLen;
  std::wstring::wstring((__int64)lpValueName);
  if ( cchValueName <= v29 )
  {
    v29 = cchValueName;
    v13 = lpValueName;
    if ( v30 > 7 )
      v13 = (LPWSTR *)lpValueName[0];
    *((_WORD *)v13 + cchValueName) = 0;
  }
  else
  {
    std::wstring::append((__int64 *)lpValueName, cchValueName - v29, 0);
  }
  *(_DWORD *)Data = 0;
  cbData = 4;
  v3 = 0;
  v26 = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(48LL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)&v26 = v4;
  while ( 1 )
  {
    v5 = (WCHAR *)lpValueName;
    if ( v30 > 7 )
      v5 = lpValueName[0];
    if ( RegEnumValueW(this[1], v3, v5, &cchValueName, 0LL, 0LL, Data, &cbData) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v16 = lpValueName;
      if ( v30 > 7 )
        v16 = (LPWSTR *)lpValueName[0];
      v27 = v16 + 3;
      std::filesystem::path::path((__int64)&v31, this + 8);
      v17 = (std::filesystem::path *)std::filesystem::path::path(v33, &v27);
      std::filesystem::path::operator/=((std::filesystem *)&v31, v17);
      std::wstring::_Tidy_deallocate(v33);
      if ( !std::filesystem::exists((std::filesystem *)&v31, v18, v19) )
        std::list<std::wstring>::_Emplace<std::wstring const &>(&v26, v26, lpValueName);
      std::wstring::_Tidy_deallocate(&v31);
    }
    ++v3;
    cchValueName = cbMaxValueNameLen;
    cbData = 4;
  }
  v6 = *((_QWORD *)&v26 + 1);
  lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_(&v31, this, &v26);
  if ( v6 )
  {
    v20 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36____(
            v7,
            *((unsigned int *)this + 4),
            v8,
            &v31);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19F,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v20);
  }
  v9 = v32;
  *v32[1] = 0LL;
  v10 = *v9;
  if ( *v9 )
  {
    do
    {
      v14 = (_QWORD *)*v10;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v10 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16>(v9, 48LL);
  v11 = (_QWORD **)v26;
  **(_QWORD **)(v26 + 8) = 0LL;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      v15 = (_QWORD *)*v12;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v12 = v15;
    }
    while ( v15 );
  }
  std::_Deallocate<16>(v26, 48LL);
  std::wstring::_Tidy_deallocate(lpValueName);
}
