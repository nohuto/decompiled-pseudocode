/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180018B40
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x1800189A0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x180018D14 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetUserPreferenceFromdB@CDuckingManager@@SA?AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M@Z @ 0x1800192E4 (-GetUserPreferenceFromdB@CDuckingManager@@SA-AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rcx
  struct TSSession *v7; // rdi
  std::_Ref_count_base *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // edi
  __int64 result; // rax
  int v13; // eax
  struct TSSession *v14; // [rsp+20h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+28h] [rbp-90h] BYREF
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-88h]
  _QWORD v17[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+48h] [rbp-70h] BYREF
  DWORD v19; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp-60h]
  std::_Ref_count_base *v21; // [rsp+60h] [rbp-58h]
  float v22; // [rsp+68h] [rbp-50h]
  __int64 (__fastcall ***v23)(); // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  DWORD v25; // [rsp+C8h] [rbp+10h] BYREF
  const unsigned __int16 *v26; // [rsp+D0h] [rbp+18h] BYREF

  v26 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17[1] = v5;
  v25 = a2;
  v14 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v15 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v6,
    v17,
    &v25);
  try
  {
    if ( v17[0] == qword_180068A38 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
      v13 = TsSessionCreate(a2, &v14);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43C,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_5;
      }
      v7 = v14;
    }
    else
    {
      v7 = *(struct TSSession **)(v17[0] + 24LL);
      LeaveCriticalSection(&stru_180068A08);
    }
    *((_DWORD *)v7 + 272) = CDuckingManager::GetUserPreferenceFromdB();
LABEL_5:
    if ( v5 )
      LeaveCriticalSection(v5);
    std::make_shared<std::wstring,unsigned short const * &>(&v15, &v26);
    v8 = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    v18 = off_180052D60;
    v19 = a2;
    v20 = v15;
    v21 = v8;
    v22 = a4;
    v23 = &v18;
    v9 = QueueGenericWorkItem((__int64 *)&v18);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      result = v11;
    }
    else
    {
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x20D,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\wind"
                                         "owspolicymanager.cpp",
                           v10);
  }
  return result;
}
