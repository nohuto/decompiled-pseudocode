/*
 * XREFs of PnpCompareResourceRequestPriority @ 0x1407B6360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCompareResourceRequestPriority(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax

  v2 = a2[4];
  v3 = a1[4];
  if ( v2 != v3 )
    return v2 < v3 ? 1 : -1;
  v4 = a2[5];
  if ( a1[5] > v4 || a1[5] >= v4 && a1 >= a2 )
    return 1LL;
  else
    return 0xFFFFFFFFLL;
}
