/*
 * XREFs of PsWaitForAllProcesses @ 0x140800154
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

char PsWaitForAllProcesses()
{
  unsigned int v0; // ebp
  LARGE_INTEGER v1; // rbx
  void *i; // rcx
  __int64 NextProcess; // rax
  void *v4; // rsi
  NTSTATUS v5; // edi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -100000LL;
  v0 = 0;
  v1.QuadPart = -100000LL;
LABEL_2:
  for ( i = 0LL; ; i = (void *)NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    v4 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    if ( (*(_DWORD *)(NextProcess + 1532) & 0x1000) == 0
      && (PVOID)NextProcess != PsIdleProcess
      && (*(_DWORD *)(NextProcess + 500) & 4) != 0
      && (*(_DWORD *)(NextProcess + 1532) & 0x40000000) == 0
      && *(_QWORD *)(NextProcess + 768) )
    {
      ObfReferenceObjectWithTag((PVOID)NextProcess, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, &Timeout);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      if ( v5 == 258 )
      {
        v1.QuadPart *= 2LL;
        ++v0;
        Timeout = v1;
        if ( v0 > 0xD )
          return 0;
      }
      goto LABEL_2;
    }
  }
  return 1;
}
