/*
 * XREFs of _lambda_232257857a1cb6c76353db7ef02330a7_::operator() @ 0x1800288D4
 * Callers:
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x1800440F0 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180006A60 (-TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800285B0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 *     McTemplateU0qtt_EventWriteTransfer @ 0x18004541C (McTemplateU0qtt_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_232257857a1cb6c76353db7ef02330a7_::operator()(__int64 **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rcx
  const struct TSSession *v8; // r15
  int v9; // ecx
  int v10; // r12d
  int v11; // r14d
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v20)(); // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  BOOL v22; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+D0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+D8h] [rbp+58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v25 = v2;
  v3 = **a1;
  if ( *(_DWORD *)(v3 + 16) != 4 )
    goto LABEL_2;
  v5 = *(_QWORD *)v3 - *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1;
  if ( *(_QWORD *)v3 == *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1 )
    v5 = *(_QWORD *)(v3 + 8) - *(_QWORD *)GUID_CONSOLE_LOCKED.Data4;
  if ( v5 )
  {
LABEL_2:
    v4 = -2147024809;
LABEL_20:
    v16 = v4;
    goto LABEL_21;
  }
  v6 = *(_DWORD *)a1[1];
  v22 = v6;
  EnterCriticalSection(&stru_180068A08);
  v24 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v7,
    &v23,
    &v22);
  if ( v23 == qword_180068A38 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
    v4 = -2147023728;
    goto LABEL_20;
  }
  v8 = *(const struct TSSession **)(v23 + 24);
  LeaveCriticalSection(&stru_180068A08);
  v10 = *((_DWORD *)v8 + 254);
  v11 = *(_BYTE *)(v3 + 20) != 0;
  *((_DWORD *)v8 + 254) = v11;
  if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
    McTemplateU0qtt_EventWriteTransfer(v9, (unsigned int)&EVT_Console_Locked, v6, v11, v10 != v11);
  v12 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v12 > 4u && tlgKeywordOn((__int64)v12, 0x20000LL) )
  {
    v22 = v10 != v11;
    LODWORD(v23) = *((_DWORD *)v8 + 254);
    LODWORD(v24) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_18005B0B9,
      v13,
      v14,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22);
  }
  if ( v10 != v11 )
  {
    if ( TsSessionRequiresReevaluationOfAudioInStandby(v8) )
    {
      v18 = off_1800538E0;
      v19 = v6;
      v20 = &v18;
      v15 = QueueGenericWorkItem((__int64 *)&v18);
      v4 = v15;
      if ( v15 < 0 )
      {
        v16 = (unsigned int)v15;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F1,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v16);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
        return v4;
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
