/*
 * XREFs of CmDoVirtualTest @ 0x1404CE364
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 */

bool CmDoVirtualTest()
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !CmpVEEnabled )
    return 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(CurrentThread) == 0;
}
