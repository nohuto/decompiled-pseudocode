/*
 * XREFs of ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x14004B300
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026D888 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     DxgkCddVerifyCddDevMode @ 0x14041C1F0 (DxgkCddVerifyCddDevMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitsPerPixel(enum _D3DDDIFORMAT a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 20;
  if ( !v1 )
    return 24LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 32LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 32LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 16LL;
  v6 = v5 - 9;
  if ( !v6 )
    return 32LL;
  if ( v6 == 9 )
    return 8LL;
  else
    return 0LL;
}
