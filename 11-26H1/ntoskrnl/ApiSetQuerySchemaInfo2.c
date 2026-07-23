/*
 * XREFs of ApiSetQuerySchemaInfo2 @ 0x1406DD094
 * Callers:
 *     RtlIsApiSetImplemented @ 0x14080CE90 (RtlIsApiSetImplemented.c)
 * Callees:
 *     ApiSetpSearchForApiSetA @ 0x1406DD58C (ApiSetpSearchForApiSetA.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC (ApiSetQuerySchemaInfo2_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v9; // esi
  __int64 v10; // rax
  char *v11; // r8
  bool v12; // cf
  int v14; // r10d
  char *v15; // r9
  char v16; // r11
  char v17; // cl
  char *i; // r9
  char v19; // r10
  char v20; // cl
  unsigned __int16 v21; // si
  _BYTE *v22; // rax
  _DWORD *v23; // rax
  unsigned __int16 v24; // r9
  _BYTE *v25; // r8
  unsigned __int8 *v26; // r8
  int v27; // ecx
  __int16 v28; // r10
  __int64 v29; // rcx
  unsigned int v30; // r11d
  unsigned int v31; // r10d
  _WORD *v32; // r8
  unsigned __int16 *v33; // r8
  int v34; // r10d
  int v35; // edi

  v3 = -1LL;
  *a3 = 240;
  v4 = -1LL;
  v5 = 0;
  do
    ++v4;
  while ( *((_BYTE *)a2 + v4) );
  v9 = 10;
  if ( (unsigned __int64)(v4 - 4) <= 0xFFFB
    && ((v10 = *a2 & 0xFFDFDFDF, v10 == *(_QWORD *)"API-") || v10 == *(_QWORD *)"EXT-") )
  {
    v11 = (char *)("schemaext-" - (char *)a2);
  }
  else
  {
    v14 = 10;
    v11 = (char *)("schemaext-" - (char *)a2);
    v15 = (char *)a2;
    while ( v14 > 0 )
    {
      v16 = *v15;
      if ( !*v15 )
        return 3221225485LL;
      v17 = v16 + 32;
      if ( (unsigned __int8)(v16 - 65) > 0x19u )
        v17 = *v15;
      if ( v11[(_QWORD)v15] != v17 )
        return 3221225485LL;
      ++v15;
      --v14;
    }
  }
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetQuerySchemaInfo2_V7(a1, a2, a3);
  v12 = *(_DWORD *)a1 < 6u;
  if ( *(_DWORD *)a1 != 6 )
    goto LABEL_12;
  if ( *(_DWORD *)(a1 + 16) > 8u )
  {
    if ( *(_BYTE *)(a1 + 28) != 7 )
    {
      v12 = 0;
LABEL_12:
      if ( v12 )
        return 3221225659LL;
      goto LABEL_21;
    }
    return ApiSetQuerySchemaInfo2_V7(a1, a2, a3);
  }
  do
LABEL_21:
    ++v3;
  while ( *((_BYTE *)a2 + v3) );
  if ( v3 > 0xFFFF )
    return 3221225485LL;
  for ( i = (char *)a2; ; ++i )
  {
    if ( v9 <= 0 )
    {
      *a3 = ApiSetpSearchForApiSetA(a1, a2, (unsigned __int16)v3, i) == 0 ? 0xF1 : 0;
      return v5;
    }
    v19 = *i;
    if ( !*i )
      break;
    v20 = v19 + 32;
    if ( (unsigned __int8)(v19 - 65) > 0x19u )
      v20 = *i;
    if ( i[(_QWORD)v11] != v20 )
      break;
    --v9;
  }
  v21 = v3;
  v22 = (char *)a2 + (unsigned __int16)v3;
  do
  {
    if ( v21 <= 1u )
      break;
    --v22;
    --v21;
  }
  while ( *v22 != 45 );
  v23 = (_DWORD *)ApiSetpSearchForApiSetA(a1, a2, v21, i);
  if ( !v23 )
  {
LABEL_35:
    *a3 = 241;
    return v5;
  }
  if ( (*v23 & 4) != 0 )
  {
    *a3 = 0;
  }
  else
  {
    v24 = 0;
    if ( (unsigned __int16)v3 - v21 <= 0 )
      return (unsigned int)-1073741811;
    v25 = (char *)a2 + v21;
    if ( *v25 != 45 )
      return (unsigned int)-1073741811;
    v26 = v25 + 1;
    v27 = (unsigned __int16)v3 - v21 - 1;
    if ( (unsigned __int16)v3 - v21 == 1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      while ( v27 > 0 )
      {
        v28 = *v26;
        if ( (unsigned __int8)(v28 - 48) > 9u )
          return (unsigned int)-1073741811;
        ++v26;
        v24 = v28 + 10 * v24 - 48;
        --v27;
      }
      v29 = (unsigned int)v23[3];
      v30 = 0;
      v31 = (unsigned int)(v23[2] - v29) >> 1;
      if ( v31
        && (v32 = (_WORD *)(v29 + a1 + (unsigned int)v23[1]), *v32 == 45)
        && (v33 = v32 + 1, (v34 = v31 - 1) != 0) )
      {
        while ( v34 > 0 )
        {
          v35 = *v33;
          if ( (unsigned __int16)(v35 - 48) > 9u )
            return (unsigned int)-1073741596;
          ++v33;
          --v34;
          v30 = v35 + 2 * (5 * v30 - 24);
        }
        if ( v24 > v30 )
          goto LABEL_35;
        if ( v23[5] )
          *a3 = *(_DWORD *)((unsigned int)v23[4] + a1 + 16) == 0 ? 0xF2 : 0;
        else
          *a3 = 242;
      }
      else
      {
        return (unsigned int)-1073741596;
      }
    }
  }
  return v5;
}
