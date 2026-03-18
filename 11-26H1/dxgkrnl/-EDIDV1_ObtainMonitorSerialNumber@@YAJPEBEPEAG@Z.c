/*
 * XREFs of ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14004304C
 * Callers:
 *     ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403EAF60 (-AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x140043680 (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorSerialNumber(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  unsigned __int16 *v4; // r11
  int i; // edx
  __int64 v6; // r9
  unsigned __int64 j; // rax
  unsigned __int64 k; // rcx
  char v9; // r8
  unsigned __int64 v10; // r8
  unsigned int v11; // ecx
  wchar_t v12; // ax
  unsigned __int64 v13; // rdx
  unsigned __int16 *v14; // r9
  unsigned __int16 *v15; // r10
  unsigned __int16 v16; // cx
  _QWORD v17[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v17[0] = a1;
  v17[10] = 1LL;
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v17, (bool)a2);
  if ( (int)result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( (unsigned int)i >= 4 )
      {
        v10 = 0LL;
        v11 = *(unsigned __int8 *)(v3 + 12) | ((*(unsigned __int8 *)(v3 + 13) | (*(unsigned __int16 *)(v3 + 14) << 8)) << 8);
        do
        {
          v12 = a0123456789abcd[v11 % 0xA];
          v11 /= 0xAu;
          v4[v10++] = v12;
        }
        while ( v11 && v10 < 0xD );
        v13 = v10 >> 1;
        if ( v10 >> 1 )
        {
          v14 = &v4[v13 - 1];
          v15 = &v4[v10 - v13];
          do
          {
            v16 = *v14;
            *v14-- = *v15;
            *v15++ = v16;
            --v13;
          }
          while ( v13 );
        }
        v4[v10] = 0;
        return 0LL;
      }
      if ( !*(_WORD *)(v3 + 18LL * i + 54) && !*(_BYTE *)(v3 + 18LL * i + 56) )
      {
        if ( *(_BYTE *)(v3 + 18LL * i + 58) )
        {
          if ( *(_BYTE *)(v3 + 18LL * i + 57) != 0xFD )
            continue;
        }
        else if ( *(_BYTE *)(v3 + 18LL * i + 57) == 16 )
        {
          continue;
        }
        if ( *(_BYTE *)(v3 + 18LL * i + 57) == 0xFF )
        {
          v6 = v3 + 18LL * i;
          for ( j = 0LL; j < 0xD; ++j )
          {
            if ( *(_BYTE *)(v6 + j + 59) == 10 )
              break;
          }
          for ( k = j + 1; k < 0xD; ++k )
          {
            v9 = *(_BYTE *)(k + v6 + 59);
            if ( (v9 & 0xDE) != 0 || v9 == 33 )
              goto LABEL_10;
          }
          if ( j )
          {
            MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v17, i, v4);
            return 0LL;
          }
        }
      }
LABEL_10:
      ;
    }
  }
  return result;
}
