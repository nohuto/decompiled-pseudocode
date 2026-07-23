/*
 * XREFs of ApiSetpGetContractKeyInfo @ 0x1800E7488
 * Callers:
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180116BE8 (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180116F14 (ApiSetQuerySchemaInfo_V7.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetContractKeyInfo(_QWORD *a1, unsigned __int16 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // r10
  char v6; // cl
  unsigned __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  _BYTE *v12; // r14
  char v13; // r12
  char v14; // bp
  __int16 v15; // r11
  char v16; // cl
  char i; // si
  __int64 v18; // rbx
  _BYTE *v19; // r10
  char v20; // r10
  char *v21; // rcx
  char v22; // di
  char v23; // r11
  __int16 v24; // dx
  _BYTE *v26; // r10

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( a2 < 5u )
    return 0;
  v6 = 0;
  if ( a3 )
  {
    if ( (unsigned __int16)(2 * a2) < 8u )
      goto LABEL_12;
    v7 = *a1 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v7 != 0x2D004900500041LL )
    {
      v8 = v7 == 0x2D005400580045LL;
      goto LABEL_11;
    }
    goto LABEL_40;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( *((_BYTE *)a1 + v9) );
  if ( (unsigned __int64)(v9 - 4) <= 0xFFFB )
  {
    v10 = *(_DWORD *)a1 & 0xFFDFDFDF;
    if ( v10 != *(_QWORD *)"API-" )
    {
      v8 = v10 == *(_QWORD *)"EXT-";
LABEL_11:
      if ( !v8 )
        goto LABEL_12;
    }
LABEL_40:
    v6 = 1;
  }
LABEL_12:
  if ( v6 )
  {
    *(_QWORD *)a4 = a1;
    v11 = 2LL * a2;
    *(_WORD *)(a4 + 8) = a2;
    if ( !a3 )
      v11 = a2;
    *(_BYTE *)(a4 + 10) = a3;
    v12 = (char *)a1 + v11;
    v13 = 0;
    v14 = 0;
    v15 = 0;
LABEL_16:
    while ( 2 )
    {
      v16 = 0;
      for ( i = 1; ; i = 0 )
      {
        if ( a2 <= 1u )
          return 0;
        --a2;
        v18 = (a3 != 0) + 1LL;
        v12 -= v18;
        if ( *v12 == 45 )
          break;
        if ( *v12 == 126 )
        {
          if ( v14 )
            return 0;
          *(_WORD *)(a4 + 18) = v4;
          *(_DWORD *)(a4 + 12) = 2;
          *(_WORD *)(a4 + 22) = v4 - a2 - 1;
          goto LABEL_21;
        }
        if ( *v12 == 46 )
        {
          if ( !v14 && !v13 )
          {
            v4 = a2;
            v13 = 1;
            goto LABEL_16;
          }
          return 0;
        }
        if ( (unsigned __int8)(*v12 - 48) <= 9u )
        {
          v15 = (unsigned __int8)*v12 + 10 * v15 - 48;
          if ( i )
            v16 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      if ( v16 )
      {
        if ( !v14 )
        {
          *(_WORD *)(a4 + 24) = v15;
          v14 = 1;
          v15 = 0;
          *(_DWORD *)(a4 + 12) = 3;
          *(_WORD *)(a4 + 18) = a2;
          continue;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 12) = 1;
        a2 = v4;
        *(_WORD *)(a4 + 18) = v4;
      }
      break;
    }
LABEL_21:
    *(_WORD *)(a4 + 20) = a2;
    if ( a2 > 7u )
    {
      v19 = (char *)a1 + (-(__int64)(a3 != 0) & 4) + 4;
      if ( ((*v19 - 77) & 0xDF) == 0 )
      {
        v26 = &v19[v18];
        if ( ((*v26 - 83) & 0xDF) == 0 && v26[v18] == 45 )
          *(_DWORD *)(a4 + 26) = 393220;
      }
    }
    v20 = 0;
    v21 = (char *)a1 + 2 * a2;
    v22 = 0;
    while ( a2 > 4u )
    {
      v21 -= v18;
      --a2;
      v23 = *v21;
      if ( (unsigned __int8)(*v21 - 48) > 9u )
      {
        if ( v22 && ((v23 - 76) & 0xDF) == 0 )
        {
          v24 = a2 - 1;
          if ( v21[-v18] == 45 )
          {
            *(_WORD *)(a4 + 30) = v24;
            *(_WORD *)(a4 + 32) = v24 + (v20 != 0) + 1;
          }
        }
        return 1;
      }
      if ( !v22 && v23 == 49 )
        v20 = 1;
      v22 = 1;
    }
    return 1;
  }
  return 0;
}
