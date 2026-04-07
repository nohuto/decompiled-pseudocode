/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x1800212F0
 * Callers:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0CClientArea@@IEAA@XZ @ 0x180022D98 (--0CClientArea@@IEAA@XZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180062DDC (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800A9634 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800DE20C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CWindowTarget@@IEAA@XZ @ 0x1800E5214 (--0CWindowTarget@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  __int64 v1; // rcx
  CVisual *result; // rax

  CBaseObject::CBaseObject(this);
  *(_DWORD *)(v1 + 120) = -2;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_DWORD *)(v1 + 108) = 1065353216;
  *(_DWORD *)(v1 + 104) = 1065353216;
  *(_QWORD *)(v1 + 112) = 0x3FF0000000000000LL;
  *(_DWORD *)(v1 + 72) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 80) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 76) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 84) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 124) = -1;
  *(_DWORD *)(v1 + 128) = -1;
  result = (CVisual *)v1;
  *(_QWORD *)v1 = &CVisual::`vftable';
  return result;
}
