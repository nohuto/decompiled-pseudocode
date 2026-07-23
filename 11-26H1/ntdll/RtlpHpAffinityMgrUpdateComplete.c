/*
 * XREFs of RtlpHpAffinityMgrUpdateComplete @ 0x1800E0BA8
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x1800E0854 (RtlpHpVsContextHandleContention.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpAffinityMgrUpdateComplete(__int64 a1, int a2, int a3)
{
  char result; // al
  int v4; // edx

  result = 0;
  if ( a2 && (v4 = a2 - 1) != 0 )
  {
    if ( v4 == 2 )
    {
      if ( a3 )
      {
        result = *(_BYTE *)(a1 + 1);
        *(_BYTE *)(a1 + 1) = 0;
      }
      else
      {
        _InterlockedDecrement8((volatile signed __int8 *)(a1 + 1));
      }
    }
  }
  else
  {
    *(_BYTE *)a1 = 0;
  }
  return result;
}
