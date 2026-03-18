/*
 * XREFs of ExpSvmReferenceAsid @ 0x1406D2310
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406D13DC (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D19E4 (ExpReleaseSvmAgentsLock.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rbx
  unsigned __int8 v2; // al
  struct _KTHREAD *Thread; // r10
  ULONG_PTR v4; // r9
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  _DISPATCHER_HEADER *v7; // rcx
  __int64 Flink; // rax
  __int64 v9; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  memset(&v12, 0, sizeof(v12));
  v2 = ExpAcquireSvmAgentsLock(&v12);
  Thread = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread;
  v4 = 0LL;
  v5 = v2;
  if ( (unsigned int)v1 >= *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12] )
  {
    BugCheckParameter4 = 0LL;
LABEL_10:
    if ( (unsigned int)v1 < *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12] )
      v4 = *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread->Header.Lock + 3 * v1);
    KeBugCheckEx(
      0x158u,
      v1,
      *(unsigned int *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[12],
      v4,
      BugCheckParameter4);
  }
  v6 = *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread->Header.Lock + 3 * v1);
  v7 = &ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Thread->Header + v1;
  if ( !v6 || (Flink = (__int64)v7->WaitListHead.Flink, Flink < 0) )
  {
    BugCheckParameter4 = (ULONG_PTR)v7->WaitListHead.Flink;
    goto LABEL_10;
  }
  v7->WaitListHead.Flink = (struct _LIST_ENTRY *)(Flink + 1);
  if ( *((_BYTE *)&Thread->Header.WaitListHead.Blink + 24 * v1) )
    v9 = *(_QWORD *)(v6 + 2024);
  else
    v9 = *(_QWORD *)(v6 + 1544);
  ExpReleaseSvmAgentsLock(&v12, v5);
  return v9;
}
