/*
 * XREFs of ?IsSignaled@CFlipToken@@UEBA_NXZ @ 0x1400561D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 13) )
  {
    if ( *((_BYTE *)this + 578) )
      return 1;
  }
  return result;
}
