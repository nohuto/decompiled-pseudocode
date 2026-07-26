/*
 * XREFs of ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140168A60
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KnobNamespace@@QEAAXPEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140168AB0 (-Initialize@KnobNamespace@@QEAAXPEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 */

KnobNamespace *__fastcall KnobNamespace::KnobNamespace(
        KnobNamespace *this,
        struct _DRIVER_OBJECT *a2,
        struct _CONFIG_KNOB_NAMESPACE *a3)
{
  this->m_driverObject = 0LL;
  *(_OWORD *)&this->m_id.NamespaceType = 0LL;
  *(_DWORD *)&this->m_id.ObjectId.Data4[4] = 0;
  this->m_globalLinkage = 0LL;
  this->m_collectionList = 0LL;
  this->m_lock.m_Lock.Value = 0LL;
  KnobNamespace::Initialize(this, a2, a3);
  return this;
}
