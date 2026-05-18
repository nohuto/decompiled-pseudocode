/*
 * XREFs of sub_1800213F0 @ 0x1800213F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800013EC @ 0x1800013EC (sub_1800013EC.c)
 */

__int64 sub_1800213F0()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&dword_1801C8544);
  if ( (_DWORD)result == 1 )
    return sub_1800013EC(&dword_1801BD188);
  return result;
}
