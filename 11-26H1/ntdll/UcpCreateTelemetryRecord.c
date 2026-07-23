/*
 * XREFs of UcpCreateTelemetryRecord @ 0x1801579D4
 * Callers:
 *     UcpFindOrCreateTelemetryRecord @ 0x180157A68 (UcpFindOrCreateTelemetryRecord.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

_QWORD *__fastcall UcpCreateTelemetryRecord(__int64 *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x48uLL);
  if ( result )
  {
    v3 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v4 = *a1;
    ++UcpTriggeredNodeCount;
    *result = v4;
    result[2] = 0LL;
    *((_DWORD *)result + 6) = 0;
    result[1] = v3 - 60001;
    *((_DWORD *)result + 14) = *((_DWORD *)a1 + 2);
    *((_DWORD *)result + 15) = *((_DWORD *)a1 + 3);
    *((_DWORD *)result + 16) = *((_DWORD *)a1 + 4);
    result[6] = v4;
  }
  return result;
}
