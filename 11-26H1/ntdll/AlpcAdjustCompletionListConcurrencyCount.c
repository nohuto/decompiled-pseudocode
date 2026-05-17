/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800FC1C0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x180160110 (NtAlpcSetInformation.c)
 */

__int64 __fastcall AlpcAdjustCompletionListConcurrencyCount(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return NtAlpcSetInformation(a1, 8LL, &v3, 4LL);
}
