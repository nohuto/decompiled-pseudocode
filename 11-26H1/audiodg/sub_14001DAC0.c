/*
 * XREFs of sub_14001DAC0 @ 0x14001DAC0
 * Callers:
 *     sub_140078FA0 @ 0x140078FA0 (sub_140078FA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001DAC0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  ++*(_DWORD *)(a1 + 96);
  result = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned int *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( !a2 )
    return sub_14001DB9C(result, 0LL, a3, v4);
  *a2 = result;
  *a3 = v4;
  return result;
}
