/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x14088ACFC
 * Callers:
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140889EE8 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14088AA00 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x14088AC24 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 */

NTSTATUS __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  __int64 v4; // rdx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      result = ZwClose(v2);
      a1[3] = 0LL;
    }
    v4 = a1[1];
    if ( v4 )
    {
      result = AslFree(v2, v4);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
  return result;
}
