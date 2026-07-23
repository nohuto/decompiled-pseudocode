/*
 * XREFs of TpCallbackMayRunLong @ 0x18003F020
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 * Callees:
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18003F4EC (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpCallbackMayRunLong(PTP_CALLBACK_INSTANCE Instance)
{
  __int64 v1; // rdx
  _TPP_CLEANUP_GROUP_MEMBER *CleanupGroupMember; // rbx
  _TP_POOL *Pool; // rbx
  signed __int32 v5; // edi
  signed __int64 Exchange; // rax
  signed __int64 v7; // rtt
  _TP_ALPC *AlpcWorkItem; // rcx
  NTSTATUS result; // eax
  NTSTATUS v10; // ecx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+38h] [rbp+10h]

  if ( !Instance || Instance->CallbackRunType )
  {
    TppRaiseInvalidParameter(Instance, v1, Instance);
LABEL_20:
    v10 = -1073741811;
    goto LABEL_16;
  }
  CleanupGroupMember = Instance->CleanupGroupMember;
  if ( CleanupGroupMember )
    Pool = CleanupGroupMember->Pool;
  else
    Pool = Instance->Pool;
  if ( !Pool )
    goto LABEL_20;
  if ( TppPoolpSerializedPool != Pool )
  {
    v5 = _InterlockedDecrement(&Pool->AvailableWorkerCount);
    _InterlockedIncrement(&Pool->LongRunningWorkerCount);
    _m_prefetchw((const void *)&Pool->QueueState);
    Exchange = Pool->QueueState.Exchange;
    v12 = Exchange;
    do
    {
      LODWORD(v12) = ((__int16)Exchange + 1) ^ (Exchange ^ ((__int16)Exchange + 1)) & 0xFFFF0000;
      v7 = Exchange;
      Exchange = _InterlockedCompareExchange64(&Pool->QueueState.Exchange, v12, Exchange);
      v12 = Exchange;
    }
    while ( v7 != Exchange );
    Instance->CallbackEpilogFlags |= 0x10u;
    AlpcWorkItem = Instance->AlpcWorkItem;
    Instance->CallbackRunType = TppCallbackRunTypeLong;
    if ( AlpcWorkItem )
      TppFastAlpcAdjustConcurrencyCount();
    result = 0;
    if ( !v5 )
    {
      WorkerFactoryInformation = 1;
      return NtSetInformationWorkerFactory(
               Pool->WorkerFactory,
               WorkerFactoryCallbackType,
               &WorkerFactoryInformation,
               4u);
    }
    return result;
  }
  v10 = -1073741637;
LABEL_16:
  result = 0;
  if ( v10 != -1073741637 )
    return v10;
  return result;
}
