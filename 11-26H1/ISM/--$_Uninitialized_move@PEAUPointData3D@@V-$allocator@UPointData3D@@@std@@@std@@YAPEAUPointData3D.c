/*
 * XREFs of ??$_Uninitialized_move@PEAUPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@YAPEAUPointData3D@@QEAU1@0PEAU1@AEAV?$allocator@UPointData3D@@@0@@Z @ 0x1800B9870
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x1800B9684 (--$_Emplace_reallocate@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<PointData3D *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[184 * ((a2 - (__int64)a1) / 184)];
}
