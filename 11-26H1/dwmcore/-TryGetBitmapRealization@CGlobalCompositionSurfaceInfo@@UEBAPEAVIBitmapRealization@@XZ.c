/*
 * XREFs of ?TryGetBitmapRealization@CGlobalCompositionSurfaceInfo@@UEBAPEAVIBitmapRealization@@XZ @ 0x1802669F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::TryGetBitmapRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  return (struct IBitmapRealization *)((*((_QWORD *)this + 13) + 8LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL));
}
