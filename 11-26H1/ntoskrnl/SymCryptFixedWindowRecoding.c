/*
 * XREFs of SymCryptFixedWindowRecoding @ 0x140573EE4
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140566010 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     SymCryptIntAddUint32 @ 0x14055E618 (SymCryptIntAddUint32.c)
 *     SymCryptIntDivPow2 @ 0x14055E71C (SymCryptIntDivPow2.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055E7D4 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntMaskedCopy @ 0x14055E84C (SymCryptIntMaskedCopy.c)
 *     SymCryptIntSubUint32 @ 0x14055E92C (SymCryptIntSubUint32.c)
 */

__int64 __fastcall SymCryptFixedWindowRecoding(char a1, __int64 a2, __int64 a3, __int64 a4, int *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  unsigned int v8; // edi
  int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // rbp
  int *v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  int ValueLsbits32; // eax
  unsigned __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // [rsp+88h] [rbp+10h]

  v18 = a2;
  v6 = (__int64)a5;
  v7 = a4;
  v8 = ~(-1 << a1);
  v9 = 1 << (a1 - 1);
  v10 = ~v9;
  v11 = (unsigned int)(a6 - 1);
  if ( a6 != 1 )
  {
    v12 = a5;
    v13 = a4 - (_QWORD)a5;
    v14 = a2;
    do
    {
      ValueLsbits32 = SymCryptIntGetValueLsbits32(v14);
      v16 = (unsigned __int64)-(__int64)(v9 & v8 & ValueLsbits32) >> 32;
      *v12 = ~(_DWORD)v16;
      *(int *)((char *)v12 + v13) = ((unsigned int)v16 & v10 & v8 & ValueLsbits32 | ~(_DWORD)v16 & (v9
                                                                                                  - (v8 & ValueLsbits32))) >> 1;
      SymCryptIntSubUint32();
      SymCryptIntAddUint32();
      SymCryptIntMaskedCopy();
      SymCryptIntDivPow2();
      ++v12;
      --v11;
    }
    while ( v11 );
    v11 = (unsigned int)(a6 - 1);
    v6 = (__int64)a5;
    v7 = a4;
    a2 = v18;
  }
  *(_DWORD *)(v6 + 4 * v11) = 0;
  result = (v8 >> 1) & (v10 >> 1) & ((unsigned int)SymCryptIntGetValueLsbits32(a2) >> 1);
  *(_DWORD *)(v7 + 4 * v11) = result;
  return result;
}
