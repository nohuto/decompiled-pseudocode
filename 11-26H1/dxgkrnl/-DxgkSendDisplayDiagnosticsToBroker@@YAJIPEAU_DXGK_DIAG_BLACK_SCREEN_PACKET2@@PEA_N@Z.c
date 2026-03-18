/*
 * XREFs of ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401C7600
 * Callers:
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CBFD4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__&DxgkSampleDisplayState_ @ 0x14006DF40 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__-D.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F7EF0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkSendDisplayDiagnosticsToBroker(
        unsigned int a1,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *a2,
        bool *a3)
{
  __int16 v3; // di
  struct _PORT_MESSAGE *v5; // rbx
  int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp-69h] BYREF
  union _LARGE_INTEGER v9; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-59h] BYREF
  struct _PORT_MESSAGE *v11; // [rsp+68h] [rbp-51h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v14[88]; // [rsp+90h] [rbp-29h] BYREF
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v15; // [rsp+128h] [rbp+6Fh] BYREF

  v15 = a2;
  v3 = a1;
  v8 = a1;
  v11 = (struct _PORT_MESSAGE *)operator new[](a1 + 104LL, 0x4B677844u, 256LL);
  v5 = v11;
  if ( v11 )
  {
    memset(v14, 0, sizeof(v14));
    LOBYTE(v12[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v12, 0LL, 0x48u, 0);
    v13[0] = &v15;
    v13[1] = &v8;
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36___DxgkSampleDisplayState_(
      v11,
      v12[1],
      (__int64)v13,
      v3);
    v9.QuadPart = -20000000LL;
    v10 = 88LL;
    v6 = DxgkSendDisplayBrokerMessage(0x20000u, v5, 0LL, (struct _PORT_MESSAGE *)v14, &v10, 0LL, &v9);
    if ( v6 >= 0 )
      *a3 = *(_DWORD *)&v14[80] == 3;
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v12);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2102;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate buffer to hold the SendDisplayDiagnostics ALPC message",
      2102LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v11);
  return (unsigned int)v6;
}
