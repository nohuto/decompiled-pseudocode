/*
 * XREFs of sub_180011338 @ 0x180011338
 * Callers:
 *     sub_18000ECD0 @ 0x18000ECD0 (sub_18000ECD0.c)
 *     sub_180011370 @ 0x180011370 (sub_180011370.c)
 * Callees:
 *     <none>
 */

HMODULE sub_180011338()
{
  HMODULE result; // rax

  result = (HMODULE)qword_1801C8508;
  if ( !qword_1801C8508 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_1801C8508 = (__int64)result;
  }
  return result;
}
