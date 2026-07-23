/*
 * XREFs of PpIrpQueryBusInformation @ 0x1409DBBC0
 * Callers:
 *     PnpQueryBusInformation @ 0x1409DBB28 (PnpQueryBusInformation.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryBusInformation(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset_0(v5, 0, 0x48uLL);
  v5[0] = 5403;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, a2);
  if ( (int)result < 0 )
    *a2 = 0LL;
  return result;
}
