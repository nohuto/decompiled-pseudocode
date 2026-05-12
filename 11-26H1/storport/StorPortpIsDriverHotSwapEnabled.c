/*
 * XREFs of StorPortpIsDriverHotSwapEnabled @ 0x1401190CC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorPortpIsDriverHotSwapEnabled(__int64 a1)
{
  char v1; // dl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( GetDriverProxyFeatures )
  {
    GetDriverProxyFeatures(a1, &v3);
    v1 = v3;
  }
  return (v1 & 1) == 0 ? 0xC1000002 : 0;
}
