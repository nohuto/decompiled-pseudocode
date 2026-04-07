/*
 * XREFs of ?PartitionSetMagnifier@CVisualProxy@@QEAAJ_N@Z @ 0x1800E170C
 * Callers:
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800E1588 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::PartitionSetMagnifier(CVisualProxy *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 168LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3);
}
