/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x14016A4B0
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007FA50 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x14018FBAC (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x140191868 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
