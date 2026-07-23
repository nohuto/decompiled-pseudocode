/*
 * XREFs of IoFastQueryNetworkAttributes @ 0x140B4DED0
 * Callers:
 *     <none>
 * Callees:
 *     IopFastQueryNetworkAttributes @ 0x140B4DF10 (IopFastQueryNetworkAttributes.c)
 */

BOOLEAN __stdcall IoFastQueryNetworkAttributes(
        POBJECT_ATTRIBUTES ObjectAttributes,
        ACCESS_MASK DesiredAccess,
        ULONG OpenOptions,
        PIO_STATUS_BLOCK IoStatus,
        PFILE_NETWORK_OPEN_INFORMATION Buffer)
{
  struct _KTHREAD *CurrentThread; // r8

  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  return IopFastQueryNetworkAttributes(ObjectAttributes, DesiredAccess, CurrentThread, OpenOptions, IoStatus, Buffer);
}
