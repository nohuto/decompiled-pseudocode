/*
 * XREFs of sub_140072EC4 @ 0x140072EC4
 * Callers:
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 * Callees:
 *     sub_14002D010 @ 0x14002D010 (sub_14002D010.c)
 *     sub_140072E4C @ 0x140072E4C (sub_140072E4C.c)
 */

__int64 __fastcall sub_140072EC4(int *a1)
{
  unsigned int v2; // edi
  int *v3; // rax
  int v4; // r9d
  int v5; // r10d
  int *v6; // rsi
  int v7; // ebx
  unsigned int v8; // edx
  char *v9; // rax
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  while ( 1 )
  {
    v3 = sub_14002D010(a1, v2++);
    v6 = v3;
    if ( !v3 )
      break;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_140072E4C(v6, v8);
      v8 = v10 + 1;
      if ( !v9 )
        break;
      v11 = 32;
      if ( *(_DWORD *)v9 != 1 )
        v11 = 0;
      v7 += v11;
    }
  }
  return (unsigned int)(v5 + v4);
}
