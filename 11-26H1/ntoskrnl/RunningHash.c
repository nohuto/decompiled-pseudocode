/*
 * XREFs of RunningHash @ 0x1404674A0
 * Callers:
 *     ComputeFlushPeriod @ 0x1408A658C (ComputeFlushPeriod.c)
 * Callees:
 *     <none>
 */

void __fastcall RunningHash(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // eax
  int v5; // r9d

  v3 = 0LL;
  if ( a3 )
  {
    v4 = *a1;
    do
    {
      v5 = *(unsigned __int8 *)(a2 + v3++);
      v4 = (1025 * (v4 + v5)) ^ ((1025 * (v4 + v5)) >> 6);
    }
    while ( v3 < a3 );
    *a1 = v4;
  }
}
