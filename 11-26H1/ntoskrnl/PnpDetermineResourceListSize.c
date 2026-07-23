/*
 * XREFs of PnpDetermineResourceListSize @ 0x140AA0E1C
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IopChangeInterfaceType @ 0x1407A4FA0 (IopChangeInterfaceType.c)
 *     IopCombineLegacyResources @ 0x1407A87F4 (IopCombineLegacyResources.c)
 *     IopCombineCmResourceList @ 0x1407A8DC0 (IopCombineCmResourceList.c)
 *     PnpCopyResourceList @ 0x1407B5498 (PnpCopyResourceList.c)
 *     PnpBuildCmResourceLists @ 0x1407B6158 (PnpBuildCmResourceLists.c)
 *     PnpRestoreResourcesInternal @ 0x1407B65FC (PnpRestoreResourcesInternal.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 *     IopReportBootResources @ 0x140CCB630 (IopReportBootResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDetermineResourceListSize(_DWORD *a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  __int64 v3; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  v2 = a1 + 1;
  result = 4LL;
  if ( *a1 )
  {
    v3 = (unsigned int)*a1;
    do
    {
      v4 = v2[3];
      v5 = v2 + 4;
      v6 = 16;
      if ( v4 )
      {
        v7 = v4;
        do
        {
          v8 = 20LL;
          if ( *(_BYTE *)v5 == 5 )
            v8 = (unsigned int)(v5[1] + 20);
          v6 += v8;
          v5 = (_DWORD *)((char *)v5 + v8);
          --v7;
        }
        while ( v7 );
      }
      result = v6 + (unsigned int)result;
      v2 = (_DWORD *)((char *)v2 + v6);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
