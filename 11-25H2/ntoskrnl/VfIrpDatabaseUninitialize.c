/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140B94130
 * Callers:
 *     ViIovPluginUnload @ 0x140698E60 (ViIovPluginUnload.c)
 *     ViPacketNotificationCallback @ 0x140B8B550 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
