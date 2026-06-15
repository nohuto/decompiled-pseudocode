/*
 * XREFs of sub_140079360 @ 0x140079360
 * Callers:
 *     sub_14007A150 @ 0x14007A150 (sub_14007A150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140079360(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx

  v5 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = *(_OWORD *)&dword_1400C5F88;
  *a2 = v5 + 1;
  v3 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = xmmword_1400C6688;
  result = (unsigned int)(v3 + 1);
  *a2 = result;
  return result;
}
