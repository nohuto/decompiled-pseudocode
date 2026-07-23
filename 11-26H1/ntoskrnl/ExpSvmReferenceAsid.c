/*
 * XREFs of ExpSvmReferenceAsid @ 0x1406D6340
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406D540C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D5A14 (ExpReleaseSvmAgentsLock.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rbx
  unsigned __int8 v2; // al
  struct _LIST_ENTRY *Flink; // r10
  ULONG_PTR v4; // r9
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  memset(&v12, 0, sizeof(v12));
  v2 = ExpAcquireSvmAgentsLock(&v12);
  Flink = ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink;
  v4 = 0LL;
  v5 = v2;
  if ( (unsigned int)v1 >= HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) )
  {
    BugCheckParameter4 = 0LL;
LABEL_10:
    if ( (unsigned int)v1 < HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) )
      v4 = *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink->Flink + 3 * v1);
    KeBugCheckEx(0x158u, v1, HIDWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc), v4, BugCheckParameter4);
  }
  v6 = *((_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink->Flink + 3 * v1);
  v7 = (char *)ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Flink + 24 * v1;
  if ( !v6 || (v8 = *((_QWORD *)v7 + 1), v8 < 0) )
  {
    BugCheckParameter4 = *((_QWORD *)v7 + 1);
    goto LABEL_10;
  }
  *((_QWORD *)v7 + 1) = v8 + 1;
  if ( *((_BYTE *)&Flink[1].Flink + 24 * v1) )
    v9 = *(_QWORD *)(v6 + 2024);
  else
    v9 = *(_QWORD *)(v6 + 1544);
  ExpReleaseSvmAgentsLock(&v12, v5);
  return v9;
}
