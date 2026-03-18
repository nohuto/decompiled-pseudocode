/*
 * XREFs of CiSystemUpdateThreadTag @ 0x140002170
 * Callers:
 *     CiSchedulerAddThread @ 0x1400013D0 (CiSchedulerAddThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x140003050 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_14000A0F0 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
