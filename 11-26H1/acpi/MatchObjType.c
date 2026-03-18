/*
 * XREFs of MatchObjType @ 0x140037320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MatchObjType(int a1, int a2)
{
  char result; // al

  if ( a1 == a2 || a1 == 14 && a2 == 1 )
    return 1;
  switch ( a1 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      a1 = 133;
      goto LABEL_10;
    case 5:
    case 14:
      a1 = 134;
LABEL_10:
      if ( a1 == a2 )
        return 1;
      goto LABEL_4;
    default:
LABEL_4:
      if ( a2 == 135 && (unsigned int)(a1 - 133) <= 1 )
        return 1;
      if ( a1 )
      {
        if ( !a2 )
          return 1;
      }
      else if ( a2 != 134 )
      {
        return 1;
      }
      result = 0;
      break;
  }
  return result;
}
