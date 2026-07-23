/*
 * XREFs of RtlExtendedMagicDivide @ 0x1800BF0F0
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x1800BF0B0 (RtlTimeToSecondsSince1980.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlExtendedMagicDivide(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v4 = -a1;
  if ( v4 < 0 )
    v4 = a1;
  v5 = (unsigned __int64)(((unsigned __int64)v4 * (unsigned __int128)a2) >> 64) >> a3;
  if ( a1 < 0 )
    return -(__int64)v5;
  return v5;
}
