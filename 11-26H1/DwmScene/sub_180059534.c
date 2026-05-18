/*
 * XREFs of sub_180059534 @ 0x180059534
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180059534(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r9d
  int v5; // eax
  int v6; // r10d
  int v7; // ebx
  int *v8; // rax
  int v9; // ecx
  _DWORD *v10; // r14
  int v11; // esi
  int *v12; // r11
  int v13; // eax
  int v14; // r11d
  int v15; // eax
  int *v16; // rax
  bool v17; // cc
  int v18; // eax
  _DWORD *v19; // r8

  v3 = *a3;
  v5 = *a3;
  v6 = a3[2];
  if ( *a2 >= *a3 )
    v5 = *a2;
  if ( v6 >= v5 )
  {
    v8 = a3;
    if ( *a2 >= v3 )
      v8 = a2;
    v7 = *v8;
  }
  else
  {
    v7 = a3[2];
  }
  v9 = a3[3];
  v10 = a3 + 1;
  v11 = a3[1];
  v12 = a3;
  v13 = v11;
  if ( a2[1] >= v11 )
  {
    v13 = a2[1];
    v12 = a2;
  }
  if ( v9 >= v13 )
    v14 = v12[1];
  else
    v14 = a3[3];
  v15 = a3[2];
  if ( v6 >= a2[2] )
    v15 = a2[2];
  if ( v15 >= v3 )
  {
    v16 = a3;
    if ( v6 >= a2[2] )
      v16 = a2;
    v3 = v16[2];
  }
  v17 = v9 < a2[3];
  v18 = a3[3];
  *a1 = v7;
  if ( !v17 )
  {
    v18 = a2[3];
    a3 = a2;
  }
  v19 = a3 + 3;
  a1[1] = v14;
  if ( v18 >= v11 )
    v10 = v19;
  a1[2] = v3;
  a1[3] = *v10;
  return a1;
}
