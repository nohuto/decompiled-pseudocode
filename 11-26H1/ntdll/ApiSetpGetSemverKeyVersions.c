/*
 * XREFs of ApiSetpGetSemverKeyVersions @ 0x180121F98
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180116BE8 (ApiSetQuerySchemaInfo2_V7.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSemverKeyVersions(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  char v5; // r11
  char v6; // r9
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rcx
  _BYTE *v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // r8
  int v13; // edx
  char *v14; // r8
  int v15; // edx
  char v16; // al

  if ( a3 )
    *a3 = 0;
  v4 = *((unsigned __int16 *)a1 + 10);
  v5 = 0;
  v6 = *((_BYTE *)a1 + 10);
  v7 = *((unsigned __int16 *)a1 + 4) - (_DWORD)v4;
  if ( v7 <= 0 )
    return 0;
  v8 = *a1;
  v9 = 2 * v4;
  if ( !v6 )
    v9 = v4;
  v10 = (_BYTE *)(v9 + v8);
  if ( *v10 != 45 )
    return 0;
  v11 = (v6 != 0) + 1LL;
  v12 = &v10[v11];
  v13 = v7 - 1;
  if ( !v13 )
    return 0;
  while ( v13 > 0 && *v12 != 45 )
  {
    if ( (unsigned __int8)(*v12 - 48) > 9u )
      return 0;
    v12 += v11;
    --v13;
  }
  v14 = &v12[v11];
  v15 = v13 - 1;
  if ( !v15 )
    return 0;
  while ( v15 > 0 )
  {
    if ( (unsigned __int8)(*v14 - 48) > 9u )
      return 0;
    v16 = *v14;
    v14 += v11;
    --v15;
    v5 = v16 + 2 * (5 * v5 - 24);
  }
  if ( a3 )
    *a3 = v5;
  return 1;
}
