/*
 * XREFs of RunningHash @ 0x1400491B4
 * Callers:
 *     ComputeEventEntryHash @ 0x14005A988 (ComputeEventEntryHash.c)
 *     ComputeFlushPeriod @ 0x1400C480C (ComputeFlushPeriod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RunningHash(int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r11
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v4 = *a1;
    do
    {
      v5 = *(unsigned __int8 *)(a2 + v3++);
      result = (unsigned int)(v4 + v5);
      v4 = (1025 * result) ^ ((unsigned int)(1025 * result) >> 6);
    }
    while ( v3 < a3 );
    *a1 = v4;
  }
  return result;
}
