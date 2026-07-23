/*
 * XREFs of HalpNumaSystemLocalityInfoFindTargetIndex @ 0x14059512C
 * Callers:
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140594900 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaSystemLocalityInfoFindTargetIndex(__int64 a1, int a2, int *a3)
{
  int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // rbx
  unsigned int v7; // ecx

  v3 = -1;
  v4 = 0;
  v5 = 0;
  v6 = a1 + 4LL * *(unsigned int *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 16);
  while ( v5 < v7 )
  {
    if ( *(_DWORD *)(v6 + 4LL * v5 + 32) == a2 )
    {
      v3 = v5;
      break;
    }
    ++v5;
  }
  if ( v3 == -1 )
  {
    return (unsigned int)-1073741275;
  }
  else if ( a3 )
  {
    *a3 = v3;
  }
  return v4;
}
