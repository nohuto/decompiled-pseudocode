/*
 * XREFs of imp_WdfIoQueueGetState @ 0x14005F2A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned int *QueueCount,
        unsigned int *DriverCount)
{
  __int64 v7; // rax
  FxIoQueue *flags; // rbx
  unsigned int m_RequestCount; // edx
  unsigned int m_DriverIoCount; // r8d
  __int32 v11; // ecx
  unsigned int v12; // edx
  __int64 result; // rax
  FxIoQueue_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  const _GUID *v18; // [rsp+20h] [rbp-58h]
  FxIoQueue **p_pQueue; // [rsp+50h] [rbp-28h] BYREF
  __int16 v20; // [rsp+58h] [rbp-20h]
  __int16 v21; // [rsp+5Ah] [rbp-1Eh]
  int v22; // [rsp+5Ch] [rbp-1Ch]
  FxIoQueue *pQueue; // [rsp+88h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v7) = 0;
  flags = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    v7 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxIoQueue *)((char *)flags - v7);
  }
  if ( flags->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = flags;
  }
  else
  {
    v21 = v7;
    pQueue = 0LL;
    v22 = 0;
    v14 = flags->FxNonPagedObject::FxObject::__vftable;
    p_pQueue = &pQueue;
    v20 = 4099;
    if ( v14->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pQueue) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v15,
        v16,
        v17,
        v18,
        (const void *)Queue,
        0x1003u,
        flags,
        flags->FxNonPagedObject::FxObject::m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    flags = pQueue;
  }
  m_RequestCount = flags->m_Queue.m_RequestCount;
  m_DriverIoCount = flags->m_DriverIoCount;
  if ( QueueCount )
    *QueueCount = m_RequestCount;
  if ( DriverCount )
    *DriverCount = m_DriverIoCount;
  v11 = pQueue->m_QueueState & 3 | 4;
  if ( m_RequestCount )
    v11 = pQueue->m_QueueState & 3;
  v12 = v11 | 8;
  if ( m_DriverIoCount )
    v12 = v11;
  result = v12;
  if ( pQueue->m_PowerManaged )
  {
    if ( pQueue->m_PowerState != FxIoQueuePowerOn )
      return v12 | 0x10;
  }
  return result;
}
