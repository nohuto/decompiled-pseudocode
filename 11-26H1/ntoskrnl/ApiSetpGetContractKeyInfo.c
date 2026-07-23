/*
 * XREFs of ApiSetpGetContractKeyInfo @ 0x14052B9D0
 * Callers:
 *     ApiSetpResolveHost @ 0x14051F22C (ApiSetpResolveHost.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406DE9D8 (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1406E001C (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406E01F8 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
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
  __int64 v11; // r15
  unsigned __int8 *v12; // r15
  char v13; // r13
  char v14; // r14
  __int16 v15; // di
  char v16; // r11
  char i; // bp
  __int64 v18; // rbx
  __int16 v19; // cx
  _BYTE *v20; // r10
  _BYTE *v21; // r10
  char v22; // di
  char *v23; // rcx
  char v24; // r10
  char v25; // r11
  __int16 v26; // dx

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
      goto LABEL_13;
    v7 = *a1 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v7 != 0x2D004900500041LL )
    {
      v8 = v7 == 0x2D005400580045LL;
      goto LABEL_11;
    }
    goto LABEL_12;
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
        goto LABEL_13;
    }
LABEL_12:
    v6 = 1;
  }
LABEL_13:
  if ( v6 )
  {
    *(_QWORD *)a4 = a1;
    v11 = 2LL * a2;
    *(_WORD *)(a4 + 8) = a2;
    if ( !a3 )
      v11 = a2;
    *(_BYTE *)(a4 + 10) = a3;
    v12 = (unsigned __int8 *)a1 + v11;
    v13 = 0;
    v14 = 0;
    v15 = 0;
LABEL_17:
    v16 = 0;
    while ( 2 )
    {
      for ( i = 1; ; i = 0 )
      {
        if ( a2 <= 1u )
          return 0;
        --a2;
        v18 = (a3 != 0) + 1LL;
        v12 -= v18;
        v19 = *v12;
        if ( (_BYTE)v19 == 45 )
          break;
        if ( (_BYTE)v19 == 126 )
        {
          if ( v14 )
            return 0;
          *(_WORD *)(a4 + 18) = v4;
          *(_DWORD *)(a4 + 12) = 2;
          *(_WORD *)(a4 + 22) = v4 - a2 - 1;
          goto LABEL_37;
        }
        if ( (_BYTE)v19 == 46 )
        {
          if ( !v14 && !v13 )
          {
            v4 = a2;
            v13 = 1;
            goto LABEL_17;
          }
          return 0;
        }
        if ( (unsigned __int8)(v19 - 48) > 9u )
        {
          v16 = 0;
        }
        else
        {
          v15 = v19 + 10 * v15 - 48;
          if ( i )
            v16 = 1;
        }
      }
      if ( v16 )
      {
        if ( !v14 )
        {
          v16 = 0;
          *(_WORD *)(a4 + 24) = v15;
          v15 = 0;
          *(_DWORD *)(a4 + 12) = 3;
          *(_WORD *)(a4 + 18) = a2;
          v14 = 1;
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
LABEL_37:
    *(_WORD *)(a4 + 20) = a2;
    if ( a2 > 7u )
    {
      v20 = (char *)a1 + (-(__int64)(a3 != 0) & 4) + 4;
      if ( ((*v20 - 77) & 0xDF) == 0 )
      {
        v21 = &v20[v18];
        if ( ((*v21 - 83) & 0xDF) == 0 && v21[v18] == 45 )
          *(_DWORD *)(a4 + 26) = 393220;
      }
    }
    v22 = 0;
    v23 = (char *)a1 + 2 * a2;
    v24 = 0;
    while ( a2 > 4u )
    {
      v23 -= v18;
      --a2;
      v25 = *v23;
      if ( (unsigned __int8)(*v23 - 48) > 9u )
      {
        if ( v22 )
        {
          if ( ((v25 - 76) & 0xDF) == 0 )
          {
            v26 = a2 - 1;
            if ( v23[-v18] == 45 )
            {
              *(_WORD *)(a4 + 30) = v26;
              *(_WORD *)(a4 + 32) = v26 + (v24 != 0) + 1;
            }
          }
        }
        return 1;
      }
      if ( !v22 && v25 == 49 )
        v24 = 1;
      v22 = 1;
    }
    return 1;
  }
  return 0;
}
