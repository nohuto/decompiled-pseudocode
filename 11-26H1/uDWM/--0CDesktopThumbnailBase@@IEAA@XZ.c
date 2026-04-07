/*
 * XREFs of ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180066D04
 * Callers:
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800668CC (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800AD778 (-Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800DE90C (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  __int64 v1; // r9
  CDesktopThumbnailBase *result; // rax

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_QWORD *)(v1 + 192) = 0LL;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_DWORD *)(v1 + 208) = 0;
  result = (CDesktopThumbnailBase *)v1;
  *(_QWORD *)(v1 + 216) = -1LL;
  return result;
}
