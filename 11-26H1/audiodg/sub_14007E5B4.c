/*
 * XREFs of sub_14007E5B4 @ 0x14007E5B4
 * Callers:
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_140050ED0 @ 0x140050ED0 (sub_140050ED0.c)
 */

char __fastcall sub_14007E5B4(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  void *v8; // rcx
  _WORD *v9; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 < 0xA )
    sub_140050ED0(retaddr, 5320LL, (__int64)"onecore\\internal\\sdk\\inc\\wil\\Staging.h", a4);
  v8 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
    sub_14004DB08(v8);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2 + a3;
  *(_QWORD *)(a1 + 40) = a2 + a4;
  *(_BYTE *)(a1 + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_15;
  v9 = (_WORD *)(a2 + 2);
  if ( *(_WORD *)a2 || (v10 = 0, *v9 > *(_WORD *)a1) )
    v10 = 1;
  *(_BYTE *)(a1 + 57) = v10;
  if ( *(_WORD *)a2
    || *v9 != *(_WORD *)a1
    || *(_WORD *)(a2 + 4) != *(_WORD *)(a1 + 2)
    || *(_BYTE *)(a2 + 8) != *(_BYTE *)(a1 + 4)
    || *(_WORD *)(a2 + 6) != *(_WORD *)(a1 + 6)
    || (LOBYTE(v11) = *(_BYTE *)(a1 + 8), *(_BYTE *)(a2 + 9) != (_BYTE)v11) )
  {
LABEL_15:
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = *(_WORD *)a1;
    *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + 2);
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(a1 + 4);
    *(_WORD *)(a2 + 6) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(a2 + 9) = *(_BYTE *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 24) + 10LL;
    *(_QWORD *)(a1 + 32) = v11;
  }
  return v11;
}
