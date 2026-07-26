/*
 * XREFs of ??1NdisWdfIdle@@QEAA@XZ @ 0x1400762B0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x14005F5D0 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 */

void __fastcall NdisWdfIdle::~NdisWdfIdle(NdisWdfIdle *this)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rcx

  m_impl = this->m_engine.m_impl;
  if ( m_impl )
    SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(m_impl, 1u);
}
