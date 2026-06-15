/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003BD1C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x180041750 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Do_call.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18003BC24 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        DWORD a4)
{
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  const struct _tlgProvider_t *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  struct CApplication *v14; // rbx
  struct CApplication **i; // rcx
  CApplicationManager *v16; // rcx
  int active; // eax
  __int64 v19; // [rsp+48h] [rbp-19h] BYREF
  int v20[2]; // [rsp+50h] [rbp-11h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+60h] [rbp-1h] BYREF
  DWORD v23; // [rsp+68h] [rbp+7h]
  __int64 (__fastcall ***v24)(); // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  struct TSSession *v26; // [rsp+C8h] [rbp+67h] BYREF

  v26 = this;
  v7 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v8;
  v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x20000LL) )
  {
    LODWORD(v26) = a4;
    v19 = a3;
    *(_QWORD *)v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      byte_18005AD88,
      v10,
      v11,
      (_BYTE **)v20,
      (__int64)&v19,
      (__int64)&v26);
  }
  if ( g_AppTypesBlockedTillConsoleUnlocked
    && (g_AppTypesBlockedTillConsoleUnlocked = 0,
        v22 = off_180053598,
        v23 = a4,
        v24 = &v22,
        v12 = QueueGenericWorkItem((__int64 *)&v22),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v12);
  }
  else
  {
    if ( a2 )
    {
      CWindowsPolicyManager::Lock((__int64)v9, v20);
      v26 = 0LL;
      if ( (int)TsSessionFromSessionId(a4, 0, &v26) >= 0 )
      {
        for ( i = (struct CApplication **)*((_QWORD *)v26 + 6); ; ++i )
        {
          if ( i == *((struct CApplication ***)v26 + 7) )
          {
            v14 = 0LL;
            goto LABEL_15;
          }
          if ( *((_QWORD *)*i + 87) == a3 )
            break;
        }
        v14 = *i;
      }
      else
      {
        v14 = 0LL;
      }
LABEL_15:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v20);
      if ( v14 )
      {
        active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v16, v14);
        v7 = active;
        if ( active < 0 )
          AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1442, active);
      }
    }
    v13 = v7;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  return v13;
}
