/*
 * XREFs of KCBNeedsVirtualImage @ 0x14044F7D8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A9F648 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x14044F810 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 */

char KCBNeedsVirtualImage()
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rcx

  result = KCBIsVirtualizable();
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
    return (unsigned __int8)CmpIsSystemEntity(CurrentThread) == 0;
  }
  return result;
}
