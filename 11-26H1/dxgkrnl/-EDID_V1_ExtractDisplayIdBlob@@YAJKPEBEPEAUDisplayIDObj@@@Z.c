/*
 * XREFs of ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x14009DD38
 * Callers:
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14042B634 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z @ 0x140043F24 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1400447B4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ @ 0x14009DB68 (-ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x14009EEB8 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     ?GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z @ 0x1400A026C (-GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z.c)
 */

__int64 __fastcall EDID_V1_ExtractDisplayIdBlob(unsigned int a1, unsigned __int8 *a2, struct DisplayIDObj *a3)
{
  __int64 result; // rax
  unsigned int BlockTypeCount; // eax
  __int64 v5; // r11
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // r10
  struct DisplayIDObj *v9; // r11
  union _EDID_V1_BLOCK **IterAtElement; // rax
  union _EDID_V1_BLOCK *v11; // r8
  char *v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[80]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+80h] [rbp-18h]

  if ( !a2 || a1 < 0x80 || !a3 )
    return 3221225485LL;
  v17 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v16, a2, a1);
  if ( (int)result >= 0 )
  {
    BlockTypeCount = MonDescParser::EDID_PARSER::GetBlockTypeCount(v16);
    if ( *(unsigned int *)(v5 + 8) >= 126 * (unsigned __int64)BlockTypeCount )
    {
      v6 = v17;
      v7 = 1;
      if ( (unsigned int)v17 <= 1 )
        return 3221226021LL;
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType((MonDescParser::EDID_PARSER *)v16, v7) == 112 )
        {
          IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement((MonDescParser::EDID_PARSER *)v16, v7);
          v11 = *IterAtElement;
          if ( (*((_BYTE *)*IterAtElement + 1) & 0xF0) == 0x20 && *((_BYTE *)v11 + 2) == 121 )
          {
            v12 = *(char **)v9;
            *(_OWORD *)&v12[v8] = *(_OWORD *)((char *)v11 + 1);
            *(_OWORD *)&v12[v8 + 16] = *(_OWORD *)((char *)v11 + 17);
            *(_OWORD *)&v12[v8 + 32] = *(_OWORD *)((char *)v11 + 33);
            *(_OWORD *)&v12[v8 + 48] = *(_OWORD *)((char *)v11 + 49);
            *(_OWORD *)&v12[v8 + 64] = *(_OWORD *)((char *)v11 + 65);
            *(_OWORD *)&v12[v8 + 80] = *(_OWORD *)((char *)v11 + 81);
            *(_OWORD *)&v12[v8 + 96] = *(_OWORD *)((char *)v11 + 97);
            *(_QWORD *)&v12[v8 + 112] = *(_QWORD *)((char *)v11 + 113);
            *(_DWORD *)&v12[v8 + 120] = *(_DWORD *)((char *)v11 + 121);
            *(_WORD *)&v12[v8 + 124] = *(_WORD *)((char *)v11 + 125);
            if ( (_DWORD)v8 )
            {
              v15[0] = *(_QWORD *)v9;
              v15[1] = 126LL;
              ++*(_BYTE *)(v15[0] + 3LL);
              v13 = DisplayID_Section_Parser::ComputeChecksum((DisplayID_Section_Parser *)v15);
              *(_BYTE *)(v14 + 125) = v13;
            }
            v6 = v17;
            LODWORD(v8) = v8 + 126;
          }
        }
        ++v7;
      }
      while ( v7 < v6 );
      if ( (_DWORD)v8 )
      {
        DisplayID_Initialize(v9, *(const void **)v9, v8);
        return 0LL;
      }
      else
      {
        return 3221226021LL;
      }
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
