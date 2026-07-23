/*
 * XREFs of IoCsqRemoveIrp @ 0x1404B4990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PIRP __stdcall IoCsqRemoveIrp(PIO_CSQ Csq, PIO_CSQ_IRP_CONTEXT Context)
{
  __int64 v4; // rdx
  PIRP Irp; // rdi
  __int64 v6; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  Csq->ReservePointer = 0LL;
  guard_dispatch_icall_no_overrides(Csq, &v8);
  Irp = Context->Irp;
  if ( Irp && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
  {
    guard_dispatch_icall_no_overrides(Csq, Irp);
    Context->Irp = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
    LOBYTE(v6) = v8;
    guard_dispatch_icall_no_overrides(Csq, v6);
    return Irp;
  }
  else
  {
    LOBYTE(v4) = v8;
    guard_dispatch_icall_no_overrides(Csq, v4);
    return 0LL;
  }
}
