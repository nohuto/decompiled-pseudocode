/*
 * XREFs of SymCryptFdefIntDivPow2 @ 0x1405677DC
 * Callers:
 *     SymCryptIntDivPow2 @ 0x14055E71C (SymCryptIntDivPow2.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptFdefIntDivPow2(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rbp
  char v6; // di
  char v7; // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax

  v4 = 0LL;
  v6 = a2 & 0x3F;
  v7 = 63 - (a2 & 0x3F);
  v8 = 8LL * *(unsigned int *)(a3 + 4);
  v3 = v8;
  if ( a2 >> 6 < v8 )
    v8 = a2 >> 6;
  if ( v8 < v3 )
  {
    v9 = *(_QWORD *)(a1 + 8 * v8 + 32);
    v10 = v8 + 1;
    if ( v8 + 1 < v3 )
    {
      v11 = 8 * v8;
      v12 = 8 * v8;
      do
      {
        v13 = *(_QWORD *)(a1 + v11 + 40);
        ++v4;
        ++v10;
        v14 = (v9 >> v6) | (2 * (v13 << v7));
        v9 = v13;
        *(_QWORD *)(v12 + a3 + 8 * (4 - v8)) = v14;
        v12 += 8LL;
        v11 = v12;
      }
      while ( v10 < v3 );
    }
    *(_QWORD *)(a3 + 8 * v4 + 32) = v9 >> v6;
  }
  return SymCryptWipe(a3 + 32 + 8 * (v3 - v8), 8 * v8);
}
