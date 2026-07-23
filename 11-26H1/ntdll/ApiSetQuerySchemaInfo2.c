/*
 * XREFs of ApiSetQuerySchemaInfo2 @ 0x180111A5C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1801482C0 (RtlIsApiSetImplemented.c)
 *     ApiSetQuerySchema @ 0x18015B560 (ApiSetQuerySchema.c)
 * Callees:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180116BE8 (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetpSearchForApiSetA @ 0x18013B410 (ApiSetpSearchForApiSetA.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v9; // r11d
  __int64 v10; // rax
  char *v11; // r8
  bool v12; // cf
  int v14; // r10d
  char *v15; // r9
  char v16; // cl
  char *i; // r9
  char v18; // cl
  unsigned __int16 v19; // si
  _BYTE *v20; // rax
  unsigned int *v21; // rax
  unsigned int *v22; // rdx
  unsigned __int16 v23; // r9
  _BYTE *v24; // r8
  _BYTE *v25; // r8
  int v26; // ecx
  __int16 v27; // ax
  unsigned int v28; // r11d
  unsigned int v29; // r10d
  _WORD *v30; // r8
  _WORD *v31; // r8
  int v32; // r10d
  int v33; // eax

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
      if ( !*v15 )
        return 3221225485LL;
      v16 = *v15 + 32;
      if ( (unsigned __int8)(*v15 - 65) > 0x19u )
        v16 = *v15;
      if ( v11[(_QWORD)v15] != v16 )
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
      v12 = *(_DWORD *)a1 < 6u;
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
    if ( !*i )
      break;
    v18 = *i + 32;
    if ( (unsigned __int8)(*i - 65) > 0x19u )
      v18 = *i;
    if ( i[(_QWORD)v11] != v18 )
      break;
    --v9;
  }
  v19 = v3;
  v20 = (char *)a2 + (unsigned __int16)v3;
  do
  {
    if ( v19 <= 1u )
      break;
    --v20;
    --v19;
  }
  while ( *v20 != 45 );
  v21 = (unsigned int *)ApiSetpSearchForApiSetA(a1, a2, v19, i);
  v22 = v21;
  if ( !v21 )
  {
LABEL_35:
    *a3 = 241;
    return v5;
  }
  if ( (*(_BYTE *)v21 & 4) != 0 )
  {
    *a3 = 0;
  }
  else
  {
    v23 = 0;
    if ( (unsigned __int16)v3 - v19 <= 0 )
      return (unsigned int)-1073741811;
    v24 = (char *)a2 + v19;
    if ( *v24 != 45 )
      return (unsigned int)-1073741811;
    v25 = v24 + 1;
    v26 = (unsigned __int16)v3 - v19 - 1;
    if ( (unsigned __int16)v3 - v19 == 1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      while ( v26 > 0 )
      {
        if ( (unsigned __int8)(*v25 - 48) > 9u )
          return (unsigned int)-1073741811;
        v27 = (unsigned __int8)*v25++;
        v23 = v27 + 10 * v23 - 48;
        --v26;
      }
      v28 = 0;
      v29 = (v22[2] - v22[3]) >> 1;
      if ( v29 && (v30 = (_WORD *)(a1 + v22[1] + v22[3]), *v30 == 45) && (v31 = v30 + 1, (v32 = v29 - 1) != 0) )
      {
        while ( v32 > 0 )
        {
          if ( (unsigned __int16)(*v31 - 48) > 9u )
            return (unsigned int)-1073741596;
          v33 = (unsigned __int16)*v31++;
          --v32;
          v28 = v33 + 2 * (5 * v28 - 24);
        }
        if ( v23 > v28 )
          goto LABEL_35;
        if ( v22[5] )
          *a3 = *(_DWORD *)(v22[4] + a1 + 16) == 0 ? 0xF2 : 0;
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
