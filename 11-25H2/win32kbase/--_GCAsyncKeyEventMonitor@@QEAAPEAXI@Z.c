/*
 * XREFs of ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401B7704
 * Callers:
 *     EtwInitializeAsyncKeyMonitor @ 0x1400C711C (EtwInitializeAsyncKeyMonitor.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

CAsyncKeyEventMonitor *__fastcall CAsyncKeyEventMonitor::`scalar deleting destructor'(CAsyncKeyEventMonitor *this)
{
  if ( this )
    GreDeleteFastMutex((char *)this);
  return this;
}
