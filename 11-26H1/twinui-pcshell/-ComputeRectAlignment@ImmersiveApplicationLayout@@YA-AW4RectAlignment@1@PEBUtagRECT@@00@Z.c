/*
 * XREFs of ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x1801A8C20
 * Callers:
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x18052B880 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeRectAlignment(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  char v5; // r9
  char v6; // r8
  int v7; // ecx

  result = 0LL;
  v5 = 1;
  if ( *a3 > *a1 || (v6 = 1, *a1 > *a2) )
    v6 = 0;
  v7 = a1[2];
  if ( a2[2] > v7 || v7 > a3[2] )
    v5 = 0;
  if ( v6 )
    return 2 - (unsigned int)(v5 != 0);
  if ( v5 )
    return 3LL;
  return result;
}
