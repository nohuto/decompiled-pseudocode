/*
 * XREFs of sub_140004B3C @ 0x140004B3C
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_140004A6C @ 0x140004A6C (sub_140004A6C.c)
 *     sub_140004ADC @ 0x140004ADC (sub_140004ADC.c)
 *     sub_140004BD4 @ 0x140004BD4 (sub_140004BD4.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_140004B3C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // r8d
  _QWORD *i; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return;
  v3 = *(unsigned int *)(a1 + 40);
  if ( v3 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v3;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 0x18 )
      goto LABEL_9;
    v3 *= 24LL;
  }
  v4 = (_QWORD *)_o_malloc(v3 + 8, a2);
  if ( !v4 )
LABEL_9:
    sub_14004639C(2147942414LL, a2);
  *v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_DWORD *)(a1 + 40) - 1;
  for ( i = &v4[2 * v5 + 1 + (unsigned int)v5]; v5 >= 0; --v5 )
  {
    *i = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = i;
    i -= 3;
  }
}
