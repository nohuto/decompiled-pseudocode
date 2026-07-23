/*
 * XREFs of MiResumeMarkPageLists @ 0x1406F4EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiResumeMarkPageLists(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 12);
  if ( (_DWORD)result )
    *(_BYTE *)(a1 + 16484) = result;
  *(_BYTE *)(a1 + 16485) = 1;
  return result;
}
