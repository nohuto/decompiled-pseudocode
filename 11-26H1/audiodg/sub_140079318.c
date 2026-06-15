/*
 * XREFs of sub_140079318 @ 0x140079318
 * Callers:
 *     sub_140079FC0 @ 0x140079FC0 (sub_140079FC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140079318(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = xmmword_1400C6688;
  *a2 = v3 + 1;
  v4 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = xmmword_1400CB7D0;
  result = (unsigned int)(v4 + 1);
  *a2 = result;
  return result;
}
