/*
 * XREFs of KiOpFetchBytes @ 0x1403D2C90
 * Callers:
 *     KiOpDecode @ 0x1403D23D8 (KiOpDecode.c)
 *     KiOpDecodeModRM @ 0x1403D2CD8 (KiOpDecodeModRM.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x1403D2DB4 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = KiOpFetchNextByte(a1, a3);
    if ( (int)result < 0 )
      break;
    ++a3;
    if ( !--a2 )
      return 0LL;
  }
  return result;
}
