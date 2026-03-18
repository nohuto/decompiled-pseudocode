/*
 * XREFs of ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CFBA4
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400D0F00 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CE724 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::WaitForWorkItem(CWorkItemQueue *this)
{
  struct CWorkItemQueue::CWorkItem *result; // rax
  struct CWorkItemQueue::CWorkItem *v3; // rdi
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF

  result = CWorkItemQueue::DequeueWorkItem((union _SLIST_HEADER *)this);
  if ( !result && !*(_BYTE *)this )
  {
    while ( 1 )
    {
      if ( KeWaitForSingleObject(**((PVOID **)this + 1), UserRequest, 1, 0, 0LL) == 192 )
      {
LABEL_4:
        KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
        return CWorkItemQueue::DequeueWorkItem((union _SLIST_HEADER *)this);
      }
      result = CWorkItemQueue::DequeueWorkItem((union _SLIST_HEADER *)this);
      if ( result )
        return result;
      if ( *(_BYTE *)this )
        return CWorkItemQueue::DequeueWorkItem((union _SLIST_HEADER *)this);
      KeResetEvent(**((PRKEVENT **)this + 1));
      _InterlockedOr(v4, 0);
      v3 = CWorkItemQueue::DequeueWorkItem((union _SLIST_HEADER *)this);
      if ( v3 )
        break;
      if ( *(_BYTE *)this )
        goto LABEL_4;
    }
    KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
    return v3;
  }
  return result;
}
