/*
 * XREFs of HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure @ 0x140014490
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x140011F3C (HUBMUX_ReleaseInterruptReference.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1480LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  return 3013LL;
}
