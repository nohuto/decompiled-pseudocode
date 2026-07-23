/*
 * XREFs of PopFanFindBucketIndex @ 0x140B58448
 * Callers:
 *     PopFanUpdateSpeed @ 0x1407DEFE0 (PopFanUpdateSpeed.c)
 *     PopFanUpdateStatistics @ 0x140B6BA6C (PopFanUpdateStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFanFindBucketIndex(__int64 a1, unsigned int i, int *a3, int *a4)
{
  int v4; // r11d
  unsigned int v5; // edi
  int v6; // eax

  v4 = -1;
  v5 = i;
  if ( i )
  {
    for ( i = 1; i <= *(_DWORD *)(a1 + 128); ++i )
    {
      if ( v5 <= *(_DWORD *)(a1 + 4LL * (i - 1) + 132) )
      {
        v4 = *(_DWORD *)(a1 + 4LL * (i - 1) + 132);
        break;
      }
    }
    if ( i == 1 )
      v6 = 1;
    else
      v6 = *(_DWORD *)(a1 + 4LL * (i - 2) + 132) + 1;
  }
  else
  {
    v6 = 0;
    v4 = 1;
  }
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v4;
  return i;
}
