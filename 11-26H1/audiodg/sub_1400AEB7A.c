/*
 * XREFs of sub_1400AEB7A @ 0x1400AEB7A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400AEB7A(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    o__resetstkoflw();
  *(_DWORD *)(a2 + 184) = *v3;
  return 0LL;
}
