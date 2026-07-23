/*
 * XREFs of MiReserveEnclavePages @ 0x140343DD0
 * Callers:
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiAppendPageChain @ 0x14044F110 (MiAppendPageChain.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  MiAllocateEnclavePages(
    a2,
    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
    1,
    a3,
    &v5);
  if ( !v6 )
    return 3221225495LL;
  MiAppendPageChain(a1 + 104, &v5);
  return 0LL;
}
