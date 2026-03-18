/*
 * XREFs of FsRtlDedupChangeUninit @ 0x14078FA70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     McTemplateK0jjq_EtwWriteTransfer @ 0x1405B7998 (McTemplateK0jjq_EtwWriteTransfer.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlDedupChangeUninit(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  struct _KTHREAD *i; // rcx
  char *v7; // rdx
  __int64 v8; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+28h] [rbp-10h]

  ExAcquireResourceExclusiveLite((PERESOURCE)&VslpReservedTransferLock.UserWaitTime, 1u);
  for ( i = *(struct _KTHREAD **)&VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
        i != (struct _KTHREAD *)&VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    v7 = (char *)i->Header.WaitListHead.Blink - *a2;
    if ( !v7 )
      v7 = (char *)i->SListFaultAddress - a2[1];
    v8 = *(_QWORD *)&i->Header.Lock;
    if ( !v7 )
    {
      if ( *(struct _KTHREAD **)(v8 + 8) != i
        || (Flink = i->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != i) )
      {
        __fastfail(3u);
      }
      Flink->Flink = (struct _LIST_ENTRY *)v8;
      *(_QWORD *)(v8 + 8) = Flink;
      ExFreePoolWithTag(i, 0x68436544u);
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.UserWaitTime);
  if ( ((__int64)VslpReservedTransferLock.AbWaitObject & 8) != 0 )
  {
    LODWORD(v13) = *a1;
    McTemplateK0jjq_EtwWriteTransfer(v11, v10, v12, (__int64)a2, a3, v13);
  }
}
