/*
 * XREFs of IoCsqInsertIrpEx @ 0x140489F80
 * Callers:
 *     IoCsqInsertIrp @ 0x140489F60 (IoCsqInsertIrp.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // ebp
  __int64 v8; // rdx
  PIO_CSQ v9; // rcx
  __int64 v11; // rdx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v12 = 0;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = Csq;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = Csq;
  }
  Csq->ReservePointer = 0LL;
  guard_dispatch_icall_no_overrides(Csq, &v12);
  if ( Csq->Type == 3 )
  {
    v4 = guard_dispatch_icall_no_overrides(Csq, Irp);
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    guard_dispatch_icall_no_overrides(Csq, Irp);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)IopCsqCancelRoutine);
  if ( !Irp->Cancel )
  {
LABEL_6:
    v9 = Csq;
LABEL_7:
    LOBYTE(v8) = v12;
    guard_dispatch_icall_no_overrides(v9, v8);
    return v4;
  }
  v9 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  guard_dispatch_icall_no_overrides(Csq, Irp);
  if ( Context )
    Context->Irp = 0LL;
  LOBYTE(v11) = v12;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  guard_dispatch_icall_no_overrides(Csq, v11);
  guard_dispatch_icall_no_overrides(Csq, Irp);
  return v4;
}
