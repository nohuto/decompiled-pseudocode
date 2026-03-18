/*
 * XREFs of mbtowc @ 0x1401C90D0
 * Callers:
 *     _woutput_l @ 0x1401C7CAC (_woutput_l.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar_0 @ 0x1401C9338 (RtlAnsiCharToUnicodeChar_0.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      SourceCharacter = (PUCHAR)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar_0(&SourceCharacter);
      return (_DWORD)SourceCharacter - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
