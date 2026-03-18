/*
 * XREFs of ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140069BA4
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x14006970C (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x14006CCF4 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x14009EFDC (-DisplayID_IsValidVersion2@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x14009F364 (-DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14009F4BC (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x14009F58C (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetBlock(__int64 *a1, int a2, _QWORD *a3)
{
  __int64 v3; // r9
  int v4; // esi
  int v6; // r11d
  unsigned int v7; // r10d
  unsigned __int8 *i; // rdx
  int v9; // edi
  int v10; // ecx

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 5);
  *a3 = 0LL;
  v6 = 0;
LABEL_2:
  if ( v6 >= v4 )
    return 3221225659LL;
  v7 = *(unsigned __int8 *)(v3 + 1);
  for ( i = (unsigned __int8 *)((v3 + 4) & -(__int64)(*(_BYTE *)(v3 + 1) != 0)); ; i += (unsigned int)v10 )
  {
    if ( v7 < 3 || (v9 = *i, !(_BYTE)v9) || (v10 = i[2] + 3, (int)v7 < v10) )
    {
      v3 += (unsigned __int8)(*(_BYTE *)(v3 + 1) + 5);
      ++v6;
      goto LABEL_2;
    }
    if ( v9 == a2 )
      break;
    v7 -= v10;
  }
  *a3 = i;
  return 0LL;
}
