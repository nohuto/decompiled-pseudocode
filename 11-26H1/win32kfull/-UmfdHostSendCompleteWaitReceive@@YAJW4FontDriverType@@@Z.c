/*
 * XREFs of ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400D0F00
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D0C18 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CE724 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CFBA4 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1400D11F0 (-Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401A6804 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1401BFDB4 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1401C24A0 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x14034EAB8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall UmfdHostSendCompleteWaitReceive(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct UmfdTls *v9; // rdi
  int v10; // eax
  __int64 SessionState; // rax
  CWorkItemQueue **v12; // r15
  struct CWorkItemQueue::CWorkItem **v13; // r14
  struct CWorkItemQueue::CWorkItem *v14; // rbp
  struct CWorkItemQueue::CWorkItem **v15; // rsi
  struct CWorkItemQueue::CWorkItem **v16; // r12
  PSLIST_ENTRY v17; // rax
  __int64 v18; // r9
  struct CWorkItemQueue::CWorkItem *v19; // rbx
  unsigned int v20; // ebp
  unsigned int v21; // ebx
  CWorkItemQueue *v23; // r13
  PSLIST_ENTRY v24; // rax
  struct CWorkItemQueue::CWorkItem *v25; // rax
  struct CWorkItemQueue::CWorkItem **RequestContext; // rax
  struct UmfdTls *v27; // rax
  signed __int32 v28[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+68h] [rbp+10h] BYREF

  v1 = (int)a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = v5 + 8;
  v7 = -v5;
  v8 = v6 & -(__int64)(v7 != 0);
  if ( !v8 )
    return 3221225495LL;
  v9 = *(struct UmfdTls **)((v6 & -(__int64)(v7 != 0)) + 0x138);
  if ( !v9 )
  {
    v27 = UmfdTls::Create();
    *(_QWORD *)(v8 + 312) = v27;
    v9 = v27;
    if ( !v27 )
      return 3221225495LL;
  }
  if ( (unsigned int)v1 <= 3 )
  {
    v10 = *((_DWORD *)v9 + 2);
    if ( v10 == -1 )
    {
      *((_DWORD *)v9 + 2) = v1;
LABEL_8:
      SessionState = W32GetSessionState(v3, v7, v4);
      _mm_lfence();
      v12 = *(CWorkItemQueue ***)(*(_QWORD *)(SessionState + 104) + 8 * v1 + 48);
      if ( !v12 )
        return 3221227264LL;
      v13 = (struct CWorkItemQueue::CWorkItem **)*((_QWORD *)v9 + 2);
      if ( v13 )
      {
        v14 = *v13;
        v29 = 0LL;
        if ( !v14 )
          return (unsigned int)-1073741811;
        *v13 = 0LL;
        v15 = v13;
        v16 = v13;
        KeResetEvent(**((PRKEVENT **)*v12 + 1));
        _InterlockedOr(v28, 0);
        v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)*v12 + 1);
        v19 = (struct CWorkItemQueue::CWorkItem *)v17;
        _InterlockedOr(v28, 0);
        if ( v17 )
        {
          *((_DWORD *)&v17->Next + 2) = 2;
LABEL_13:
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Complete(v14);
          goto LABEL_14;
        }
        if ( *(_BYTE *)*v12 )
          goto LABEL_13;
        *((_DWORD *)v14 + 2) = 3;
        LOBYTE(v18) = 1;
        v23 = *v12;
        if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                             **(_QWORD **)(*((_QWORD *)v14 + 5) + 8LL),
                             **((_QWORD **)*v12 + 1),
                             6LL,
                             v18,
                             0LL) == 192 )
        {
          KeSetEvent(**((PRKEVENT **)v23 + 1), 1, 0);
          v25 = CWorkItemQueue::DequeueWorkItem((union _SLIST_HEADER *)v23);
        }
        else
        {
          v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v23 + 1);
          v19 = (struct CWorkItemQueue::CWorkItem *)v24;
          _InterlockedOr(v28, 0);
          if ( v24 )
          {
            *((_DWORD *)&v24->Next + 2) = 2;
            goto LABEL_14;
          }
          v25 = CWorkItemQueue::WaitForWorkItem(v23);
        }
        v19 = v25;
      }
      else
      {
        RequestContext = (struct CWorkItemQueue::CWorkItem **)UmfdCreateRequestContext();
        v15 = RequestContext;
        if ( !RequestContext )
          return 3221225495LL;
        v29 = 0LL;
        if ( *RequestContext )
        {
          v21 = -1073741811;
          goto LABEL_18;
        }
        v16 = RequestContext;
        v19 = CWorkItemQueue::WaitForWorkItem(*v12);
      }
LABEL_14:
      if ( v19 )
      {
        v20 = *((_DWORD *)v19 + 7);
        if ( v20 > 8 )
        {
          if ( CWorkItemQueue::QueueWorkItem(*v12, v19) )
          {
            v21 = -1073741789;
          }
          else
          {
            CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(v19);
            v21 = -1073740032;
          }
          goto LABEL_18;
        }
        *v15 = v19;
        memmove(&v29, *((const void **)v19 + 2), v20);
        v21 = 0;
        if ( v20 == 8 )
        {
          if ( !v13 )
            *((_QWORD *)v9 + 2) = v16;
          *((_QWORD *)v9 + 3) = v29;
          return v21;
        }
      }
      v21 = -1073741823;
LABEL_18:
      if ( !v13 )
        EngFreeMem(v15);
      return v21;
    }
    if ( v10 == (_DWORD)v1 )
      goto LABEL_8;
  }
  return 3221225485LL;
}
