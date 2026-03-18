/*
 * XREFs of ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400B1A40
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B176C (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1400B1D30 (-Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x140161E00 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x14017707C (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x140177160 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x14018C844 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x14018C89C (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1403416E8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall UmfdHostSendCompleteWaitReceive(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct UmfdTls *v10; // rsi
  int v11; // eax
  __int64 SessionState; // rax
  CWorkItemQueue **v13; // r15
  struct CWorkItemQueue::CWorkItem **v14; // r14
  struct CWorkItemQueue::CWorkItem *v15; // rbp
  struct CWorkItemQueue::CWorkItem **v16; // rdi
  struct CWorkItemQueue::CWorkItem **v17; // r12
  PSLIST_ENTRY v18; // rax
  __int64 v19; // r9
  struct CWorkItemQueue::CWorkItem *v20; // rbx
  unsigned int v21; // ebp
  unsigned int v22; // ebx
  CWorkItemQueue *v24; // rdi
  PSLIST_ENTRY v25; // rax
  struct CWorkItemQueue::CWorkItem *v26; // rax
  struct CWorkItemQueue::CWorkItem **RequestContext; // rax
  struct UmfdTls *v28; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+20h] [rbp-38h]
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF

  v2 = (int)a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  v7 = v6 + 8;
  v8 = -v6;
  v9 = v7 & -(__int64)(v8 != 0);
  if ( !v9 )
    return 3221225495LL;
  v10 = *(struct UmfdTls **)((v7 & -(__int64)(v8 != 0)) + 0x138);
  if ( !v10 )
  {
    v28 = UmfdTls::Create();
    *(_QWORD *)(v9 + 312) = v28;
    v10 = v28;
    if ( !v28 )
      return 3221225495LL;
  }
  if ( (unsigned int)v2 <= 3 )
  {
    v11 = *((_DWORD *)v10 + 2);
    if ( v11 == -1 )
    {
      *((_DWORD *)v10 + 2) = v2;
LABEL_8:
      SessionState = W32GetSessionState(v4, v8, v5);
      _mm_lfence();
      v13 = *(CWorkItemQueue ***)(*(_QWORD *)(SessionState + 104) + 8 * v2 + 48);
      if ( !v13 )
        return 3221227264LL;
      v14 = (struct CWorkItemQueue::CWorkItem **)*((_QWORD *)v10 + 2);
      if ( v14 )
      {
        v31 = 0LL;
        v15 = *v14;
        if ( !*v14 )
          return (unsigned int)-1073741811;
        v16 = v14;
      }
      else
      {
        RequestContext = (struct CWorkItemQueue::CWorkItem **)UmfdCreateRequestContext();
        v16 = RequestContext;
        if ( !RequestContext )
          return 3221225495LL;
        v31 = 0LL;
        v15 = 0LL;
        if ( *RequestContext )
        {
          v22 = -1073741811;
          goto LABEL_20;
        }
      }
      v17 = v16;
      if ( !v15 )
      {
        v20 = CWorkItemQueue::WaitForWorkItem(*v13);
        goto LABEL_16;
      }
      *v14 = 0LL;
      KeResetEvent(**((PRKEVENT **)*v13 + 1));
      _InterlockedOr(v29, 0);
      v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)*v13 + 1);
      v20 = (struct CWorkItemQueue::CWorkItem *)v18;
      _InterlockedOr(v29, 0);
      if ( v18 )
      {
        *((_DWORD *)&v18->Next + 2) = 2;
LABEL_15:
        CMultipleConsumerWorkQueue::CWaitableWorkItem::Complete(v15);
LABEL_16:
        if ( v20 )
        {
          v21 = *((_DWORD *)v20 + 7);
          if ( v21 > 8 )
          {
            if ( CWorkItemQueue::QueueWorkItem(*v13, v20) )
            {
              v22 = -1073741789;
            }
            else
            {
              CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(v20);
              v22 = -1073740032;
            }
            goto LABEL_20;
          }
          *v16 = v20;
          memmove(&v31, *((const void **)v20 + 2), v21);
          v22 = 0;
          if ( v21 == 8 )
          {
            if ( !v14 )
              *((_QWORD *)v10 + 2) = v16;
            *((_QWORD *)v10 + 3) = v31;
            return v22;
          }
        }
        v22 = -1073741823;
LABEL_20:
        if ( !v14 )
          EngFreeMem(v16);
        return v22;
      }
      if ( *(_BYTE *)*v13 )
        goto LABEL_15;
      v30 = 0LL;
      LOBYTE(v19) = 1;
      *((_DWORD *)v15 + 2) = 3;
      v24 = *v13;
      if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                           **(_QWORD **)(*((_QWORD *)v15 + 5) + 8LL),
                           **((_QWORD **)*v13 + 1),
                           6LL,
                           v19,
                           v30) == 192 )
      {
        KeSetEvent(**((PRKEVENT **)v24 + 1), 1, 0);
        v26 = CWorkItemQueue::DequeueWorkItem(v24);
      }
      else
      {
        v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v24 + 1);
        v20 = (struct CWorkItemQueue::CWorkItem *)v25;
        _InterlockedOr(v29, 0);
        if ( v25 )
        {
          *((_DWORD *)&v25->Next + 2) = 2;
LABEL_31:
          v16 = v17;
          goto LABEL_16;
        }
        v26 = CWorkItemQueue::WaitForWorkItem(v24);
      }
      v20 = v26;
      goto LABEL_31;
    }
    if ( v11 == (_DWORD)v2 )
      goto LABEL_8;
  }
  return 3221225485LL;
}
