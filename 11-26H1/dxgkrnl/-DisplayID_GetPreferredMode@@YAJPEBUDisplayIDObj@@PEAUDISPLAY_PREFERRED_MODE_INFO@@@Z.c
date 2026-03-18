/*
 * XREFs of ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x14009F938
 * Callers:
 *     ?GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140281C30 (-GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     ?DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEBU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z @ 0x14009F7C0 (-DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEBU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x14009FDBC (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetPreferredMode(const struct DisplayIDObj *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  char v5; // r9
  _BYTE *v6; // r8
  struct _DISPLAYID_TYPE7_TIMING_BLOCK *v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct _DISPLAYID_TYPE7_TIMING_BLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v9 = 0LL;
  result = DisplayID_GetFirstType7Desc(a1, &v9);
  if ( (int)result >= 0 )
  {
    v7 = v9;
    v8 = *((_BYTE *)v9 + 2) / 0x14u;
    if ( !DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v7) )
      return 3221226021LL;
    v6 = (_BYTE *)(v4 + 3);
    if ( !v5 )
      v6 = 0LL;
    if ( v6 )
    {
      *(_DWORD *)a2 = (unsigned __int16)((unsigned __int8)v6[4] + 1 + ((unsigned __int8)v6[5] << 8));
      *((_DWORD *)a2 + 1) = (unsigned __int16)((unsigned __int8)v6[12] + 1 + ((unsigned __int8)v6[13] << 8));
      *((_BYTE *)a2 + 8) = (v6[3] & 0x10) != 0;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
