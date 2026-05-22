/*
 * XREFs of ?_Change_array@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAXQEAUSuperWetInkBallpointPenPoint@@_K1@Z @ 0x1800AB11C
 * Callers:
 *     ??$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@$$QEAU2@@Z @ 0x1800AAC94 (--$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<SuperWetInkBallpointPenPoint>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
