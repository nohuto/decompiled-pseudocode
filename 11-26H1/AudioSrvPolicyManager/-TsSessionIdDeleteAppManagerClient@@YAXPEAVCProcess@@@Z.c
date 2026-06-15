/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180044584
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x18002B000 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _lambda_8a34b5a072e294654496d34c017ecfd7_::operator() @ 0x180043880 (_lambda_8a34b5a072e294654496d34c017ecfd7_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdDeleteAppManagerClient(struct CProcess *a1)
{
  struct CProcess *v1; // [rsp+30h] [rbp+8h] BYREF
  struct CProcess **v2; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  CWindowsPolicyManager::Lock((__int64)a1, &v3);
  v2 = &v1;
  lambda_8a34b5a072e294654496d34c017ecfd7_::operator()((__int64 **)&v2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v3);
}
