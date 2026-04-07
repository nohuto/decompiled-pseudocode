/*
 * XREFs of ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800975E4
 * Callers:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800705E4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800D4A78 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800D4AD4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@0@Z @ 0x1800D4B2C (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@V-$nvp@AEAI@2@V-$nvp@AEAUstring_tag@tson@@@2@V.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800D7A04 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800D80D4 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D8118 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800D8B94 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800796F4 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     memcpy_s_0 @ 0x1800797C8 (memcpy_s_0.c)
 */

bool __fastcall tson::write_buffer::push_back(void **this, const void *a2, rsize_t a3)
{
  bool result; // al

  if ( (_BYTE *)this[260] - (_BYTE *)this[259] >= a3
    || (result = tson::write_buffer::reserve((tson::write_buffer *)this, a3)) )
  {
    memcpy_s_0(this[259], (_BYTE *)this[260] - (_BYTE *)this[259], a2, a3);
    this[259] = (char *)this[259] + a3;
    return 1;
  }
  return result;
}
