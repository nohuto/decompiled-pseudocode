/*
 * XREFs of sub_140055758 @ 0x140055758
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140072E88 @ 0x140072E88 (sub_140072E88.c)
 */

char __fastcall sub_140055758(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int i; // r10d
  _DWORD *v6; // r11
  unsigned int v7; // esi
  unsigned int v8; // r10d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  int v12; // r10d
  char result; // al

  v3 = -1LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= a2 )
      return 0;
    v6 = (_DWORD *)(a3 + 40LL * i);
    if ( !v6[5] )
    {
      v7 = v6[6];
      if ( v7 )
      {
        if ( v6[4] == 3 )
          break;
      }
    }
  }
  v8 = 0;
  do
  {
    v10 = *(_QWORD *)(sub_140072E88(v6, v8) + 8);
    v9 = v10;
    if ( v10 <= v11 )
      v10 = v11;
    if ( v9 >= v3 )
      v9 = v3;
    v8 = v12 + 1;
    v3 = v9;
  }
  while ( v8 < v7 );
  *(_QWORD *)(a1 + 32) = v10;
  result = 1;
  *(_QWORD *)(a1 + 40) = v9;
  return result;
}
