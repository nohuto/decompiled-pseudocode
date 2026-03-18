/*
 * XREFs of ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x140043680
 * Callers:
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14004304C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x140043430 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MonDescParser::EDID_PARSER::GetDispDescAsASCIIString(
        MonDescParser::EDID_PARSER *this,
        int a2,
        unsigned __int16 *a3)
{
  unsigned __int64 v4; // rbx
  UCHAR *v5; // rcx
  unsigned __int64 i; // rax
  UCHAR v7; // dl
  __int64 v8; // rdi
  WCHAR v9; // ax
  __int64 v10; // rcx
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = (UCHAR *)(*(_QWORD *)this + 59LL + 18LL * a2);
  do
  {
    if ( v5[v4] == 10 )
      break;
    ++v4;
  }
  while ( v4 < 0xD );
  for ( i = v4 + 1; i < 0xD; ++i )
  {
    v7 = v5[i];
    if ( v7 != 32 && v7 > 1u )
    {
      v4 = 0LL;
      break;
    }
  }
  SourceCharacter = v5;
  LODWORD(v8) = 0;
  *a3 = 0;
  if ( v4 )
  {
    while ( *v5 != 10 )
    {
      v9 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      v10 = (unsigned int)v8;
      v8 = (unsigned int)(v8 + 1);
      a3[v10] = v9;
      a3[v8] = 0;
      if ( (unsigned int)v8 >= v4 )
        break;
      v5 = SourceCharacter;
    }
  }
}
