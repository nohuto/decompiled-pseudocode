/*
 * XREFs of ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140134D34
 * Callers:
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x140110A28 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x140134D5C (--1CSynchronizationManager@DirectComposition@@IEAA@XZ.c)
 */

DirectComposition::CSynchronizationManager *__fastcall DirectComposition::CSynchronizationManager::`scalar deleting destructor'(
        DirectComposition::CSynchronizationManager *Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  DirectComposition::CSynchronizationManager::~CSynchronizationManager(Buffer);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
  return Buffer;
}
