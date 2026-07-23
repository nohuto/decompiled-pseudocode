/*
 * XREFs of XmJxxOp @ 0x1404E91F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XmJxxOp(__int64 a1)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx

  v2 = *(_DWORD *)(a1 + 108) & 1;
  result = *(_DWORD *)(a1 + 108) >> 1;
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 16) >> 11;
    goto LABEL_11;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 16);
LABEL_11:
    v6 = v5 & 1;
    goto LABEL_12;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 16) >> 6;
    goto LABEL_11;
  }
  v4 = result - 1;
  if ( !v4 )
  {
    result = *(unsigned int *)(a1 + 16);
    v5 = result | (*(_DWORD *)(a1 + 16) >> 6);
    goto LABEL_11;
  }
  result = (unsigned int)(v4 - 1);
  if ( !(_DWORD)result )
  {
    v9 = *(_DWORD *)(a1 + 16);
    goto LABEL_17;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 16) >> 2;
    goto LABEL_11;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    result = *(unsigned int *)(a1 + 16);
    v9 = result ^ (*(_DWORD *)(a1 + 16) >> 4);
LABEL_17:
    v5 = v9 >> 7;
    goto LABEL_11;
  }
  if ( (_DWORD)result != 1 )
    return result;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = v7 ^ (v7 >> 4);
  result = v7 & 0x40;
  v6 = ((unsigned int)result | (v8 >> 1) & 0x40) >> 6;
LABEL_12:
  if ( v6 != v2 )
  {
    result = *(unsigned __int16 *)(a1 + 104);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
