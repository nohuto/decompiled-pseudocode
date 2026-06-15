/*
 * XREFs of sub_1400B38A6 @ 0x1400B38A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400B38A6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 136);
  if ( *v3 == -1073741571 )
    o__resetstkoflw();
  *(_DWORD *)(a2 + 256) = *v3;
  return 0LL;
}
