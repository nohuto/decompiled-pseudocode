/*
 * XREFs of ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x1800199E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x1800199B0 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18002328C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18003A5B8 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::OnAppStateChanged(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        CApplication *a3,
        int a4,
        unsigned int a5)
{
  CApplicationManager *v8; // r15
  const struct _tlgProvider_t *v9; // rcx
  BOOL v10; // ebx
  struct CApplication *v11; // rdi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const unsigned __int16 *v15; // [rsp+40h] [rbp-10h] BYREF
  CApplicationManager *v16; // [rsp+90h] [rbp+40h] BYREF
  CApplication *v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v16 = this;
  v8 = g_ApplicationManager;
  v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 4u && (unsigned __int8)tlgKeywordOn(v9, 0x8000LL) )
  {
    v18 = a4;
    LODWORD(v16) = a5;
    v17 = a3;
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_18005B787,
      v13,
      v14,
      (__int64)&v15,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v18);
  }
  v10 = 0;
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 32));
  v15 = (const unsigned __int16 *)((char *)v8 + 32);
  v17 = 0LL;
  v18 = 0;
  LODWORD(v16) = 0;
  if ( CApplicationManager::GetApplication(v8, a2, (unsigned __int64)a3, a5, &v17, 1, &v18) >= 0 )
  {
    v11 = v17;
    CApplication::UpdateAppState(v17, a4, (int *)&v16);
    v10 = v18 || (_DWORD)v16;
  }
  if ( v8 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 32));
  if ( v10 )
    CApplicationManager::OnApplicationInteractivityChanged(v8, v11);
}
