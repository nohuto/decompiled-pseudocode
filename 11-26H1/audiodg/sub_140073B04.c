/*
 * XREFs of sub_140073B04 @ 0x140073B04
 * Callers:
 *     sub_140073E50 @ 0x140073E50 (sub_140073E50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140073B04(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = xmmword_1400C6688;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 1)) = xmmword_1400C65B8;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 2)) = xmmword_1400C65C8;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 3)) = xmmword_1400C65F8;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 4)) = xmmword_1400C6618;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 5)) = xmmword_1400C6608;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 6)) = xmmword_1400C6628;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 7)) = xmmword_1400C6638;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 8)) = xmmword_1400C6648;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 9)) = xmmword_1400C97F0;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 10)) = xmmword_1400C6668;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 11)) = xmmword_1400C6678;
  result = (unsigned int)(v3 + 12);
  *a2 = result;
  return result;
}
