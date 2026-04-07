/*
 * XREFs of ?PartitionSetCursor@CVisualProxy@@QEAAJ_N@Z @ 0x18006AEB4
 * Callers:
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18006AE6C (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::PartitionSetCursor(CVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 144LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3);
}
