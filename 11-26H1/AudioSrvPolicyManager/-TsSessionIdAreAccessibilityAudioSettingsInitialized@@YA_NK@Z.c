/*
 * XREFs of ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x180008C20
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180008A20 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180008E40 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180047130 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TsSessionIdAreAccessibilityAudioSettingsInitialized(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  struct TSSession *v4; // rdi
  bool v5; // di
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v9; // [rsp+50h] [rbp+8h] BYREF
  struct TSSession *v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = a1;
  v10 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v12 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v3,
    &v11,
    &v9);
  if ( v11 != qword_180068A38 )
  {
    v4 = *(struct TSSession **)(v11 + 24);
    LeaveCriticalSection(&stru_180068A08);
LABEL_3:
    v5 = *((_DWORD *)v4 + 268) != 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    return v5;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  v7 = TsSessionCreate(a1, &v10);
  if ( v7 >= 0 )
  {
    v4 = v10;
    goto LABEL_3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43C,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v7,
    (int)v2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0;
}
