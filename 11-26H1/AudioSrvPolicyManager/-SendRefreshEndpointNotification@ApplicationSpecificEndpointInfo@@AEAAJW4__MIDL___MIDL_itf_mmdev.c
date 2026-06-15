/*
 * XREFs of ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180049D8C
 * Callers:
 *     ?Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ @ 0x180049CE0 (-Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180049E90 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int *v8; // r14
  unsigned int *i; // rbx
  DWORD CurrentProcessId; // eax
  __int64 v11; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v13[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a3 < 6 || a2 == 2 || a3 == 0x7FFF )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v8 = *(unsigned int **)(a1 + 64);
    v12 = v7;
    for ( i = *(unsigned int **)(a1 + 56); i != v8; ++i )
    {
      v15 = 0LL;
      v13[0] = 32;
      v13[1] = 0x100000;
      CurrentProcessId = GetCurrentProcessId();
      v11 = *i;
      v14 = CurrentProcessId;
      v16 = a2;
      v17 = a3;
      GenerateMediaEvent(v13, v11);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
