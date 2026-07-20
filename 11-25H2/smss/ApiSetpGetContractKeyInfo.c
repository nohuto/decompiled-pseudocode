/*
 * XREFs of ApiSetpGetContractKeyInfo @ 0x140019CFC
 * Callers:
 *     ApiSetpResolveHost @ 0x14001990C (ApiSetpResolveHost.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetContractKeyInfo(_QWORD *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  char v6; // cl
  char v7; // bp
  char v8; // bl
  _BYTE *v9; // rsi
  char v10; // r10
  unsigned __int16 v11; // r8
  __int16 v12; // r11
  char v13; // di

  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  if ( a2 < 5u )
    return 0;
  if ( (unsigned __int16)(2 * a2) < 8u )
    return 0;
  v5 = *a1 & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v5 != 0x2D004900500041LL && v5 != 0x2D005400580045LL )
    return 0;
  v6 = 0;
  *(_QWORD *)a4 = a1;
  *(_WORD *)(a4 + 8) = a2;
  v7 = 0;
  *(_BYTE *)(a4 + 10) = 1;
  v8 = 0;
  v9 = (char *)a1 + 2 * a2;
  v10 = 0;
  v11 = a2;
  v12 = 0;
  v13 = 1;
  while ( 1 )
  {
    v9 -= 2;
    --v11;
    if ( *v9 != 45 )
      break;
    if ( !v10 )
    {
      *(_DWORD *)(a4 + 12) = 1;
      *(_WORD *)(a4 + 18) = a2;
      *(_WORD *)(a4 + 20) = a2;
      return 1;
    }
    if ( v8 )
      goto LABEL_25;
    *(_WORD *)(a4 + 24) = v12;
    v8 = 1;
    v12 = 0;
    *(_DWORD *)(a4 + 12) = 3;
    *(_WORD *)(a4 + 18) = v11;
    v13 = 1;
    v10 = 0;
LABEL_20:
    if ( v11 <= 1u )
      return v6;
  }
  if ( *v9 != 126 )
  {
    if ( *v9 == 46 )
    {
      if ( v8 || v7 )
        return v6;
      a2 = v11;
      v7 = 1;
      v13 = 1;
      v10 = 0;
    }
    else
    {
      if ( (unsigned __int8)(*v9 - 48) > 9u )
      {
        v10 = 0;
      }
      else
      {
        v12 = (unsigned __int8)*v9 + 10 * v12 - 48;
        if ( v13 )
          v10 = 1;
      }
      v13 = 0;
    }
    goto LABEL_20;
  }
  if ( v8 )
    return v6;
  *(_WORD *)(a4 + 18) = a2;
  *(_DWORD *)(a4 + 12) = 2;
  *(_WORD *)(a4 + 22) = a2 - v11 - 1;
LABEL_25:
  *(_WORD *)(a4 + 20) = v11;
  return 1;
}
