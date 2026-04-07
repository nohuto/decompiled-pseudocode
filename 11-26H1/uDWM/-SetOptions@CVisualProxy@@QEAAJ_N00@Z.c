/*
 * XREFs of ?SetOptions@CVisualProxy@@QEAAJ_N00@Z @ 0x180063F9C
 * Callers:
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180063EAC (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180063F18 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetOptions(CVisualProxy *this, char a2, __int64 a3, char a4)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, char))(**((_QWORD **)this + 2) + 192LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3,
           0LL,
           a4);
}
