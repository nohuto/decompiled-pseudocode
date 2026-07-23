/*
 * XREFs of ExpSvmDereferenceAsid @ 0x1406D6070
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406D540C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D5A14 (ExpReleaseSvmAgentsLock.c)
 */

void __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // al
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  void *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = ExpAcquireSvmAgentsLock(&LockHandle);
  Flink = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink;
  v4 = v2;
  v5 = *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink->Blink + 3 * v1) - 1LL;
  *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink->Blink + 3 * v1) = v5;
  if ( v5 < 0 && (v5 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    v6 = (void *)*((_QWORD *)&Flink->Flink + 3 * v1);
    *((_QWORD *)&Flink->Flink + 3 * v1) = 0LL;
    --*(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Timer.Processor;
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  ExpReleaseSvmAgentsLock(&LockHandle, v4);
}
