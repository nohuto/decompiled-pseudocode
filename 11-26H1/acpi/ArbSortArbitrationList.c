/*
 * XREFs of ArbSortArbitrationList @ 0x1400D0F10
 * Callers:
 *     ArbTestAllocation @ 0x1400D0DC0 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbSortArbitrationList(__int64 ***a1)
{
  __int64 **v2; // rdx
  char v3; // cl
  __int64 *v4; // r8
  __int64 **v5; // rcx
  __int64 *v6; // rax

  do
  {
    v2 = *a1;
    v3 = 1;
    v4 = **a1;
    if ( *a1 == (__int64 **)a1 )
      break;
    do
    {
      if ( v4 == (__int64 *)a1 )
        break;
      if ( (__int64)v2[6] > v4[6] )
      {
        v5 = (__int64 **)v2[1];
        v6 = (__int64 *)*v4;
        *v5 = v4;
        v6[1] = (__int64)v2;
        *v2 = v6;
        v2[1] = v4;
        v4[1] = (__int64)v5;
        v3 = 0;
        *v4 = (__int64)v2;
      }
      v2 = (__int64 **)*v2;
      v4 = *v2;
    }
    while ( v2 != (__int64 **)a1 );
  }
  while ( !v3 );
  return 0LL;
}
