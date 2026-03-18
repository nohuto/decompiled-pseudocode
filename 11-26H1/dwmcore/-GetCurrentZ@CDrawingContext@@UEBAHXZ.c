/*
 * XREFs of ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x1801E1AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetCurrentZ(CDrawingContext *this)
{
  if ( *((_BYTE *)this + 7921) )
    return *((unsigned int *)this + 1990);
  else
    return 0LL;
}
