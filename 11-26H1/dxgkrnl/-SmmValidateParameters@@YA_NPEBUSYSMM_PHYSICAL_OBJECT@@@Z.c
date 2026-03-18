/*
 * XREFs of ?SmmValidateParameters@@YA_NPEBUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140040DB4
 * Callers:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x140040D64 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SmmValidateParameters(const struct SYSMM_PHYSICAL_OBJECT *a1)
{
  char result; // al

  if ( (*((_DWORD *)a1 + 11) & 1) != 0 || KeGetCurrentIrql() <= 1u )
    return 1;
  WdLogSingleEntry1(3LL);
  result = 0;
  WdLogGlobalForLineNumber = 522;
  return result;
}
