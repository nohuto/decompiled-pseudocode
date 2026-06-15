/*
 * XREFs of sub_1400793F0 @ 0x1400793F0
 * Callers:
 *     sub_14007A310 @ 0x14007A310 (sub_14007A310.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400793F0(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx

  v5 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = xmmword_1400C7DA0;
  *a2 = v5 + 1;
  v3 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = xmmword_1400C6688;
  result = (unsigned int)(v3 + 1);
  *a2 = result;
  return result;
}
