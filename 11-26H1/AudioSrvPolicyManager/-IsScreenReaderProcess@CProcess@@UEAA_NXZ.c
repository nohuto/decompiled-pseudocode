/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180024980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     __std_find_trivial_4 @ 0x18002F3F0 (__std_find_trivial_4.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

char __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  unsigned int v1; // ebp
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  DWORD v3; // esi
  char v4; // bl
  __int64 v5; // rcx
  struct TSSession *v6; // rsi
  bool v7; // si
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v11; // [rsp+50h] [rbp+8h] BYREF
  struct TSSession *v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v1 = *((_DWORD *)this + 40);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v3 = *((_DWORD *)this + 41);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v3;
  v4 = 0;
  v12 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v14 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v5,
    &v13,
    &v11);
  if ( v13 != qword_180068A38 )
  {
    v6 = *(struct TSSession **)(v13 + 24);
    LeaveCriticalSection(&stru_180068A08);
LABEL_3:
    v7 = _std_find_trivial_4(*((_QWORD *)v6 + 123), *((_QWORD *)v6 + 124), v1) != *((_QWORD *)v6 + 124);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  v9 = TsSessionCreate(v3, &v12);
  if ( v9 >= 0 )
  {
    v6 = v12;
    goto LABEL_3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43C,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v9);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
