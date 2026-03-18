/*
 * XREFs of VfMiscKeSynchronizeExecution_Entry @ 0x140C3CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckKeRaiseIrql @ 0x140C470BC (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeSynchronizeExecution_Entry(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *a1;
  v2 = a1[3];
  LOBYTE(v2) = *(_BYTE *)(v2 + 92);
  return ViMiscCheckKeRaiseIrql(v2, v1);
}
