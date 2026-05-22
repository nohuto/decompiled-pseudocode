/*
 * XREFs of ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801B2C80
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B2240 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B24F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     <none>
 */

char __fastcall MagnifierRecognizer::Active(MagnifierRecognizer *this)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)this || *((_BYTE *)this + 3) )
    return 1;
  return result;
}
