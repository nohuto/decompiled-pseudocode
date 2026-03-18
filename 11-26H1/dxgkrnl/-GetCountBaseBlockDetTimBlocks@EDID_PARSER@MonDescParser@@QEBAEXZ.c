/*
 * XREFs of ?GetCountBaseBlockDetTimBlocks@EDID_PARSER@MonDescParser@@QEBAEXZ @ 0x140043F54
 * Callers:
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x140043C90 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 * Callees:
 *     ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x140044624 (-Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetCountBaseBlockDetTimBlocks(MonDescParser::EDID_PARSER *this)
{
  int i; // r11d
  bool v3; // al
  char v4; // r10
  int v5; // r11d
  char v6; // cl

  for ( i = 0; i < 4; i = v5 + 1 )
  {
    v3 = MonDescParser::EDID_PARSER::Is18ByteDetTim(this, i);
    v6 = v4 + 1;
    if ( !v3 )
      v6 = v4;
  }
  return v6;
}
