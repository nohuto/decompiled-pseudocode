/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x1409FB5C8
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  switch ( (_DWORD)xmmword_140F0D8D0 )
  {
    case 0:
      return (xmmword_140F0D8F8 & 0xFFFFFFFD) == 0;
    case 1:
      if ( (_DWORD)xmmword_140F0D8F8 == 1 )
        return *((_QWORD *)&xmmword_140F0D8F8 + 1) == (_QWORD)xmmword_140F0D8E0;
      break;
    case 2:
      return (xmmword_140F0D8F8 & 0xFFFFFFFD) == 0;
    case 3:
      return (_DWORD)xmmword_140F0D8F8 == 5;
  }
  return v0;
}
