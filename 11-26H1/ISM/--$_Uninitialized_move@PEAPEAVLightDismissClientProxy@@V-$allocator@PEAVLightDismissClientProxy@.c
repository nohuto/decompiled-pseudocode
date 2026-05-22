/*
 * XREFs of ??$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@YAPEAPEAVLightDismissClientProxy@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVLightDismissClientProxy@@@0@@Z @ 0x180076188
 * Callers:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_Reallocate@$0A@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800E640C (--$_Reallocate@$0A@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAXA.c)
 *     ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x18016023C (--$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@-$vector@PEAVLightDismissClientProxy@@V-.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<LightDismissClientProxy * *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
