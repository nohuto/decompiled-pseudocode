/*
 * XREFs of ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18031C258
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x18031CF14 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAPEAGAEBQEAPEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG1@Z @ 0x18031BD88 (--$_Construct_n@AEBQEAPEAGAEBQEAPEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG.c)
 */

_QWORD *__fastcall std::vector<unsigned short *>::vector<unsigned short *>(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<unsigned short *>::_Construct_n<unsigned short * * const &,unsigned short * * const &>(
    a1,
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3,
    (void **)a2,
    (__int64 *)(a2 + 8));
  return a1;
}
