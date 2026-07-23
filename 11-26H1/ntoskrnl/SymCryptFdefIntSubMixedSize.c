/*
 * XREFs of SymCryptFdefIntSubMixedSize @ 0x140567B70
 * Callers:
 *     SymCryptIntSubMixedSize @ 0x14055E8FC (SymCryptIntSubMixedSize.c)
 * Callees:
 *     SymCryptFdefRawNeg @ 0x1405681CC (SymCryptFdefRawNeg.c)
 *     SymCryptFdefRawSubUint32 @ 0x140568278 (SymCryptFdefRawSubUint32.c)
 *     SymCryptFdefRawSubAsm @ 0x140570740 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefIntSubMixedSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // r8d
  __int64 v18; // rcx
  int v19; // eax
  int *v20; // rdi

  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a3 + 4);
  v9 = a3 + 32;
  v10 = a2 + 32;
  v11 = a1 + 32;
  if ( v3 >= v5 )
  {
    v15 = SymCryptFdefRawSubAsm(v11, v10, v9, v5);
    v13 = SymCryptFdefRawSubUint32(a1 + 32 + 64LL * v5, v15, a3 + 32 + 64LL * v5, v3 - v5);
    v14 = 16 * v3;
  }
  else
  {
    v12 = SymCryptFdefRawSubAsm(v11, v10, v9, v3);
    v13 = SymCryptFdefRawNeg(a2 + 4 * (16 * v3 + 8LL), v12, a3 + 32 + 64LL * v3, v5 - v3);
    v14 = 16 * v5;
  }
  v16 = 16 * v6;
  v17 = v13;
  if ( v14 < v16 )
  {
    v18 = v16 - v14;
    v19 = -v13;
    v20 = (int *)(a3 + 32 + 4LL * v14);
    while ( v18 )
    {
      *v20++ = v19;
      --v18;
    }
  }
  return v17;
}
