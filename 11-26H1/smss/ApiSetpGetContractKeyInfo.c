/*
 * XREFs of ApiSetpGetContractKeyInfo @ 0x14001A2E4
 * Callers:
 *     ApiSetpResolveHost @ 0x14001955C (ApiSetpResolveHost.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetContractKeyInfo(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r8
  unsigned __int64 v6; // rax
  _BYTE *v7; // r14
  char v8; // si
  char v9; // r11
  char v10; // cl
  __int16 v11; // r10
  char v12; // bl
  char v14; // r11
  char v15; // cl
  char *v16; // r10
  char v17; // r8
  __int16 v18; // dx

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( a2 < 5u )
    return 0;
  if ( (unsigned __int16)(2 * a2) < 8u )
    return 0;
  v6 = *(_QWORD *)a1 & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v6 != 0x2D004900500041LL && v6 != 0x2D005400580045LL )
    return 0;
  *(_QWORD *)a4 = a1;
  *(_WORD *)(a4 + 8) = a2;
  *(_BYTE *)(a4 + 10) = 1;
  v7 = (_BYTE *)(a1 + 2LL * a2);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 1;
  while ( 1 )
  {
    --a2;
    v7 -= 2;
    if ( *v7 != 45 )
      break;
    if ( !v10 )
    {
      *(_DWORD *)(a4 + 12) = 1;
      a2 = v4;
      *(_WORD *)(a4 + 18) = v4;
      goto LABEL_25;
    }
    if ( v9 )
      goto LABEL_25;
    *(_WORD *)(a4 + 24) = v11;
    v9 = 1;
    v11 = 0;
    *(_DWORD *)(a4 + 12) = 3;
    *(_WORD *)(a4 + 18) = a2;
    v12 = 1;
    v10 = 0;
LABEL_20:
    if ( a2 <= 1u )
      return 0;
  }
  if ( *v7 != 126 )
  {
    if ( *v7 == 46 )
    {
      if ( v9 || v8 )
        return 0;
      v4 = a2;
      v8 = 1;
      v12 = 1;
      v10 = 0;
    }
    else
    {
      if ( (unsigned __int8)(*v7 - 48) > 9u )
      {
        v10 = 0;
      }
      else
      {
        v11 = (unsigned __int8)*v7 + 10 * v11 - 48;
        if ( v12 )
          v10 = 1;
      }
      v12 = 0;
    }
    goto LABEL_20;
  }
  if ( v9 )
    return 0;
  *(_WORD *)(a4 + 18) = v4;
  *(_DWORD *)(a4 + 12) = 2;
  *(_WORD *)(a4 + 22) = v4 - a2 - 1;
LABEL_25:
  *(_WORD *)(a4 + 20) = a2;
  if ( a2 > 7u
    && ((*(_BYTE *)(a1 + 8) - 77) & 0xDF) == 0
    && ((*(_BYTE *)(a1 + 10) - 83) & 0xDF) == 0
    && *(_BYTE *)(a1 + 12) == 45 )
  {
    *(_DWORD *)(a4 + 26) = 393220;
  }
  v14 = 0;
  v15 = 0;
  v16 = (char *)(a1 + 2LL * a2);
  while ( a2 > 4u )
  {
    v16 -= 2;
    --a2;
    v17 = *v16;
    if ( (unsigned __int8)(*v16 - 48) > 9u )
    {
      if ( v14 )
      {
        if ( ((v17 - 76) & 0xDF) == 0 )
        {
          v18 = a2 - 1;
          if ( *(v16 - 2) == 45 )
          {
            *(_WORD *)(a4 + 30) = v18;
            *(_WORD *)(a4 + 32) = v18 + (v15 != 0) + 1;
          }
        }
      }
      return 1;
    }
    if ( !v14 && v17 == 49 )
      v15 = 1;
    v14 = 1;
  }
  return 1;
}
