/*
 * XREFs of ?HasClipPlanes@CDrawingContext@@QEBA_NXZ @ 0x18017FA70
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::HasClipPlanes(CDrawingContext *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 412);
  return v1 && *(_QWORD *)(v1 + 256);
}
