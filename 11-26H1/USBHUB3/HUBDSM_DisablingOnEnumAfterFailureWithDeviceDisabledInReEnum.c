/*
 * XREFs of HUBDSM_DisablingOnEnumAfterFailureWithDeviceDisabledInReEnum @ 0x140021E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_DisablingOnEnumAfterFailureWithDeviceDisabledInReEnum(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  **(_BYTE **)(v1 + 16) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3015LL);
  return 1000LL;
}
