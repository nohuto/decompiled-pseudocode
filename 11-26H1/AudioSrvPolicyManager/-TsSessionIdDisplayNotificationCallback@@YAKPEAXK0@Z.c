/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180006860
 * Callers:
 *     <none>
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
__int64 __fastcall TsSessionIdDisplayNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  const struct TSSession *v8; // r15
  int v9; // ecx
  int v10; // r12d
  int v11; // r14d
  const struct _tlgProvider_t *v12; // rax
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // [rsp+20h] [rbp-39h]
  int v19[2]; // [rsp+40h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-9h] BYREF
  int v22; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = (int)a1;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v20 = v5;
  if ( a3[4] != 4 )
    goto LABEL_19;
  v6 = *(_QWORD *)a3 - *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
    v6 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4;
  if ( v6 )
  {
LABEL_19:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  }
  else
  {
    v25 = v4;
    EnterCriticalSection(&stru_180068A08);
    *(_QWORD *)v19 = &stru_180068A08;
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
      v7,
      &v26,
      &v25);
    if ( v26 == qword_180068A38 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v19);
      v16 = 0;
      goto LABEL_18;
    }
    v8 = *(const struct TSSession **)(v26 + 24);
    LeaveCriticalSection(&stru_180068A08);
    v10 = *((_DWORD *)v8 + 253);
    v11 = a3[5] != 0;
    *((_DWORD *)v8 + 253) = v11;
    if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
      McTemplateU0qtt_EventWriteTransfer(v9, (unsigned int)&EVT_Session_Display_State, v4, v11, v10 != v11);
    v12 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v12 > 4u && (unsigned __int8)tlgKeywordOn(v12, 0x20000LL) )
    {
      v25 = *((_DWORD *)v8 + 253);
      LODWORD(v26) = v10 != v11;
      v19[0] = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (unsigned int)&unk_18005B11A,
        v13,
        v14,
        (__int64)v19,
        (__int64)&v26,
        (__int64)&v25);
    }
    if ( v10 != v11 && TsSessionRequiresReevaluationOfAudioInStandby(v8) )
    {
      v21 = off_180050110;
      v22 = v4;
      v23 = &v21;
      v15 = QueueGenericWorkItem(&v21);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7C7,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v15,
          v18);
LABEL_18:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
        return v16;
      }
    }
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  return 0LL;
}
