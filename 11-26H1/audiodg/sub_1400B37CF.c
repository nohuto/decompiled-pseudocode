/*
 * XREFs of sub_1400B37CF @ 0x1400B37CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400B37CF(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 272);
  if ( *v3 == -1073741571 )
    o__resetstkoflw();
  *(_DWORD *)(a2 + 64) = *v3;
  return 0LL;
}
