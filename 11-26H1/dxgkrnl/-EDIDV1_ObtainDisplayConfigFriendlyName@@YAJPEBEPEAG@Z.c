/*
 * XREFs of ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x140043430
 * Callers:
 *     ?AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403B5E00 (-AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x140043680 (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall EDIDV1_ObtainDisplayConfigFriendlyName(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // ebp
  const unsigned __int8 *v7; // rdx
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rax
  unsigned __int8 v10; // cl
  _QWORD v11[12]; // [rsp+20h] [rbp-78h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v11[0] = a1;
  v11[10] = 1LL;
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v11, (bool)a2);
  if ( (int)result >= 0 )
  {
    memset(a2, 0, 0x52uLL);
    v5 = 0LL;
    v6 = 0;
    while ( 1 )
    {
      if ( !*(_WORD *)&a1[18 * v6 + 54] && !a1[18 * v6 + 56] )
      {
        if ( a1[18 * v6 + 58] )
        {
          if ( a1[18 * v6 + 57] == 0xFD )
          {
LABEL_15:
            if ( a1[18 * v6 + 57] == 0xFC )
            {
              v7 = &a1[18 * v6];
              for ( i = 0LL; i < 0xD; ++i )
              {
                if ( v7[i + 59] == 10 )
                  break;
              }
              for ( j = i + 1; j < 0xD; ++j )
              {
                v10 = v7[j + 59];
                if ( (v10 & 0xDE) != 0 || v10 == 33 )
                {
                  i = 0LL;
                  break;
                }
              }
              if ( i + v5 > 0x28 )
                i = 40 - v5;
              if ( i && (unsigned __int64)(v5 + 13) <= 0x28 )
              {
                MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v11, v6, &a2[v5]);
                v5 += i;
              }
            }
          }
        }
        else if ( a1[18 * v6 + 57] != 16 )
        {
          goto LABEL_15;
        }
      }
      if ( (unsigned int)++v6 >= 4 )
      {
        result = 3221226021LL;
        if ( v5 )
          return 0LL;
        return result;
      }
    }
  }
  return result;
}
