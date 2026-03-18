/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140C39EA8
 * Callers:
 *     ViIovPluginUnload @ 0x1406429A0 (ViIovPluginUnload.c)
 *     ViPacketNotificationCallback @ 0x140C39400 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 VfIrpDatabaseUninitialize()
{
  __int64 result; // rax

  if ( ViIrpDatabase )
  {
    ExFreePoolWithTag(ViIrpDatabase, 0);
    ViIrpDatabase = 0LL;
  }
  result = (unsigned int)_InterlockedExchange(&VfIrpDatabaseInitialized, 0);
  ViIrpDatabaseLock = 0;
  return result;
}
