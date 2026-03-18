/*
 * XREFs of ?IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ @ 0x14009F238
 * Callers:
 *     ?DisplayID_Init@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z @ 0x14009ED58 (-DisplayID_Init@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x14009EEB8 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 * Callees:
 *     ?ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ @ 0x14009DB68 (-ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ.c)
 */

bool __fastcall DisplayID_Section_Parser::IsValidSection(DisplayID_Section_Parser *this)
{
  _BYTE *v1; // r9
  char v2; // al
  unsigned __int64 v3; // rdx
  unsigned __int8 v4; // al
  __int64 v5; // r9
  __int64 v6; // r10

  v1 = *(_BYTE **)this;
  v2 = **(_BYTE **)this >> 4;
  if ( v2 != 1 && v2 != 2 )
    return 0;
  if ( (v1[2] & 0xF) == 0 && v1[3] )
    return 0;
  if ( v1[1] > 0xFBu )
    return 0;
  v3 = *((_QWORD *)this + 1);
  if ( (unsigned __int8)v1[1] > v3 - 5 || v3 < 5 )
    return 0;
  v4 = DisplayID_Section_Parser::ComputeChecksum(this);
  return v4 == *(_BYTE *)(v5 + v6 + 4);
}
