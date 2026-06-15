/*
 * XREFs of _lambda_8a34b5a072e294654496d34c017ecfd7_::operator() @ 0x180043880
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180044584 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18002AF4C (-TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180042F20 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@st.c)
 *     std::forward_list_wil::com_ptr_t_CProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CProcess_wil::err_returncode_policy_____::remove_if__lambda_f12aaf106d0879da545a13c0b04fcb63___ @ 0x180043154 (std--forward_list_wil--com_ptr_t_CProcess_wil--err_returncode_policy__std--allocator_wil--com_pt.c)
 */

__int64 __fastcall lambda_8a34b5a072e294654496d34c017ecfd7_::operator()(__int64 **a1)
{
  __int64 *v1; // rax
  int v3; // eax
  __int64 *v4; // r8
  unsigned int v5; // ebx
  __int64 *v7; // rax
  struct TSSession *v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  struct TSSession *v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  v1 = *a1;
  v15 = 0LL;
  v3 = TsSessionFromSessionId(*(_DWORD *)(*v1 + 164), 0, &v15);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v7 = *a1;
    v8 = v15;
    LOBYTE(v14) = 0;
    v9 = *v7;
    v12[0] = (__int64)&v14;
    v16 = v9;
    v12[1] = (__int64)&v16;
    std::forward_list_wil::com_ptr_t_CProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CProcess_wil::err_returncode_policy_____::remove_if__lambda_f12aaf106d0879da545a13c0b04fcb63___(
      (_QWORD **)v15 + 5,
      v12,
      v4);
    if ( (_BYTE)v14 )
      *(_DWORD *)(v16 + 452) = 0;
    if ( TsSessionMayBeDeleted(v8) )
    {
      EnterCriticalSection(&stru_180068A08);
      v10 = *a1;
      v15 = (struct TSSession *)&stru_180068A08;
      v11 = *v10;
      v14 = *(_DWORD *)(*v10 + 164);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Erase<unsigned long>(
        v11,
        (unsigned __int8 *)&v14);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v15);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58B,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
