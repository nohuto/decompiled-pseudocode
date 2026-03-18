/*
 * XREFs of IopSystemControlDispatch @ 0x1407AD700
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 */

__int64 __fastcall IopSystemControlDispatch(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  Status = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
