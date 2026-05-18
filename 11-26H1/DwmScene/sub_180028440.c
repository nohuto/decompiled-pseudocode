/*
 * XREFs of sub_180028440 @ 0x180028440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180028440(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // xmm0_4
  int v4; // xmm1_4
  _DWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 152);
    v4 = *(_DWORD *)(v2 + 156);
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
