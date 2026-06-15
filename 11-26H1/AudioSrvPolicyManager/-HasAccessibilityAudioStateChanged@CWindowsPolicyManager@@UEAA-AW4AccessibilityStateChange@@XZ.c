/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180008E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180001E0C (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180008B0C (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x180008C20 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdIsPrimaryConsoleAudioSession@@YA_NK@Z @ 0x180008D28 (-TsSessionIdIsPrimaryConsoleAudioSession@@YA_NK@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(__int64 a1)
{
  unsigned int v2; // edi
  struct CProcess *v3; // rbx
  int Process; // eax
  DWORD v5; // eax
  DWORD v6; // r14d
  CWindowsPolicyManager *v7; // rcx
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rsi
  char IsPrimaryConsoleAudioSession; // si
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v15 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, 0LL, &v15);
  if ( Process < 0 )
  {
    if ( Process != -2147023171 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        v13);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v15);
  }
  else
  {
    v3 = v15;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v15 + 8LL))(v15);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v15);
    v5 = (*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 48LL))(v3);
    v6 = v5;
    if ( v5
      && (TsSessionIdAreAccessibilityAudioSettingsInitialized(v5)
       || (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v7, v6) >= 0) )
    {
      v8 = 0xFFFF;
      EnterCriticalSection(&stru_180068A08);
      LODWORD(v15) = v6;
      EnterCriticalSection(&stru_180068A08);
      v17 = &stru_180068A08;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
        v9,
        &v16,
        &v15);
      if ( v16 == qword_180068A38 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x471,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x80070490LL,
          v13);
      }
      else
      {
        v10 = *(_QWORD *)(v16 + 24);
        LeaveCriticalSection(&stru_180068A08);
        v8 = *(_DWORD *)(v10 + 4);
      }
      LeaveCriticalSection(&stru_180068A08);
      IsPrimaryConsoleAudioSession = TsSessionIdIsPrimaryConsoleAudioSession(v6);
      if ( (IsPrimaryConsoleAudioSession || v8 && v8 != 0xFFFF)
        && _InterlockedExchange((volatile __int32 *)(a1 + 48), TsSessionIdGetAccessibilityAudioMonoMixState(v6)) != *(_DWORD *)(a1 + 48) )
      {
        LOBYTE(v2) = IsPrimaryConsoleAudioSession != 0;
        ++v2;
      }
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
