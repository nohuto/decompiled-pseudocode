/*
 * XREFs of ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x1800612A4
 * Callers:
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180061100 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z @ 0x180061234 (-SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetPassiveUpdateMode(CVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 224LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3);
}
