/*
 * XREFs of ?SetOpacity@CVisualProxy@@QEAAJM@Z @ 0x180070A68
 * Callers:
 *     ?UpdateOpacity@CButtonVisual@@UEAAJXZ @ 0x180070A50 (-UpdateOpacity@CButtonVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetOpacity(CVisualProxy *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 240LL))(*((_QWORD *)this + 4));
}
