/*
 * XREFs of ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x1800426DC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall HampUtilHostTypeNameFromType(int a1)
{
  if ( a1 == 2 )
    return L"Mixed";
  if ( a1 == 4 )
    return L"Pure";
  if ( a1 != 8 )
    NT_ASSERT("!"HampUtilHostTypeNameFromType bad host type"");
  return L"System";
}
