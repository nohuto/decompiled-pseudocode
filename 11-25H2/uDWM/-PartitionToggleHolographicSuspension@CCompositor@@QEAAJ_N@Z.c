/*
 * XREFs of ?PartitionToggleHolographicSuspension@CCompositor@@QEAAJ_N@Z @ 0x180083C7C
 * Callers:
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18007CA88 (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::PartitionToggleHolographicSuspension(CCompositor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 184LL))(*((_QWORD *)this + 3));
}
