/*
 * XREFs of ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DEAD0
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180674510 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = v2;
  tson::output_archive::process<tson::ansistring_tag &>(a1, a2 + 16);
  return a1;
}
