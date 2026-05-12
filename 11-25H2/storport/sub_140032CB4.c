/*
 * XREFs of sub_140032CB4 @ 0x140032CB4
 * Callers:
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 */

char __fastcall sub_140032CB4(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v4; // bp
  char v5; // r15
  char v6; // r14
  char v7; // si
  __int64 v8; // rdi
  char result; // al

  v2 = *(_QWORD *)(a1 + 608);
  v4 = byte_140168DA8;
  v5 = byte_140168DA9;
  v6 = byte_140168DAC;
  v7 = byte_140168DAB;
  if ( v2 && *(_QWORD *)(v2 + 176) && ((*(_BYTE *)(a1 + 109) & 2) != 0) != a2 )
    return 1;
  v8 = a1 + 376;
  if ( sub_140020090(a1 + 376, 20) )
  {
    if ( ((*(_BYTE *)(a1 + 110) & 8) != 0) != v7 )
      return 1;
  }
  if ( sub_140020090(v8, 20) && ((*(_BYTE *)(a1 + 110) & 0x10) != 0) != v6
    || sub_140020090(v8, 20) && ((*(_BYTE *)(a1 + 110) & 0x20) != 0) != v5 )
  {
    return 1;
  }
  result = sub_140020090(v8, 20);
  if ( result )
    return (*(_BYTE *)(a1 + 112) & 1) != v4;
  return result;
}
