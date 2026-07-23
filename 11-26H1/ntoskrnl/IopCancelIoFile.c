/*
 * XREFs of IopCancelIoFile @ 0x14094A544
 * Callers:
 *     IopIoRingDispatchCancel @ 0x14079AA08 (IopIoRingDispatchCancel.c)
 *     NtCancelIoFileEx @ 0x140949ED0 (NtCancelIoFileEx.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x140515BDC (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A5DC (IopCancelIrpsInThreadListForCurrentProcess.c)
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
