/*
 * XREFs of ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x180071D10
 * Callers:
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180071C40 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z @ 0x180071CA4 (-SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetPassiveUpdateMode(CVisualProxy *this, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 24);
  LOBYTE(v2) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 304LL))(v4, v5, v2);
}
