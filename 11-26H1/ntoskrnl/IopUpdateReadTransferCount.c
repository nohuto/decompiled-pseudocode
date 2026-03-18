/*
 * XREFs of IopUpdateReadTransferCount @ 0x140458640
 * Callers:
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopUpdateReadTransferCount(unsigned int a1, _KPROCESS *a2)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Blink & 2) != 0
    && a2
    && a2 == CurrentThread->Process )
  {
    result = a1;
    CurrentThread->ReadTransferCount += a1;
    __addgsqword(0x2EE8u, a1);
  }
  else
  {
    result = a1;
    if ( a2 )
      _InterlockedAdd64((volatile signed __int64 *)&a2[2].DirectoryTableBase, a1);
    else
      CurrentThread->ReadTransferCount += a1;
    __addgsqword(0x2EE8u, a1);
  }
  return result;
}
