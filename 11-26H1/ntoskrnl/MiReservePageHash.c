/*
 * XREFs of MiReservePageHash @ 0x14070FF40
 * Callers:
 *     MiPagefileMaximumChangePrepare @ 0x1406F8F04 (MiPagefileMaximumChangePrepare.c)
 *     MiCreatePagefile @ 0x14086B0C0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 */

unsigned __int64 __fastcall MiReservePageHash(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 result; // rax

  result = MiReservePtes(
             (__int64)&stru_140E36558.WaitBlockList,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140E35F4C) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140E35F4C) & 0xFFF) != 0),
             (a1 * (unsigned __int64)(unsigned int)dword_140E35F4C) >> 12,
             a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
