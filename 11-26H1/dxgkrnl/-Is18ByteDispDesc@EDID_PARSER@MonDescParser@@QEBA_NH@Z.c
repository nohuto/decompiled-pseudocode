/*
 * XREFs of ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x14004D008
 * Callers:
 *     ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1400A0420 (-ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall MonDescParser::EDID_PARSER::Is18ByteDispDesc(MonDescParser::EDID_PARSER *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  bool result; // al

  v2 = *(_QWORD *)this;
  v3 = 9 * (a2 + 3LL);
  result = 0;
  if ( !*(_WORD *)(*(_QWORD *)this + 2 * v3) && !*(_BYTE *)(v2 + 2 * v3 + 2) )
  {
    if ( !*(_BYTE *)(v2 + 2 * v3 + 4) )
    {
      if ( *(_BYTE *)(v2 + 2 * v3 + 3) == 16 )
        return result;
      return 1;
    }
    if ( *(_BYTE *)(v2 + 2 * v3 + 3) == 0xFD )
      return 1;
  }
  return result;
}
