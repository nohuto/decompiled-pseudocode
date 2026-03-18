/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x140618810
 * Callers:
 *     <none>
 * Callees:
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x1404A3A7C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE RunOnce, struct _KMUTANT **Parameter, PVOID *Context)
{
  KiInitializeMutant(*Parameter, 0LL, 1u, 0LL);
  return 1LL;
}
