/*
 * XREFs of TriggerRenderAdapterPairingChangedWnf @ 0x1401D04AC
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198440 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkGetConsoleSessionId @ 0x1402050CC (DxgkGetConsoleSessionId.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x14033698C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 TriggerRenderAdapterPairingChangedWnf()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rdi
  int updated; // eax
  unsigned int ConsoleSessionId; // [rsp+50h] [rbp+7h]
  PVOID Object; // [rsp+58h] [rbp+Fh] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp+17h] BYREF
  char v10; // [rsp+90h] [rbp+47h]

  ConsoleSessionId = DxgkGetConsoleSessionId();
  v10 = 0;
  if ( !(unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcess = PsGetCurrentProcess(v0);
    if ( (unsigned int)PsGetProcessSessionId(CurrentProcess) != ConsoleSessionId )
    {
      Object = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      v3 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
             *((DXGSESSIONMGR **)Global + 123),
             ConsoleSessionId,
             (struct _KPROCESS **)&Object);
      v4 = v3;
      if ( v3 < 0 )
      {
        WdLogSingleEntry2(2LL, ConsoleSessionId, v3);
        WdLogGlobalForLineNumber = 5008;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).",
          ConsoleSessionId,
          v4,
          0LL,
          0LL,
          0LL);
        goto LABEL_8;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
  }
  updated = ZwUpdateWnfStateData(&WNF_DX_RENDER_ADAPTER_PAIRING_CHANGED, 0LL, 0LL);
  v4 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5030;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_RENDER_ADAPTER_PAIRING_CHANGED WNF, Status = 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_8:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return (unsigned int)v4;
}
