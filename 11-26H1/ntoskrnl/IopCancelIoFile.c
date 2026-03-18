/*
 * XREFs of IopCancelIoFile @ 0x140956B1C
 * Callers:
 *     IopIoRingDispatchCancel @ 0x140797ED8 (IopIoRingDispatchCancel.c)
 *     NtCancelIoFileEx @ 0x1409561B0 (NtCancelIoFileEx.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x14051B53C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140956BB4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopCancelIoFile(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  int v5; // eax
  int v6; // ebx

  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v5 = IopCancelIrpsInFileObjectList(a1, (int)KeGetCurrentThread()->ApcState.Process, a2, 0, 0, 0);
  v6 = v5;
  if ( !a2 || !v5 )
    v6 = IopCancelIrpsInThreadListForCurrentProcess(a1, a2) | v5;
  return v6 == 0 ? 0xC0000225 : 0;
}
