/*
 * XREFs of ??$emplace_back@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAAEAULegacyInputInfo@@AEAU2@@Z @ 0x1800CEA18
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF858 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800CE664 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 */

char *__fastcall std::vector<LegacyInputInfo>::emplace_back<LegacyInputInfo &>(_QWORD *a1, const void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(a1, v4, a2);
  memcpy_0((void *)a1[1], a2, 0xBC0uLL);
  v5 = a1[1];
  a1[1] = v5 + 3008;
  return (char *)v5;
}
