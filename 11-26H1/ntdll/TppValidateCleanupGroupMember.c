/*
 * XREFs of TppValidateCleanupGroupMember @ 0x1800C9A20
 * Callers:
 *     TppJobpValidateJob @ 0x1800C98CC (TppJobpValidateJob.c)
 *     TppAlpcpValidateAlpc @ 0x1800C99AC (TppAlpcpValidateAlpc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0LL;
  if ( (v2 & 0x20000) == 0 )
    return 1LL;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
      && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
}
