/*
 * XREFs of IopUpdateReadTransferCount @ 0x14044FEB0
 * Callers:
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopUpdateReadTransferCount(unsigned int a1, _KPROCESS *a2)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (IopPerfIoTrackingLock.QuantumTarget & 2) != 0 && a2 && a2 == CurrentThread->Process )
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
