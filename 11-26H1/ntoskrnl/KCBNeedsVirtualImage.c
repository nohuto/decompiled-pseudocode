/*
 * XREFs of KCBNeedsVirtualImage @ 0x140447908
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A9F978 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x140447940 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
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
