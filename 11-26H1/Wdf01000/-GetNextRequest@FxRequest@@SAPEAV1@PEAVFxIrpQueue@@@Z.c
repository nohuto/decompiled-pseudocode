/*
 * XREFs of ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x14004ECC0
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004DD20 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004E7B8 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

_LIST_ENTRY **__fastcall FxRequest::GetNextRequest(FxIrpQueue *IrpQueue)
{
  bool v2; // zf
  _LIST_ENTRY **result; // rax
  FxRequestContext **v4; // rcx
  __int64 v5; // rdx
  FxRequestContext *v6; // r9
  FxRequestTimer *v7; // rdx
  _SINGLE_LIST_ENTRY *v8; // rbx
  _SINGLE_LIST_ENTRY *Next; // rcx

  v2 = IrpQueue->m_Queue.Flink == (_LIST_ENTRY *)IrpQueue;
  result = &IrpQueue->m_Queue.Flink[-11].Blink;
  while ( 1 )
  {
    if ( v2 )
      result = 0LL;
    if ( !result )
      break;
    v4 = (FxRequestContext **)(result + 21);
    v5 = _InterlockedExchange64((volatile __int64 *)result + 13, 0LL);
    v6 = (FxRequestContext *)result[21];
    if ( v5 )
    {
      if ( *(FxRequestContext ***)&v6->m_CompletionParams.Size != v4
        || (v7 = (FxRequestTimer *)result[22], *(FxRequestContext ***)&v7->Timer.m_Timer.m_Period != v4) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)&v7->Timer.m_Timer.m_Period = v6;
      *(_QWORD *)&v6->m_CompletionParams.Size = v7;
      result[22] = (_LIST_ENTRY *)(result + 21);
      *v4 = (FxRequestContext *)v4;
      --IrpQueue->m_RequestCount;
      v8 = (_SINGLE_LIST_ENTRY *)result[18];
      if ( LODWORD(v8->Next) == 1 )
        v8[1].Next = 0LL;
      result[18] = 0LL;
      Next = v8[-15].Next;
      v8[13].Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))Next[2].Next)(
        v8 - 15,
        1969583441LL,
        2062LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      return (_LIST_ENTRY **)&v8[-15];
    }
    result = (_LIST_ENTRY **)&v6[-2].m_CompletionParams.IoStatus.Information;
    v2 = v6 == (FxRequestContext *)IrpQueue;
  }
  return result;
}
