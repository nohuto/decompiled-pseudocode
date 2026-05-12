/*
 * XREFs of RaCallMiniportMsiInterrupt @ 0x14002F720
 * Callers:
 *     NvmeAdapterMSIInterruptRoutine @ 0x1400D95F0 (NvmeAdapterMSIInterruptRoutine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaCallMiniportMsiInterrupt(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax

  if ( a1 && (v1 = *(__int64 (__fastcall **)(__int64))(a1 + 160)) != 0LL )
    return v1(*(_QWORD *)(a1 + 240) + 16LL);
  else
    return 0;
}
