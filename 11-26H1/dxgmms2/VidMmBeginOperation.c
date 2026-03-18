/*
 * XREFs of VidMmBeginOperation @ 0x140110260
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidMmBeginOperation(LARGE_INTEGER *a1, LARGE_INTEGER a2, LARGE_INTEGER a3, LARGE_INTEGER a4)
{
  __int64 result; // rax

  memset(&a1[34], 0, 0x90uLL);
  a1[31] = a2;
  a1[32] = a3;
  a1[33] = a4;
  a1[36] = KeQueryPerformanceCounter(0LL);
  if ( a4.QuadPart )
    result = *(unsigned int *)(a4.QuadPart + 48);
  else
    result = *(_BYTE *)(a2.QuadPart + 312) & 7;
  a1[34].LowPart = result;
  return result;
}
