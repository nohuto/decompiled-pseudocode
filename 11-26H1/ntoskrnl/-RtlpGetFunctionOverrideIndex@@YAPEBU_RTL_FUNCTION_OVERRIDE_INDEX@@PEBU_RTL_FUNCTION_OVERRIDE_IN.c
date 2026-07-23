/*
 * XREFs of ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409A05D4
 * Callers:
 *     RtlApplyFunctionOverrideFixups @ 0x1409A02CC (RtlApplyFunctionOverrideFixups.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 */

const struct _RTL_FUNCTION_OVERRIDE_INDEX *__fastcall RtlpGetFunctionOverrideIndex(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int64 v5; // r10
  unsigned int v6; // eax

  v2 = *((_DWORD *)a1 + 8);
  if ( (unsigned int)a2 < v2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 9);
  if ( (unsigned int)a2 > v3 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 3);
  v6 = v3 - v2 + 1;
  if ( !v5 && v6 || (a2 = (unsigned int)a2 - v2, (unsigned int)a2 >= (unsigned __int64)v6) )
  {
    gsl::details::terminate(a1, a2);
    __debugbreak();
  }
  return *(const struct _RTL_FUNCTION_OVERRIDE_INDEX **)(v5 + 8 * a2);
}
