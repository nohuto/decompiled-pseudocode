/*
 * XREFs of CmDoVirtualTest @ 0x1404D4AF4
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
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
