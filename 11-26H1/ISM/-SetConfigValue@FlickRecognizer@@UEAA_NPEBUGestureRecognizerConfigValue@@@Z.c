/*
 * XREFs of ?SetConfigValue@FlickRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801B8CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall FlickRecognizer::SetConfigValue(FlickRecognizer *this, const struct GestureRecognizerConfigValue *a2)
{
  char v2; // r10

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 0xE:
      *((_WORD *)this + 78) = *((_WORD *)a2 + 2);
      break;
    case 0xF:
      *((_WORD *)this + 79) = *((_WORD *)a2 + 2);
      break;
    case 0x10:
      *((_WORD *)this + 80) = *((_WORD *)a2 + 2);
      break;
    case 0x11:
      *((_WORD *)this + 81) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
