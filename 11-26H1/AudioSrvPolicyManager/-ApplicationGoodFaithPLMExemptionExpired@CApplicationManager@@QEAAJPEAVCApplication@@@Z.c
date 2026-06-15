/*
 * XREFs of ?ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18003B5BC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call @ 0x18003AB90 (std--_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800388B0 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplicationGoodFaithPLMExemptionExpired(
        struct _RTL_CRITICAL_SECTION *this,
        struct CApplication *a2)
{
  CApplicationManager *v3; // rbx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  _BYTE *v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = this;
  v3 = g_ApplicationManager;
  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 0x8000LL) )
  {
    LODWORD(v9) = *((_DWORD *)a2 + 53);
    v10 = *((_QWORD *)a2 + 87);
    v11 = (_BYTE *)*((_QWORD *)a2 + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v5,
      byte_18005ACA8,
      v5,
      v6,
      &v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 32);
  EnterCriticalSection(v7);
  v9 = v7;
  LODWORD(v7) = CApplication::GoodFaithPLMExemptionExpired(a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return (unsigned int)v7;
}
