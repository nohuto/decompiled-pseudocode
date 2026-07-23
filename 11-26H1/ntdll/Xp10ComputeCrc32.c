/*
 * XREFs of Xp10ComputeCrc32 @ 0x180151F80
 * Callers:
 *     Xp10ComputeAndWriteCrc @ 0x180125778 (Xp10ComputeAndWriteCrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ComputeCrc32(unsigned __int8 **a1)
{
  unsigned int v1; // edx
  unsigned __int8 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  char v5; // al
  unsigned int v6; // ecx

  v1 = -1;
  if ( *((_DWORD *)a1 + 3) )
  {
    v2 = *a1;
    v3 = *((unsigned int *)a1 + 3);
    do
    {
      v4 = 8LL;
      v1 ^= *v2;
      do
      {
        v5 = v1;
        v6 = v1 >> 1;
        v1 = (v1 >> 1) ^ 0x82F63B78;
        if ( (v5 & 1) == 0 )
          v1 = v6;
        --v4;
      }
      while ( v4 );
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return ~v1;
}
