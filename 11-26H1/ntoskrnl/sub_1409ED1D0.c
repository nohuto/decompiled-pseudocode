/*
 * XREFs of sub_1409ED1D0 @ 0x1409ED1D0
 * Callers:
 *     sub_1409ECE3C @ 0x1409ECE3C (sub_1409ECE3C.c)
 *     sub_1409ED3B8 @ 0x1409ED3B8 (sub_1409ED3B8.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_1409EEAA8 @ 0x1409EEAA8 (sub_1409EEAA8.c)
 *     sub_1409EF40C @ 0x1409EF40C (sub_1409EF40C.c)
 *     WbHeapExecutionUnloadModule @ 0x140AEDAC4 (WbHeapExecutionUnloadModule.c)
 * Callees:
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409ED24C @ 0x1409ED24C (sub_1409ED24C.c)
 */

signed __int64 __fastcall sub_1409ED1D0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_1409ED24C(a1);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      SddlpFree(a2);
    }
  }
  return v2;
}
