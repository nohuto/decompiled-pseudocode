/*
 * XREFs of SymCryptMlDsaHintBitPack @ 0x140571C78
 * Callers:
 *     SymCryptMlDsaSigEncode @ 0x140572CC0 (SymCryptMlDsaSigEncode.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptMlDsaHintBitPack(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned int v8; // r9d
  _DWORD *v9; // rdx
  unsigned int i; // ecx
  __int64 v11; // rax

  result = SymCryptWipe(a3, *(unsigned __int8 *)(a1 + 25));
  v7 = 0LL;
  v8 = 0;
  if ( *a2 )
  {
    do
    {
      v9 = &a2[1024 * (unsigned __int64)v8 + 8];
      for ( i = 0; i < 0x100; ++i )
      {
        if ( *v9 )
        {
          *(_BYTE *)(v7 + a3) = i;
          v7 = (unsigned int)(v7 + 1);
        }
        ++v9;
      }
      v11 = v8 + *(unsigned __int8 *)(a1 + 25);
      ++v8;
      *(_BYTE *)(v11 + a3) = v7;
      result = (unsigned __int8)*a2;
    }
    while ( v8 < (unsigned int)result );
  }
  return result;
}
