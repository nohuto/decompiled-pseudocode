/*
 * XREFs of KiOpDecodeModRM @ 0x1403D5CA8
 * Callers:
 *     KiOpDecode @ 0x1403D53A8 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchBytes @ 0x1403D5C60 (KiOpFetchBytes.c)
 *     KiOpFetchNextByte @ 0x1403D5D84 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpDecodeModRM(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *v2; // rsi
  __int64 result; // rax
  char v5; // al
  int v6; // ebp
  char *i; // rsi
  int Bytes; // eax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (_BYTE *)(a1 + 65);
  v9 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    result = KiOpFetchNextByte(a1, a1 + 65);
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*v2 & 0xC0) == 0xC0 || (*v2 & 7) != 4 || (result = KiOpFetchNextByte(a1, a1 + 66), (int)result >= 0) )
  {
    v5 = *v2 >> 6;
    if ( !v5 && (*v2 & 7) == 5 || v5 == 2 )
    {
      Bytes = KiOpFetchBytes(a1, 4, a1 + 68);
      if ( Bytes < 0 )
        return (unsigned int)Bytes;
      return v1;
    }
    else if ( v5 == 1 )
    {
      v6 = 1;
      for ( i = &v9; ; ++i )
      {
        result = KiOpFetchNextByte(a1, i);
        if ( (int)result < 0 )
          break;
        if ( !--v6 )
        {
          *(_DWORD *)(a1 + 68) = v9;
          return 0LL;
        }
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
