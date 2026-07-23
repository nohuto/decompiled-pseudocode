/*
 * XREFs of HalpDispatchPower @ 0x140C0E560
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1404F453C (HalpPassIrpFromFdoToPdo.c)
 *     HalpDispatchSystemStateTransition @ 0x1404F8640 (HalpDispatchSystemStateTransition.c)
 */

__int64 __fastcall HalpDispatchPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int MinorFunction; // r8d
  unsigned int Status; // ebx
  int v8; // eax
  unsigned int v9; // esi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Status = a2->IoStatus.Status;
  if ( **(_DWORD **)(a1 + 64) != 193 )
  {
    if ( (unsigned int)(MinorFunction - 2) < 2 )
    {
      Status = 0;
      a2->IoStatus.Status = 0;
    }
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( (unsigned int)(MinorFunction - 2) >= 2 )
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  if ( CurrentStackLocation->Parameters.Create.Options
    || (v8 = HalpDispatchSystemStateTransition((__int64)a2), v9 = v8, v8 >= 0) )
  {
    a2->IoStatus.Status = 0;
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  }
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  return v9;
}
