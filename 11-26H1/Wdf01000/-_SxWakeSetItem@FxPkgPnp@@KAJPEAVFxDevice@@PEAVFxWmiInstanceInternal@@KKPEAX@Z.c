/*
 * XREFs of ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1400A7190
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1400A6D2C (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_SxWakeSetItem(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int DataItemId,
        unsigned int InBufferSize,
        unsigned __int8 *InBuffer)
{
  if ( DataItemId )
    return 3221225488LL;
  if ( !InBufferSize )
    return 3221225507LL;
  FxPkgPnp::PowerPolicySetSxWakeState(Device->m_PkgPnp, *InBuffer);
  return 0LL;
}
