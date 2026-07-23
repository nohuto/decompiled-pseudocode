/*
 * XREFs of IoCsqRemoveNextIrp @ 0x14048E910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  __int64 v3; // rdx
  PIO_CSQ v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  IRP *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  Csq->ReservePointer = 0LL;
  guard_dispatch_icall_no_overrides(Csq, &v11);
  v3 = 0LL;
  v4 = Csq;
  do
  {
    v5 = guard_dispatch_icall_no_overrides(v4, v3);
    v7 = (IRP *)v5;
    if ( !v5 )
    {
      LOBYTE(v6) = v11;
      guard_dispatch_icall_no_overrides(Csq, v6);
      return 0LL;
    }
    v3 = v5;
    v4 = Csq;
  }
  while ( !_InterlockedExchange64((volatile __int64 *)(v5 + 104), 0LL) );
  guard_dispatch_icall_no_overrides(Csq, v5);
  v9 = v7->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v9 == 1 )
    v9[1] = 0LL;
  v7->Tail.Overlay.DriverContext[3] = 0LL;
  LOBYTE(v8) = v11;
  guard_dispatch_icall_no_overrides(Csq, v8);
  return v7;
}
