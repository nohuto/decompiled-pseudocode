/*
 * XREFs of SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaPkEncode @ 0x1405721EC (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 *     SymCryptMlDsaSkEncode @ 0x140573034 (SymCryptMlDsaSkEncode.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptMlDsaTemporariesAllocateAndInitialize(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r10
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r9

  v5 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (a5 + 7) & 0xFFFFFFF8;
  v10 = *(_DWORD *)(a1 + 12) * a3 + 8 * (a4 + a3 + a2 + 40) + v9 + *(_DWORD *)(a1 + 4) * a4 + *(_DWORD *)(a1 + 8) * a2;
  result = SymCryptCallbackAlloc(v10);
  v12 = result;
  if ( result )
  {
    SymCryptWipe(result, v10);
    *(_DWORD *)v12 = v10;
    v13 = v12 + 320;
    *(_DWORD *)(v12 + 4) = v5;
    v14 = (__int64 *)(v12 + 272);
    *(_DWORD *)(v12 + 8) = v8;
    v15 = v5;
    *(_DWORD *)(v12 + 12) = v7;
    *(_DWORD *)(v12 + 16) = v9;
    if ( (_DWORD)v5 )
    {
      *v14 = v13;
      v13 += 8 * v5;
    }
    if ( (_DWORD)v8 )
    {
      *(_QWORD *)(v12 + 280) = v13;
      v13 += 8 * v8;
    }
    if ( (_DWORD)v7 )
    {
      *(_QWORD *)(v12 + 288) = v13;
      v13 += 8 * v7;
    }
    if ( (_DWORD)v5 )
    {
      v16 = 0LL;
      do
      {
        v17 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)v13 = *(_BYTE *)(a1 + 20);
        *(_DWORD *)(v13 + 4) = v17;
        *(_QWORD *)(v16 + *v14) = v13;
        v16 += 8LL;
        v13 += *(unsigned int *)(a1 + 8);
        --v15;
      }
      while ( v15 );
    }
    if ( (_DWORD)v8 )
    {
      v18 = 0LL;
      v19 = v8;
      do
      {
        v20 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)v13 = *(_BYTE *)(a1 + 21);
        *(_DWORD *)(v13 + 4) = v20;
        *(_QWORD *)(v18 + *(_QWORD *)(v12 + 280)) = v13;
        v18 += 8LL;
        v13 += *(unsigned int *)(a1 + 12);
        --v19;
      }
      while ( v19 );
    }
    if ( (_DWORD)v7 )
    {
      v21 = 0LL;
      v22 = v7;
      do
      {
        *(_QWORD *)(v21 + *(_QWORD *)(v12 + 288)) = v13;
        v21 += 8LL;
        v13 += *(unsigned int *)(a1 + 4);
        --v22;
      }
      while ( v22 );
    }
    if ( v9 )
      *(_QWORD *)(v12 + 296) = v13;
    return v12;
  }
  return result;
}
