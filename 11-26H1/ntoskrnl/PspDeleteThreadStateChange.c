/*
 * XREFs of PspDeleteThreadStateChange @ 0x140B21690
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 */

LONG_PTR __fastcall PspDeleteThreadStateChange(__int64 a1)
{
  __int64 v1; // r8

  v1 = *(unsigned int *)(a1 + 20);
  if ( (_DWORD)v1 )
    PsMultiResumeThread(*(_QWORD *)a1, 0LL, v1);
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63547350u);
}
