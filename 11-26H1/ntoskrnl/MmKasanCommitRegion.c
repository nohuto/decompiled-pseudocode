/*
 * XREFs of MmKasanCommitRegion @ 0x14052CDC4
 * Callers:
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MmKasanCommitRegion(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // r8d

  v4 = 4656;
  if ( KeGetCurrentIrql() != 2 )
    v4 = 560;
  return (unsigned int)MiMakeZeroedPageTablesEx(
                         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         v4,
                         19,
                         a3) == 0
       ? 0xC000009A
       : 0;
}
