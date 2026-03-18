/*
 * XREFs of ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x18012A870
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18012A8AC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 */

struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::GetRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  __int64 v2; // rcx
  struct IBitmapRealization *result; // rax

  if ( !*((_QWORD *)this + 26) )
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(this);
  v2 = *((_QWORD *)this + 26);
  result = (struct IBitmapRealization *)(v2 + 8);
  if ( !v2 )
    return 0LL;
  return result;
}
