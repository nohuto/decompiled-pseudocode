/*
 * XREFs of MiReservePageHash @ 0x140714C3C
 * Callers:
 *     MiPagefileMaximumChangePrepare @ 0x1406FDBD4 (MiPagefileMaximumChangePrepare.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 */

unsigned __int64 __fastcall MiReservePageHash(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 result; // rax

  result = MiReservePtes(
             (__int64)&stru_140E366D8.WaitBlockList,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140E360CC) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140E360CC) & 0xFFF) != 0),
             (a1 * (unsigned __int64)(unsigned int)dword_140E360CC) >> 12,
             a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
