/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x140501C70
 * Callers:
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiDecommitLargePoolVa @ 0x1403CD620 (MiDecommitLargePoolVa.c)
 *     MiLogSectionCreate @ 0x14086ED1C (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v6[1] = a1;
  v6[2] = a4;
  v7[0] = v6;
  v6[0] = v4 & 0xFFFFFFFFFFFFFFF0uLL | (a3 >> 1) & 0xF;
  v7[1] = 24LL;
  return EtwTraceKernelEvent((int)v7, 1, 0x20000001u, ((a3 & 1) == 0) | 0x278u, 290462468);
}
