/*
 * XREFs of SymCryptMarvin32AppendBlocks @ 0x1405584FC
 * Callers:
 *     SymCryptMarvin32Append @ 0x140558438 (SymCryptMarvin32Append.c)
 *     SymCryptMarvin32Result @ 0x140558648 (SymCryptMarvin32Result.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SymCryptMarvin32AppendBlocks(int *a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int *v4; // r11
  int v5; // r9d
  _DWORD *result; // rax
  _DWORD *v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // r9d
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // r9d

  v3 = *a1;
  v4 = a1 + 1;
  v5 = a1[1];
  result = (_DWORD *)(a3 & 0xC);
  v8 = (_DWORD *)((char *)result + a2);
  v9 = a3 - (_QWORD)result;
  if ( !result )
    goto LABEL_6;
  if ( result == (_DWORD *)4 )
    goto LABEL_10;
  if ( result == (_DWORD *)8 )
    goto LABEL_9;
  if ( result == (_DWORD *)12 )
  {
    while ( 1 )
    {
      v14 = v3 + *(v8 - 3);
      v15 = __ROL4__(v14, 20);
      v16 = v5 ^ v14;
      v17 = (v15 + v16) ^ __ROL4__(v16, 9);
      v3 = v17 + __ROL4__(v15 + v16, 27);
      v5 = __ROL4__(v17, 19);
LABEL_9:
      v4 = a1 + 1;
      v18 = v3 + *(v8 - 2);
      v19 = __ROL4__(v18, 20);
      v20 = v5 ^ v18;
      v21 = (v19 + v20) ^ __ROL4__(v20, 9);
      v3 = v21 + __ROL4__(v19 + v20, 27);
      v5 = __ROL4__(v21, 19);
LABEL_10:
      v22 = v3 + *(v8 - 1);
      v23 = __ROL4__(v22, 20);
      v24 = v5 ^ v22;
      v25 = (v23 + v24) ^ __ROL4__(v24, 9);
      v3 = v25 + __ROL4__(v23 + v24, 27);
      v5 = __ROL4__(v25, 19);
LABEL_6:
      result = v8;
      if ( !v9 )
        break;
      v8 += 4;
      v9 -= 16LL;
      v10 = v3 + *result;
      v11 = __ROL4__(v10, 20);
      v12 = v5 ^ v10;
      v13 = (v11 + v12) ^ __ROL4__(v12, 9);
      v3 = v13 + __ROL4__(v11 + v12, 27);
      v5 = __ROL4__(v13, 19);
    }
  }
  *a1 = v3;
  *v4 = v5;
  return result;
}
