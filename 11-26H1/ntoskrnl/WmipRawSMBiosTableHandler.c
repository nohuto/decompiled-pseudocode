/*
 * XREFs of WmipRawSMBiosTableHandler @ 0x1404C3D00
 * Callers:
 *     <none>
 * Callees:
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 */

__int64 __fastcall WmipRawSMBiosTableHandler(_DWORD *a1)
{
  int v2; // eax
  unsigned int SMBiosTableData; // edx
  unsigned int v5; // eax

  if ( !a1 )
    return 3221225711LL;
  v2 = a1[1];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      SMBiosTableData = WmipGetSMBiosTableData(0LL);
      a1[3] = 0;
      return SMBiosTableData;
    }
    return 3221225711LL;
  }
  v5 = a1[3];
  a1[3] = 4;
  if ( v5 < 4 )
    return 3221225507LL;
  a1[4] = 0;
  return 0LL;
}
