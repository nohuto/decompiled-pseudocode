/*
 * XREFs of PspLookupSyscallProviderByIdNoLock @ 0x1407F34B0
 * Callers:
 *     PspLookupSyscallProviderById @ 0x140617524 (PspLookupSyscallProviderById.c)
 *     PspInsertSyscallProvider @ 0x1407F342C (PspInsertSyscallProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspLookupSyscallProviderByIdNoLock(_QWORD *a1, struct _KTHREAD **a2)
{
  struct _KTHREAD *Flink; // r8
  unsigned int v4; // r9d
  char *v5; // rdx
  signed __int64 StackLimit; // rax
  signed __int64 v7; // rtt

  Flink = (struct _KTHREAD *)ExpPlatformBinaryLock.QueueListEntry.Flink;
  v4 = -1073741275;
  while ( Flink != (struct _KTHREAD *)&ExpPlatformBinaryLock.QueueListEntry )
  {
    v5 = (char *)Flink->Header.WaitListHead.Blink - *a1;
    if ( !v5 )
      v5 = (char *)Flink->SListFaultAddress - a1[1];
    if ( !v5 )
    {
      _m_prefetchw((const void *)&Flink->StackLimit);
      StackLimit = (signed __int64)Flink->StackLimit;
      while ( (unsigned __int64)(StackLimit + 1) > 1 )
      {
        v7 = StackLimit;
        StackLimit = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&Flink->StackLimit,
                       StackLimit + 1,
                       StackLimit);
        if ( v7 == StackLimit )
        {
          *a2 = Flink;
          return 0;
        }
      }
      if ( StackLimit )
        __fastfail(0xEu);
      return (unsigned int)-1073741738;
    }
    Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
  }
  return v4;
}
