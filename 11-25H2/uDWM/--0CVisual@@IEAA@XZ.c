/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x18000872C
 * Callers:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800086EC (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0CClientArea@@IEAA@XZ @ 0x180029544 (--0CClientArea@@IEAA@XZ.c)
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x18003983C (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003D7E8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800AB4A0 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800E14C0 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CWindowTarget@@IEAA@XZ @ 0x1800E943C (--0CWindowTarget@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  __int64 v1; // rcx
  CVisual *result; // rax

  CBaseObject::CBaseObject(this);
  *(_DWORD *)(v1 + 128) = -2;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_DWORD *)(v1 + 116) = 1065353216;
  *(_DWORD *)(v1 + 112) = 1065353216;
  *(_QWORD *)(v1 + 120) = 0x3FF0000000000000LL;
  *(_DWORD *)(v1 + 80) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 88) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 84) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 92) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 132) = -1;
  *(_DWORD *)(v1 + 136) = -1;
  result = (CVisual *)v1;
  *(_QWORD *)v1 = &CVisual::`vftable';
  return result;
}
