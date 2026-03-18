/*
 * XREFs of ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140144BD4
 * Callers:
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CC7AC (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x140144BFC (--1CSynchronizationManager@DirectComposition@@IEAA@XZ.c)
 */

DirectComposition::CSynchronizationManager *__fastcall DirectComposition::CSynchronizationManager::`scalar deleting destructor'(
        DirectComposition::CSynchronizationManager *Buffer)
{
  DirectComposition::CSynchronizationManager::~CSynchronizationManager(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
