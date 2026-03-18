/*
 * XREFs of ?IsValidBlock@DisplayID_DisplayParameters_Parser@@QEBA_NXZ @ 0x14009F6D4
 * Callers:
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x14009F58C (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayID_DisplayParameters_Parser::IsValidBlock(DisplayID_DisplayParameters_Parser *this)
{
  return **(_BYTE **)this == 33 && *(_BYTE *)(*(_QWORD *)this + 2LL) == 29;
}
