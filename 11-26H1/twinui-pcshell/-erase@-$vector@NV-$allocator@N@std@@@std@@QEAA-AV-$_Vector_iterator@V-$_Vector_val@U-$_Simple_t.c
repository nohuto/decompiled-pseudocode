/*
 * XREFs of ?erase@?$vector@NV?$allocator@N@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@N@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@N@std@@@std@@@2@@Z @ 0x1803593C0
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEANPEAN@std@@YAPEANPEAN00@Z @ 0x18033D2B0 (--$_Copy_memmove@PEANPEAN@std@@YAPEANPEAN00@Z.c)
 */

_QWORD *__fastcall std::vector<double>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Copy_memmove<double *,double *>((void *)(a3 + 8), *(_QWORD *)(a1 + 8), (void *)a3);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
