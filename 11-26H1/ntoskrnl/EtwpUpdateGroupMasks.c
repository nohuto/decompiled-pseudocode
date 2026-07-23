/*
 * XREFs of EtwpUpdateGroupMasks @ 0x140B09E5C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(int *a1, _DWORD *a2)
{
  int *v2; // r8
  __int64 v3; // r9
  _DWORD v5[6]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  v5[0] = 0x1FFFFFFF;
  v5[1] = 0x3FFFFFFF;
  v2 = EtwpEnableFlagMap;
  v5[2] = 1610612735;
  v3 = 8LL;
  v5[3] = 0x7FFFFFFF;
  v5[4] = -1610612737;
  v5[5] = -1073741825;
  v6 = -536870913LL;
  do
  {
    if ( a2 && (*v2 & a2[(unsigned __int64)(unsigned int)*v2 >> 29] & 0x1FFFFFFF) != 0 )
      a2[(unsigned __int64)(unsigned int)v2[1] >> 29] |= v2[1] & 0x1FFFFFFF;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  return EtwpUpdateSelectedGroupMasks(a1, v5, a2, 0LL);
}
