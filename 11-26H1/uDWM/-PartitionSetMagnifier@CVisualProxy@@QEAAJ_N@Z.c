/*
 * XREFs of ?PartitionSetMagnifier@CVisualProxy@@QEAAJ_N@Z @ 0x1800DE538
 * Callers:
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800DE3E8 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::PartitionSetMagnifier(CVisualProxy *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 152LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3);
}
