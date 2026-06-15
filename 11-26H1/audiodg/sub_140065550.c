/*
 * XREFs of sub_140065550 @ 0x140065550
 * Callers:
 *     sub_140065710 @ 0x140065710 (sub_140065710.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140065550(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = *a2;
  *(_OWORD *)(a3 + 16LL * *a2) = *(_OWORD *)&dword_1400C6698;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 1)) = xmmword_1400C6688;
  *(IID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = stru_1400C65A8;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 3)) = xmmword_1400C65B8;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 4)) = xmmword_1400C6B38;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 5)) = xmmword_1400C97D0;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 6)) = xmmword_1400C5218;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 7)) = xmmword_1400C97D0;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 8)) = xmmword_1400C5228;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 9)) = xmmword_1400C97D0;
  *(_OWORD *)(a3 + 16LL * (unsigned int)(v3 + 10)) = xmmword_1400F5A98;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
