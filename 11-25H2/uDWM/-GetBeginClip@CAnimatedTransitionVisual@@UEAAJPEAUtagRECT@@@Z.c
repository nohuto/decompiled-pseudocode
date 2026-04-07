/*
 * XREFs of ?GetBeginClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800A3AD0
 * Callers:
 *     ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800D3768 (-BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginClip(CAnimatedTransitionVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 840);
  return result;
}
