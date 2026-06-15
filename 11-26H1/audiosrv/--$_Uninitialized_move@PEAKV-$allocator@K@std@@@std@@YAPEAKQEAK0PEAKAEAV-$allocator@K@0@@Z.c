/*
 * XREFs of ??$_Uninitialized_move@PEAKV?$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV?$allocator@K@0@@Z @ 0x1801544D0
 * Callers:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x1801540D4 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<unsigned long *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<_GUID *,_GUID *>(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
