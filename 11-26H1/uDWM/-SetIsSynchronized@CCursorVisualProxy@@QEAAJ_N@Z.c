/*
 * XREFs of ?SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z @ 0x180079478
 * Callers:
 *     ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z @ 0x1800850AC (-SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorVisualProxy::SetIsSynchronized(CCursorVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 592LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3);
}
