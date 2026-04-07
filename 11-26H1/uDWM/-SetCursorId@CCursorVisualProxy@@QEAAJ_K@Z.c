/*
 * XREFs of ?SetCursorId@CCursorVisualProxy@@QEAAJ_K@Z @ 0x1800A9780
 * Callers:
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800A9634 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorVisualProxy::SetCursorId(CCursorVisualProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 576LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
