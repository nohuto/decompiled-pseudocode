/*
 * XREFs of unknown_libname_1 @ 0x1800112C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
const char *__fastcall unknown_libname_1(__int64 a1)
{
  const char *result; // rax

  result = "unknown exception";
  if ( *(_QWORD *)(a1 + 8) )
    return *(const char **)(a1 + 8);
  return result;
}
