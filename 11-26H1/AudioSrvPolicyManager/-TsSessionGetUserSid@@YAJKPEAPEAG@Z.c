/*
 * XREFs of ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180002280
 * Callers:
 *     ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180002270 (-GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z.c)
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x180002A70 (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 * Callees:
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x180002458 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionGetUserSid(DWORD a1, unsigned __int16 **a2)
{
  __int64 v4; // rcx
  struct TSSession *v5; // rbx
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const unsigned __int16 *v10; // rdx
  unsigned __int16 *v11; // rax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  DWORD v15; // [rsp+60h] [rbp+28h] BYREF
  struct TSSession *v16; // [rsp+68h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+38h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+78h] [rbp+40h] BYREF

  *a2 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v13 = &stru_180068A08;
  v15 = a1;
  v16 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v18 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v4,
    &v17,
    &v15);
  if ( v17 == qword_180068A38 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    v7 = TsSessionCreate(a1, &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43C,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v7,
        (int)v13);
      v9 = 769LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v8,
        (int)v13);
      goto LABEL_11;
    }
    v5 = v16;
  }
  else
  {
    v5 = *(struct TSSession **)(v17 + 24);
    LeaveCriticalSection(&stru_180068A08);
  }
  v10 = (const unsigned __int16 *)*((_QWORD *)v5 + 138);
  if ( !v10 )
  {
    v8 = -2147467259;
LABEL_11:
    LeaveCriticalSection(&stru_180068A08);
    return v8;
  }
  wil::make_cotaskmem_string_nothrow((wil *)&v16, v10, v6);
  v11 = (unsigned __int16 *)v16;
  if ( !v16 )
  {
    v8 = -2147024882;
    v9 = 775LL;
    goto LABEL_10;
  }
  v16 = 0LL;
  *a2 = v11;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v16);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return 0LL;
}
