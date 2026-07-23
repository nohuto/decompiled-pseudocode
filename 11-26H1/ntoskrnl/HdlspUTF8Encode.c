/*
 * XREFs of HdlspUTF8Encode @ 0x1406CF850
 * Callers:
 *     HdlspPutString @ 0x140C53304 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140C53474 (HdlspPutWideString.c)
 * Callees:
 *     <none>
 */

char __fastcall HdlspUTF8Encode(unsigned __int16 a1, _BYTE *a2)
{
  char result; // al
  __int16 v3; // ax

  result = 0x80;
  if ( (a1 & 0xFF80) != 0 )
  {
    v3 = a1 >> 6;
    if ( (a1 & 0xF800) != 0 )
    {
      result = v3 & 0x3F | 0x80;
      *a2 = (a1 >> 12) | 0xE0;
    }
    else
    {
      result = v3 & 0x1F | 0xC0;
    }
    LOBYTE(a1) = a1 & 0x3F | 0x80;
    a2[1] = result;
  }
  a2[2] = a1;
  return result;
}
