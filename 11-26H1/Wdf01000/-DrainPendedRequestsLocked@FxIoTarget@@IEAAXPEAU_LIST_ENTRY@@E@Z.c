/*
 * XREFs of ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x14002132C
 * Callers:
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x140021140 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140022990 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x140046A60 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x140062D48 (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  FxIrpQueue *p_m_PendedQueue; // r14
  bool v7; // zf
  __int64 p_Blink; // rax
  _LIST_ENTRY *v9; // rdx
  __int64 v10; // rcx
  FxIrpQueue *v11; // r8
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rdi
  volatile signed __int32 *v14; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  const void *_a1; // rdx

  p_m_PendedQueue = &this->m_PendedQueue;
LABEL_2:
  v7 = p_m_PendedQueue->m_Queue.Flink == (_LIST_ENTRY *)p_m_PendedQueue;
  p_Blink = (__int64)&p_m_PendedQueue->m_Queue.Flink[-11].Blink;
  while ( 1 )
  {
    if ( v7 )
      p_Blink = 0LL;
    if ( !p_Blink )
      break;
    v9 = (_LIST_ENTRY *)(p_Blink + 168);
    v10 = _InterlockedExchange64((volatile __int64 *)(p_Blink + 104), 0LL);
    v11 = *(FxIrpQueue **)(p_Blink + 168);
    if ( v10 )
    {
      if ( v11->m_Queue.Blink != v9 )
        goto LABEL_14;
      v12 = *(_LIST_ENTRY **)(p_Blink + 176);
      if ( v12->Flink != v9 )
        goto LABEL_14;
      v12->Flink = &v11->m_Queue;
      v11->m_Queue.Blink = v12;
      *(_QWORD *)(p_Blink + 176) = p_Blink + 168;
      v9->Flink = v9;
      --p_m_PendedQueue->m_RequestCount;
      v13 = *(_LIST_ENTRY **)(p_Blink + 144);
      *(_QWORD *)(p_Blink + 144) = 0LL;
      v13->Flink = v13;
      v14 = (volatile signed __int32 *)&v13[-8].Blink;
      v13->Blink = v13;
      Flink = v13[2].Flink;
      ++BYTE3(Flink[4].Flink);
      Flink[11].Blink = (_LIST_ENTRY *)((char *)Flink[11].Blink + 72);
      BYTE4(v13[5].Blink) &= ~2u;
      if ( !RequestWillBeResent
        || FxRequestBase::CancelTimer((FxRequestBase *)&v13[-8].Blink)
        && _InterlockedExchangeAdd(v14 + 52, 0xFFFFFFFF) == 1 )
      {
        FxIoTarget::ClearCompletedRequestVerifierFlags(this, (FxRequestBase *)&v13[-8].Blink);
        Blink = RequestListHead->Blink;
        if ( Blink->Flink == RequestListHead )
        {
          v13->Flink = RequestListHead;
          v13->Blink = Blink;
          Blink->Flink = v13;
          RequestListHead->Blink = v13;
          goto LABEL_2;
        }
LABEL_14:
        __fastfail(3u);
      }
      *(_DWORD *)(*((_QWORD *)v14 + 19) + 48LL) = -1073741536;
      *((_BYTE *)v14 + 212) |= 1u;
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        if ( !*((_WORD *)v14 + 5) || (_a2 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          _a2 = &v13[-8].Blink;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x10u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
      }
      goto LABEL_2;
    }
    p_Blink = (__int64)&v11[-5].m_RequestCount;
    v7 = v11 == p_m_PendedQueue;
  }
}
