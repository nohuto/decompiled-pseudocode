/*
 * XREFs of ?RtlpGetRelocationLastByteRva@@YAGPEBU_RTL_FUNCTION_OVERRIDE_RELOCATION@@@Z @ 0x140A6C51C
 * Callers:
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C470 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall RtlpGetRelocationLastByteRva(const struct _RTL_FUNCTION_OVERRIDE_RELOCATION *a1)
{
  __int16 v1; // dx
  unsigned __int16 result; // ax

  v1 = *((_WORD *)a1 + 1) & 7;
  if ( !v1 )
    v1 = 4;
  result = v1 - 1 + (*(_WORD *)a1 & 0xFFF);
  if ( result >= 0xFFFu )
    return 4095;
  return result;
}
