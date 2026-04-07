/*
 * XREFs of ?SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z @ 0x18008A144
 * Callers:
 *     ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z @ 0x1800938E4 (-SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorVisualProxy::SetIsSynchronized(CCursorVisualProxy *this, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 24);
  LOBYTE(v2) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 768LL))(v4, v5, v2);
}
