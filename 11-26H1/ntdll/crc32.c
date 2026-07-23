/*
 * XREFs of crc32 @ 0x18010400C
 * Callers:
 *     RtlComputeCrc32 @ 0x180104000 (RtlComputeCrc32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall crc32(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    return crc32_z(a1, a2, a3);
  else
    return 0LL;
}
