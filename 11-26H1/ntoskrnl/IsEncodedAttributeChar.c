/*
 * XREFs of IsEncodedAttributeChar @ 0x140818C94
 * Callers:
 *     EncodeAttributeName @ 0x140818828 (EncodeAttributeName.c)
 *     DecodeAttributeName @ 0x140A6452C (DecodeAttributeName.c)
 * Callees:
 *     iswalnum @ 0x140536CC0 (iswalnum.c)
 */

char __fastcall IsEncodedAttributeChar(wint_t a1)
{
  char v2; // dl
  __int64 i; // rcx

  v2 = 1;
  if ( a1 < 0x7Fu )
  {
    if ( iswalnum(a1) )
    {
      return 0;
    }
    else
    {
      v2 = 1;
      for ( i = 0LL; (unsigned int)i < 0x15; i = (unsigned int)(i + 1) )
      {
        if ( NotEncodedAttributeChar[i] == a1 )
          return 0;
      }
    }
  }
  return v2;
}
