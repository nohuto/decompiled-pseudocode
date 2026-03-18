/*
 * XREFs of ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ @ 0x180176110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CVisual::GetClipForHitTest(CVisual *this)
{
  if ( (*((_BYTE *)this + 101) & 0x40) != 0 )
    return 0LL;
  else
    return (struct CGeometry *)*((_QWORD *)this + 30);
}
