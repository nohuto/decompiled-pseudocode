/*
 * XREFs of PsSetProcessPriorityClass @ 0x1406180F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessPriorityClass(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 839) = a2;
}
