/*
 * XREFs of sub_1400DCA20 @ 0x1400DCA20
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400DCA20(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11
  __int64 v5; // r10
  _DWORD *i; // rax
  char result; // al
  _DWORD *v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned __int64 v12; // rbp
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rax

  v3 = 0LL;
  v4 = -1LL;
  v5 = 0LL;
  if ( !a2 )
    return 0;
  for ( i = (_DWORD *)(a3 + 24); *(i - 1) || !*i || *(i - 2) != 3; i += 10 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= a2 )
      return 0;
  }
  v9 = (_DWORD *)(a3 + 40 * v5);
  v10 = 0;
  v11 = v9[6];
  if ( v11 )
  {
    do
    {
      v12 = v3;
      if ( v9[5] || v11 < v10 + 1 || (v13 = (unsigned int)v9[7], (unsigned int)v13 < 0x28) )
      {
        v14 = 0LL;
        ++v10;
      }
      else
      {
        v14 = (__int64)&v9[6 * v10++] + v13;
      }
      v15 = *(_QWORD *)(v14 + 8);
      v3 = v15;
      if ( v15 <= v12 )
        v3 = v12;
      if ( v15 >= v4 )
        v15 = v4;
      v4 = v15;
    }
    while ( v10 < v11 );
  }
  *(_QWORD *)(a1 + 24) = v3;
  result = 1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
