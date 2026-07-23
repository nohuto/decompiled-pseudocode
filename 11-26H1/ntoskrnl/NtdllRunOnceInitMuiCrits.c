/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x14061B860
 * Callers:
 *     <none>
 * Callees:
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE a1, struct _KMUTANT **a2, PVOID *a3)
{
  KiInitializeMutant(*a2, 0LL, 1u, 0LL);
  return 1LL;
}
