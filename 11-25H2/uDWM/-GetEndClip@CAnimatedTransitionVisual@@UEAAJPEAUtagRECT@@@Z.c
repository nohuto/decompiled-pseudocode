/*
 * XREFs of ?GetEndClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800A3B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetEndClip(CAnimatedTransitionVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 856);
  return result;
}
