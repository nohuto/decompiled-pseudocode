/*
 * XREFs of ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x140044624
 * Callers:
 *     ?GetCountBaseBlockDetTimBlocks@EDID_PARSER@MonDescParser@@QEBAEXZ @ 0x140043F54 (-GetCountBaseBlockDetTimBlocks@EDID_PARSER@MonDescParser@@QEBAEXZ.c)
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1400445E4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MonDescParser::EDID_PARSER::Is18ByteDetTim(MonDescParser::EDID_PARSER *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  char result; // al

  v2 = *(_QWORD *)this;
  v3 = 9 * (a2 + 3LL);
  result = 0;
  if ( *(_WORD *)(*(_QWORD *)this + 2 * v3)
    || *(_BYTE *)(v2 + 2 * v3 + 2)
    || *(_BYTE *)(v2 + 2 * v3 + 4) && *(_BYTE *)(v2 + 2 * v3 + 3) != 0xFD )
  {
    return 1;
  }
  return result;
}
