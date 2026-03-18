/*
 * XREFs of ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x14009FDBC
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x14006970C (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 *     ?DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z @ 0x14009F84C (-DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z.c)
 *     ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x14009F938 (-DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayID_Type7Timing_Parser::IsValidBlock(DisplayID_Type7Timing_Parser *this)
{
  return **(_BYTE **)this == 34
      && *((_BYTE *)this + 8) <= 0x14u
      && *(unsigned __int8 *)(*(_QWORD *)this + 2LL) == 20 * (*(unsigned __int8 *)(*(_QWORD *)this + 2LL) / 0x14uLL);
}
