/*
 * XREFs of IntelPptFilter_EvtDestoryCallback @ 0x140055AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall IntelPptFilter_EvtDestoryCallback(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AEB0);
  MmUnlockPagableImageSection(*(PVOID *)(v1 + 56));
}
