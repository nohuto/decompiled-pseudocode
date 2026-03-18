/*
 * XREFs of ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x140043FA0
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x140043738 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1400440F4 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x140044118 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1400A032C (-CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z.c)
 */

int __fastcall MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_STANDARD_TIMING *a2,
        char a3,
        struct _VideoModeDescriptor *a4)
{
  unsigned __int8 **v7; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int16 v9; // cx
  int v10; // edx
  unsigned int v11; // ebx
  unsigned __int16 v12; // r11
  int v13; // edx
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  unsigned __int8 v18; // dl
  int result; // eax
  unsigned __int8 v20; // al
  unsigned __int16 *v21; // [rsp+20h] [rbp-28h]
  unsigned __int16 v22; // [rsp+30h] [rbp-18h] BYREF

  if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(a2) )
    return -1071841276;
  v8 = *v7;
  v9 = 0;
  v22 = 0;
  v10 = v8[1] >> 6;
  v11 = (v8[1] & 0x3F) + 60;
  v12 = 8 * (*v8 + 31);
  if ( !v10 )
  {
    v17 = **(_QWORD **)this;
    v18 = *(_BYTE *)(v17 + 18);
    if ( (v18 != 1 || *(_BYTE *)(v17 + 19) < 3u) && v18 < 3u )
    {
      v9 = 8 * (*v8 + 31);
      goto LABEL_17;
    }
    v15 = 10;
    goto LABEL_13;
  }
  v13 = v10 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
        goto LABEL_17;
      v15 = 9;
LABEL_13:
      v16 = 16;
      goto LABEL_14;
    }
    v16 = 5;
    v15 = 4;
  }
  else
  {
    v16 = 4;
    v15 = 3;
  }
LABEL_14:
  result = MonDescParser::CalculateVerticalActivePixelsFrom((MonDescParser *)v12, v16, v15, (unsigned __int16)&v22, v21);
  if ( result < 0 )
    return result;
  v9 = v22;
LABEL_17:
  if ( v9 < 0x64u )
    return -1071841276;
  if ( v12 != 1024 || v9 != 768 || (v20 = 1, v11 != 43) )
    v20 = 0;
  result = GTF_GetVideoModeDescriptor(v12, v9, v11, 1u, v20, a4);
  a4->VideoStandardType = 2;
  a4->Origin = *((_BYTE *)this + 8);
  a4->TimingType = (a3 != 0) + 2;
  return result;
}
