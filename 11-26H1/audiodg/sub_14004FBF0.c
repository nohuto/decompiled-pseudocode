/*
 * XREFs of sub_14004FBF0 @ 0x14004FBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const char *__fastcall sub_14004FBF0(__int64 a1)
{
  const char *result; // rax

  result = "Unknown exception";
  if ( *(_QWORD *)(a1 + 8) )
    return *(const char **)(a1 + 8);
  return result;
}
