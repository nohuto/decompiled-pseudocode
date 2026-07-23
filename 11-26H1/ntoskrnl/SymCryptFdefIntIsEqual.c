/*
 * XREFs of SymCryptFdefIntIsEqual @ 0x14056FDC4
 * Callers:
 *     SymCryptIntIsEqual @ 0x14055E804 (SymCryptIntIsEqual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntIsEqual(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // rdi
  _DWORD *v10; // r10
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r10
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rax

  v2 = a2 + 32;
  v3 = a1 + 32;
  v4 = *(_DWORD *)(a1 + 4) << 6 >> 2;
  v5 = *(_DWORD *)(a2 + 4) << 6 >> 2;
  v6 = v5;
  if ( v4 < v5 )
    v6 = *(_DWORD *)(a1 + 4) << 6 >> 2;
  v7 = 0;
  v8 = 0;
  if ( v6 )
  {
    v9 = v6;
    v10 = (_DWORD *)(a1 + 32);
    v8 = v6;
    do
    {
      v11 = *v10 ^ *(_DWORD *)((char *)v10 + v2 - v3);
      ++v10;
      v7 |= v11;
      --v9;
    }
    while ( v9 );
  }
  if ( v8 < v4 )
  {
    v12 = v8;
    v13 = v4 - v8;
    v8 = v4;
    v14 = (_DWORD *)(v3 + 4 * v12);
    do
    {
      v7 |= *v14++;
      --v13;
    }
    while ( v13 );
  }
  if ( v8 < v5 )
  {
    v15 = (_DWORD *)(v2 + 4LL * v8);
    v16 = v5 - v8;
    do
    {
      v7 |= *v15++;
      --v16;
    }
    while ( v16 );
  }
  return (unsigned int)~((unsigned __int64)-(__int64)v7 >> 32);
}
