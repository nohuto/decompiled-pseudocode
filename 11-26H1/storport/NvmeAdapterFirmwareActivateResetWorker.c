/*
 * XREFs of NvmeAdapterFirmwareActivateResetWorker @ 0x1400D6F20
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeAdapterFirmwareActivateResetWorker(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  char *v3; // rdi
  __int64 v5; // rdx
  void (__fastcall *v6)(char *, __int64, _QWORD); // rax

  v3 = (char *)(Context - 162);
  LOBYTE(v5) = NvmeControllerResetRecovery(Context - 162);
  v6 = (void (__fastcall *)(char *, __int64, _QWORD))Context[1];
  if ( v6 )
    v6(v3, v5, Context[2]);
}
