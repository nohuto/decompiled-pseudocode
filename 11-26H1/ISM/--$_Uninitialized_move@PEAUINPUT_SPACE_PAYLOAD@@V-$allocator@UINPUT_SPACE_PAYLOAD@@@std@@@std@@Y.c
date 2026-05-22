/*
 * XREFs of ??$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@YAPEAUINPUT_SPACE_PAYLOAD@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_PAYLOAD@@@0@@Z @ 0x18007B6A8
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180046710 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800A9664 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std.c)
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x18013DB5C (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[24 * ((a2 - (__int64)a1) / 24)];
}
