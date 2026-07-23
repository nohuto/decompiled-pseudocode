/*
 * XREFs of RtlGetIntegerAtom @ 0x140974EE0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14045AA90 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 */

BOOLEAN __cdecl RtlGetIntegerAtom(PWSTR AtomName, PUSHORT IntegerAtom)
{
  wchar_t *v3; // rcx
  wchar_t *i; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  String = 0LL;
  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *AtomName != 35 )
      return 0;
    v3 = AtomName + 1;
    for ( i = v3; *i; ++i )
    {
      if ( (unsigned __int16)(*i - 48) > 9u )
        return 0;
    }
    String.Buffer = v3;
    String.Length = (_WORD)i - (_WORD)v3;
    String.MaximumLength = (_WORD)i - (_WORD)v3;
    Value = 0;
    if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
      return 0;
    if ( IntegerAtom )
    {
      if ( Value - 1 > 0xBFFF )
        *IntegerAtom = -16384;
      else
        *IntegerAtom = Value;
    }
  }
  else
  {
    if ( (unsigned __int16)AtomName >= 0xC000u )
      return 0;
    if ( !(_WORD)AtomName )
      LOWORD(AtomName) = -16384;
    if ( IntegerAtom )
    {
      *IntegerAtom = (unsigned __int16)AtomName;
      return 1;
    }
  }
  return 1;
}
