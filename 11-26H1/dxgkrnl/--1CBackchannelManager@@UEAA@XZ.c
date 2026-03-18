/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x140029FC0
 * Callers:
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x14002A000 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1400A4950 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140029F6C (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
