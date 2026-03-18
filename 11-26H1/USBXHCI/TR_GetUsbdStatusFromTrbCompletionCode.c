/*
 * XREFs of TR_GetUsbdStatusFromTrbCompletionCode @ 0x140027610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetUsbdStatusFromTrbCompletionCode(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a2 == 28 )
  {
    return 0;
  }
  else
  {
    switch ( a2 )
    {
      case 0:
        return a3;
      case 1:
      case 13:
      case 26:
        return 0;
      case 2:
        return (unsigned int)-1073741805;
      case 3:
      case 31:
        result = 3221225490LL;
        break;
      case 6:
        result = 3221225476LL;
        break;
      case 10:
        return (unsigned int)-1073741803;
      case 20:
        result = 3221225492LL;
        break;
      case 23:
        result = 3221422080LL;
        break;
      case 27:
        return (unsigned int)-1073610752;
      case 34:
        return (unsigned int)-1073741802;
      case 199:
        a3 = -1073741807;
        if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x3Eu) )
          return (unsigned int)-1073709056;
        return a3;
      default:
        return (unsigned int)-1073741807;
    }
  }
  return result;
}
