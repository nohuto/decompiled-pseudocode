/*
 * XREFs of xtoa @ 0x14053830C
 * Callers:
 *     _itoa @ 0x1405382D0 (_itoa.c)
 * Callees:
 *     <none>
 */

char __fastcall xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v5; // r10
  char *v6; // r8
  _BYTE *v7; // r11
  char *v8; // r9
  unsigned int v9; // edx
  char v10; // al
  char result; // al
  char v12; // cl

  v5 = a2;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    a1 = -a1;
  }
  v6 = v5;
  do
  {
    v7 = v5 + 1;
    v8 = v5;
    v9 = a1 % a3;
    a1 /= a3;
    v10 = 87;
    if ( v9 <= 9 )
      v10 = 48;
    *v5++ = v9 + v10;
  }
  while ( a1 );
  *v7 = 0;
  do
  {
    result = *v6;
    v12 = *v8;
    *v8-- = *v6;
    *v6++ = v12;
  }
  while ( v6 < v8 );
  return result;
}
