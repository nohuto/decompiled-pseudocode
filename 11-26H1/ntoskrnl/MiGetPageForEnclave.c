/*
 * XREFs of MiGetPageForEnclave @ 0x140343950
 * Callers:
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 */

__int64 __fastcall MiGetPageForEnclave(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  v1 = MiUnlinkPageChainHead(a1 + 104);
  if ( v1 )
    return (v1 + 0x220000000000LL) / 48;
  MiAllocateEnclavePages(
    v2,
    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
    0,
    1LL,
    &v4);
  v1 = MiUnlinkPageChainHead(&v4);
  if ( v1 )
    return (v1 + 0x220000000000LL) / 48;
  else
    return -1LL;
}
