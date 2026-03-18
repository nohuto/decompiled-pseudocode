/*
 * XREFs of ?TryGetClipPlaneInfo@CDrawingContext@@QEBAPEAVClipPlaneInfoRef@@XZ @ 0x18019FB00
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

struct ClipPlaneInfoRef *__fastcall CDrawingContext::TryGetClipPlaneInfo(CDrawingContext *this)
{
  __int64 v1; // rdx
  struct ClipPlaneInfoRef *result; // rax

  v1 = *((_QWORD *)this + 412);
  result = 0LL;
  if ( v1 )
    return *(struct ClipPlaneInfoRef **)(v1 + 256);
  return result;
}
