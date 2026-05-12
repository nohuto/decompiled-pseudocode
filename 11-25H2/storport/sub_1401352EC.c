/*
 * XREFs of sub_1401352EC @ 0x1401352EC
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_140136240 @ 0x140136240 (sub_140136240.c)
 *     sub_1401362A0 @ 0x1401362A0 (sub_1401362A0.c)
 *     sub_1401363F0 @ 0x1401363F0 (sub_1401363F0.c)
 *     sub_1401366F0 @ 0x1401366F0 (sub_1401366F0.c)
 *     sub_140136D10 @ 0x140136D10 (sub_140136D10.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_140138500 @ 0x140138500 (sub_140138500.c)
 *     sub_1401385C0 @ 0x1401385C0 (sub_1401385C0.c)
 *     sub_140138D34 @ 0x140138D34 (sub_140138D34.c)
 *     sub_140139008 @ 0x140139008 (sub_140139008.c)
 *     sub_1401396CC @ 0x1401396CC (sub_1401396CC.c)
 *     sub_1401398D0 @ 0x1401398D0 (sub_1401398D0.c)
 *     sub_140139B00 @ 0x140139B00 (sub_140139B00.c)
 *     sub_14013AC30 @ 0x14013AC30 (sub_14013AC30.c)
 *     sub_14013B0FC @ 0x14013B0FC (sub_14013B0FC.c)
 *     sub_14013BC70 @ 0x14013BC70 (sub_14013BC70.c)
 *     sub_14013C334 @ 0x14013C334 (sub_14013C334.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1401352EC(char *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char *v4; // r11
  char v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char result; // al

  v3 = 0;
  if ( a2 >> 1 )
  {
    v4 = a1;
    do
    {
      v5 = *v4;
      v6 = a2 - v3++;
      v7 = v6 - 1;
      v8 = (unsigned int)v7;
      result = a1[v7];
      *v4++ = result;
      a1[v8] = v5;
    }
    while ( v3 < a2 >> 1 );
  }
  return result;
}
