/*
 * XREFs of PnpIsBeingRemovedSafely @ 0x1409B59C4
 * Callers:
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1409B586C (PnpBuildUnsafeRemovalDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpIsBeingRemovedSafely(_DWORD *a1, int a2)
{
  int v4; // ecx

  if ( !a2 || (unsigned int)(a2 - 1) > 1 || (a1[140] & 0x200) != 0 )
    return 1;
  v4 = a1[75];
  if ( v4 == 784 || v4 == 785 )
    v4 = a1[76];
  return (unsigned int)(v4 - 777) > 1 && (unsigned int)(v4 - 780) > 1;
}
