/*
 * XREFs of DxgkSampleDisplayState @ 0x14041665C
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__&DxgkSampleDisplayState_ @ 0x14005A994 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__-.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__&DxgkSampleDisplayState_ @ 0x14006DF40 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x140075CAC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__&DxgkSampleDisplayState_ @ 0x140075D54 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__&DxgkSampleDisplayState_ @ 0x140075DF0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__-.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSampleDisplayState(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 408LL))(a1);
  v6 = v4;
  if ( v4 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry2(2LL, ProcessSessionId, v6);
    WdLogGlobalForLineNumber = 607;
    v10 = PsGetCurrentProcess(v9);
    v11 = PsGetProcessSessionId(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to sample display state in session 0x%I64x, (Status = 0x%I64x).",
      v11,
      v6,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v6;
}
