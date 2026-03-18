/*
 * XREFs of ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401C74F4
 * Callers:
 *     ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140062FD0 (-WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPE.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401CC0B0 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__&DxgkSampleDisplayState_ @ 0x140075D54 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__-D.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F7EF0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 DxgkRequestDisplayRecoveryToBroker(void)
{
  struct _PORT_MESSAGE *v0; // rbx
  unsigned int v1; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3[3]; // [rsp+50h] [rbp-18h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // [rsp+70h] [rbp+8h] BYREF
  __int64 v5; // [rsp+78h] [rbp+10h] BYREF

  v5 = operator new[](0x68uLL, 0x4B677844u, 256LL);
  v0 = (struct _PORT_MESSAGE *)v5;
  if ( v5 )
  {
    LOBYTE(v3[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v3, 0LL, 0x49u, 0);
    v4 = v3[1];
    DisplayScenarioContextHolding(&v4);
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116___DxgkSampleDisplayState_(
      v0,
      v4);
    v1 = DxgkSendDisplayBrokerMessage(0x10000u, v0, 0LL, 0LL, 0LL, 0LL, 0LL);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v3);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2232;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate buffer to hold the RequestDisplayRecovery ALPC message",
      2232LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v1 = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v5);
  return v1;
}
