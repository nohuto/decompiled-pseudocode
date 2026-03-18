/*
 * XREFs of ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401DA920
 * Callers:
 *     EtwInitializeAsyncKeyMonitor @ 0x1400E8E5C (EtwInitializeAsyncKeyMonitor.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

CAsyncKeyEventMonitor *__fastcall CAsyncKeyEventMonitor::`scalar deleting destructor'(
        CAsyncKeyEventMonitor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( this )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
