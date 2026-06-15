/*
 * XREFs of ?OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800EC2E0
 * Callers:
 *     _lambda_2123d8e56b275a4b963be45688bccc2c_::operator() @ 0x1800EA350 (_lambda_2123d8e56b275a4b963be45688bccc2c_--operator().c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOrVerifyTargetEndpointId@BluetoothBroadcastSession@@QEAAJPEBGPEA_N@Z @ 0x1800EB434 (-AddOrVerifyTargetEndpointId@BluetoothBroadcastSession@@QEAAJPEBGPEA_N@Z.c)
 *     ?RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800ED1F0 (-RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothBroadcastProvider::OnBluetoothRenderEndpointActivation(
        BluetoothBroadcastProvider *this,
        char *a2,
        struct IPropertyStore *a3,
        bool *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  BluetoothBroadcastSession *BroadcastSession; // rax
  const char *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+18h] BYREF

  *(_OWORD *)pvar = 0LL;
  v16 = 0LL;
  try
  {
    v7 = ((__int64 (*)(void))a3->lpVtbl->GetValue)();
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 65
        && LODWORD(pvar[1]) == 36
        && *(_QWORD *)(v16 + 4) == (_QWORD)BLUETOOTH_AUDIO_BROADCAST_PROVIDER
        && *(_QWORD *)(v16 + 12) == _mm_srli_si128((__m128i)BLUETOOTH_AUDIO_BROADCAST_PROVIDER, 8).m128i_u64[0] )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
        BroadcastSession = (BluetoothBroadcastSession *)BluetoothBroadcastProvider::RetrieveBroadcastSession(
                                                          this,
                                                          v16 + 20);
        v13 = BluetoothBroadcastSession::AddOrVerifyTargetEndpointId(BroadcastSession, a2, a4, v12);
        v14 = v13;
        if ( v13 >= 0 )
        {
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
          PropVariantClear(pvar);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x25E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
            (const char *)(unsigned int)v13);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
          PropVariantClear(pvar);
          result = v14;
        }
      }
      else
      {
        PropVariantClear(pvar);
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x256,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v7);
      PropVariantClear(pvar);
      result = v8;
    }
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x262,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
                     v9);
    return (unsigned int)v18;
  }
  return result;
}
