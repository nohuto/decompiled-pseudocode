/*
 * XREFs of XmLahfOp @ 0x1405AD670
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A8E3C (XmStoreResult.c)
 */

_WORD *__fastcall XmLahfOp(__int64 a1)
{
  int v1; // edx

  v1 = *(unsigned __int8 *)(a1 + 16);
  *(_QWORD *)(a1 + 88) = a1 + 25;
  *(_DWORD *)(a1 + 120) = 0;
  return XmStoreResult(a1, v1);
}
