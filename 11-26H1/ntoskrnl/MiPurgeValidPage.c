/*
 * XREFs of MiPurgeValidPage @ 0x1404AB41C
 * Callers:
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiPurgeValidPage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = (a2 >> 12) & 0xFFFFFFFFFFLL;
  v4 = 48 * v3 - 0x220000000000LL;
  result = *(unsigned int *)(v4 + 32);
  if ( (unsigned __int16)result > 2u )
    ++*(_QWORD *)(a3 + 24);
  if ( (v3 & 0x1FF) == 0 )
  {
    result = 0xFFFFF00000000001uLL;
    *(_QWORD *)v4 = (*(_QWORD *)(a3 + 16) >> 3) ^ (*(_QWORD *)v4 ^ (*(_QWORD *)(a3 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)(a3 + 16) = v4;
  }
  return result;
}
