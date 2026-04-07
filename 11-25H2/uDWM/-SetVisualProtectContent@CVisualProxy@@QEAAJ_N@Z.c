/*
 * XREFs of ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x18009A378
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008C394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetVisualProtectContent(CVisualProxy *this, unsigned __int8 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 384LL))(*((_QWORD *)this + 3), a2);
}
