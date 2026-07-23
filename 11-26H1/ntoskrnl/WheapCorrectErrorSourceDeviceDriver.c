/*
 * XREFs of WheapCorrectErrorSourceDeviceDriver @ 0x1406D9670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapCorrectErrorSourceDeviceDriver(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax

  v2 = *(_DWORD *)(a1 + 136);
  v3 = *a2;
  if ( *a2 < v2 )
  {
    *a2 = v2;
    v3 = v2;
  }
  v4 = *(_DWORD *)(a1 + 64);
  if ( v3 < v4 )
    *a2 = v4;
  return 0LL;
}
