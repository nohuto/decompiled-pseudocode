/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180023630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  bool *v7; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rcx
  struct TSSession *v10; // rbx
  _QWORD *i; // rbx
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // rdx
  int v16; // eax
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+20h] [rbp-30h] BYREF
  struct TSSession *v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  DWORD v22; // [rsp+80h] [rbp+30h] BYREF

  v7 = a5;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v8;
  if ( !a3 )
  {
    v13 = -2147024809;
    v15 = 2118LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v13);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
    return v13;
  }
  v22 = a2;
  v18 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v20 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v9,
    &v19,
    &v22);
  if ( v19 != qword_180068A38 )
  {
    v10 = *(struct TSSession **)(v19 + 24);
    LeaveCriticalSection(&stru_180068A08);
    goto LABEL_4;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  v16 = TsSessionCreate(a2, &v18);
  v13 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43C,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v16);
    v15 = 2121LL;
    goto LABEL_21;
  }
  v10 = v18;
LABEL_4:
  for ( i = (_QWORD *)*((_QWORD *)v10 + 133); i; i = (_QWORD *)*i )
  {
    v12 = (_QWORD *)i[1];
    if ( v12[3] > 7uLL )
      v12 = (_QWORD *)*v12;
    if ( !(unsigned int)_o__wcsicmp(v12, a3) )
    {
      if ( *(float *)(*(_QWORD *)(i[1] + 32LL) + 8LL) == a4 )
      {
        *v7 = 0;
      }
      else
      {
        *v7 = 1;
        *(float *)(*(_QWORD *)(i[1] + 32LL) + 8LL) = a4;
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      return 0;
    }
  }
  v13 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84E,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x80070057LL);
  if ( v8 )
    LeaveCriticalSection(v8);
  return v13;
}
