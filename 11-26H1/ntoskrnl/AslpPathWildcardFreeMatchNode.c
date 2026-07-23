/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1408910F8
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408902E4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140890DFC (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x140891020 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
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
