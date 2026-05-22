/*
 * XREFs of ??$_Uninitialized_move@PEAUDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@YAPEAUDisplayOcclusionRect@@QEAU1@0PEAU1@AEAV?$allocator@UDisplayOcclusionRect@@@0@@Z @ 0x18013C934
 * Callers:
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x18013C768 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<DisplayOcclusionRect *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[176 * ((a2 - (__int64)a1) / 176)];
}
