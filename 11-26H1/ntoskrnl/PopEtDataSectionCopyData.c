/*
 * XREFs of PopEtDataSectionCopyData @ 0x140AADF24
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

void *__fastcall PopEtDataSectionCopyData(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v4; // rsi
  void *result; // rax

  v4 = a3;
  if ( a3 + *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 8) )
  {
    result = RtlCopyToUser(*(void **)(a1 + 24), a2, a3);
    *(_QWORD *)(a1 + 24) += v4;
    *(_DWORD *)(a1 + 20) += v4;
  }
  return result;
}
