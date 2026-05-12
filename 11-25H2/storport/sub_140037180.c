/*
 * XREFs of sub_140037180 @ 0x140037180
 * Callers:
 *     sub_1400B3E8C @ 0x1400B3E8C (sub_1400B3E8C.c)
 *     sub_1400B86BC @ 0x1400B86BC (sub_1400B86BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140037180(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *v2; // rcx
  unsigned int v3; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1872);
  if ( !v1 )
    return 300000LL;
  v2 = *(_DWORD **)(v1 + 8);
  if ( !v2 || *v2 != 3 )
    return 300000LL;
  v3 = v2[5];
  result = 300000LL;
  if ( v3 )
    return v3;
  return result;
}
