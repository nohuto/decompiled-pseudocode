/*
 * XREFs of ??$_Uninitialized_move@PEAUHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@YAPEAUHotKeyRegistrationData@@QEAU1@0PEAU1@AEAV?$allocator@UHotKeyRegistrationData@@@0@@Z @ 0x180107FD4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x180107E58 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<HotKeyRegistrationData *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[12 * ((a2 - (__int64)a1) / 12)];
}
