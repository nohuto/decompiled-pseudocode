/*
 * XREFs of EtwpCreateActivityId @ 0x140466D9C
 * Callers:
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 */

void *__fastcall EtwpCreateActivityId(signed __int64 *a1, char a2)
{
  volatile signed __int64 *EtwSupport; // rbx
  signed __int64 v4; // rax
  signed __int64 *v5; // rcx

  EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
  v4 = _InterlockedIncrement64(EtwSupport + 1);
  v5 = a1 + 1;
  if ( a2 )
  {
    RtlWriteULong64ToUser(v5, v4);
    return (void *)RtlCopyToUser(a1, (void *)EtwSupport, 8uLL);
  }
  else
  {
    *v5 = v4;
    return RtlCopyVolatileMemory(a1, (const void *)EtwSupport, 8uLL);
  }
}
