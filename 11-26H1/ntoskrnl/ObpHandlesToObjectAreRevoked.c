/*
 * XREFs of ObpHandlesToObjectAreRevoked @ 0x140A23560
 * Callers:
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpHandlesToObjectAreRevoked(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = (*(_BYTE *)(a1 + 26) & 0x40) != 0
        && (v1 = a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F], *(_BYTE *)(*(_QWORD *)v1 + 24LL))
        && *(_QWORD *)(*(_QWORD *)v1 + 16LL) == 1LL;
  return result;
}
