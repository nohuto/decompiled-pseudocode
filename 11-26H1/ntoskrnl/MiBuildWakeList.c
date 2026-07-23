/*
 * XREFs of MiBuildWakeList @ 0x140470AE0
 * Callers:
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1404A89A0 (MiUnlockControlAreaSectionExtend.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  __int64 *v2; // r8
  _QWORD *v3; // r9
  __int64 *result; // rax
  __int64 *v5; // r10

  v2 = *(__int64 **)(a1 + 80);
  v3 = (_QWORD *)(a1 + 80);
  result = 0LL;
  if ( v2 )
  {
    do
    {
      v5 = (__int64 *)*v2;
      if ( (a2 & (_DWORD)v2[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v2 + 3) = 1;
        }
        else
        {
          *v2 = (__int64)result;
          result = v2;
          *v3 = v5;
        }
      }
      else
      {
        v3 = v2;
      }
      v2 = v5;
    }
    while ( v5 );
  }
  return result;
}
