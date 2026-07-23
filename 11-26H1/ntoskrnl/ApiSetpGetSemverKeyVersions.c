/*
 * XREFs of ApiSetpGetSemverKeyVersions @ 0x1406DF60C
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406DFDEC (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSemverKeyVersions(__int64 *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rax
  char v6; // si
  char v7; // di
  char v8; // r10
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE *v12; // r8
  __int64 v13; // r10
  char *v14; // r8
  int v15; // edx
  char v16; // bl
  char *v17; // r8
  int v18; // edx
  char v19; // bl

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v5 = *((unsigned __int16 *)a1 + 10);
  v6 = 0;
  v7 = 0;
  v8 = *((_BYTE *)a1 + 10);
  v9 = *((unsigned __int16 *)a1 + 4) - (_DWORD)v5;
  if ( v9 <= 0 )
    return 0;
  v10 = *a1;
  v11 = 2 * v5;
  if ( !v8 )
    v11 = v5;
  v12 = (_BYTE *)(v11 + v10);
  if ( *v12 != 45 )
    return 0;
  v13 = (v8 != 0) + 1LL;
  v14 = &v12[v13];
  v15 = v9 - 1;
  if ( !v15 )
    return 0;
  while ( v15 > 0 )
  {
    v16 = *v14;
    if ( *v14 == 45 )
      break;
    if ( (unsigned __int8)(v16 - 48) > 9u )
      return 0;
    v14 += v13;
    --v15;
    v6 = v16 + 2 * (5 * v6 - 24);
  }
  v17 = &v14[v13];
  v18 = v15 - 1;
  if ( !v18 )
    return 0;
  while ( v18 > 0 )
  {
    v19 = *v17;
    if ( (unsigned __int8)(*v17 - 48) > 9u )
      return 0;
    v17 += v13;
    --v18;
    v7 = v19 + 2 * (5 * v7 - 24);
  }
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v7;
  return 1;
}
