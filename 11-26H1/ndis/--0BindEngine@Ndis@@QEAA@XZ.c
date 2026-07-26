/*
 * XREFs of ??0BindEngine@Ndis@@QEAA@XZ @ 0x14016B2D0
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007FA50 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     <none>
 */

Ndis::BindEngine *__fastcall Ndis::BindEngine::BindEngine(Ndis::BindEngine *this)
{
  this->m_miniport = 0LL;
  this->m_bindThread = 0LL;
  this->m_currentOperation = 0LL;
  this->m_lock.m_Lock.Value = 0LL;
  KeInitializeEvent(&this->m_bindCompleteEvent.m_event, NotificationEvent, 0);
  this->m_asyncBindWorkItem.m_context = this;
  this->m_asyncBindWorkItem.m_callback = Ndis::BindEngine::UpdateBindingsWorkItem;
  this->m_asyncBindWorkItem.m_workitem.Parameter = &this->m_asyncBindWorkItem;
  this->m_asyncBindWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<Ndis::BindEngine,KWorkItem<Ndis::BindEngine>>::CallbackThunk;
  this->m_asyncBindWorkItem.m_workitem.List.Flink = 0LL;
  this->m_isDirty = 0;
  this->m_removeReadyEvent = 0LL;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  return this;
}
