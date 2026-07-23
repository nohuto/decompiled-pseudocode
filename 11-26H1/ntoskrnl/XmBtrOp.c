/*
 * XREFs of XmBtrOp @ 0x1405B0770
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

_WORD *__fastcall XmBtrOp(_DWORD *a1)
{
  int v1; // r8d
  int v3; // ecx
  int v4; // edx

  v1 = a1[4];
  v3 = a1[27];
  v4 = a1[26] & ~(1 << v3);
  a1[4] = v1 ^ (v1 ^ (a1[26] >> v3)) & 1;
  a1[26] = v4;
  return XmStoreResult((__int64)a1, v4);
}
