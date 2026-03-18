/*
 * XREFs of ?NotifySkippedFrame@CKernelTransport@@UEAAXXZ @ 0x180233FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKernelTransport::NotifySkippedFrame(CKernelTransport *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
}
