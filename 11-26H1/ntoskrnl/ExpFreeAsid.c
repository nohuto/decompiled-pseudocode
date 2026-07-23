/*
 * XREFs of ExpFreeAsid @ 0x1406D5704
 * Callers:
 *     ExFreeSvmAsid @ 0x1404C7CDC (ExFreeSvmAsid.c)
 *     IommupPasidDeviceDelete @ 0x14058AC50 (IommupPasidDeviceDelete.c)
 *     ExFreeAsid @ 0x1406D5168 (ExFreeAsid.c)
 *     ExpAssignPasid @ 0x1408470D8 (ExpAssignPasid.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406D540C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D5A14 (ExpReleaseSvmAgentsLock.c)
 */

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1, void *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rdx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v7; // rcx
  int v8; // ebx
  LONG_PTR result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = ExpAcquireSvmAgentsLock(&LockHandle);
  Flink = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink;
  v7 = *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink->Blink + 3 * v2) - 1LL;
  *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink->Blink + 3 * v2) = v7;
  if ( v7 )
  {
    v5 = 0x8000000000000000uLL;
    *((_QWORD *)&Flink->Blink + 3 * v2) = v7 | 0x8000000000000000uLL;
    v8 = 0;
  }
  else
  {
    *((_QWORD *)&Flink->Flink + 3 * v2) = 0LL;
    v8 = 1;
    --*(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Timer.Processor;
  }
  LOBYTE(v5) = v4;
  result = ExpReleaseSvmAgentsLock(&LockHandle, v5);
  if ( v8 == 1 )
  {
    if ( a2 )
      return ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  }
  return result;
}
