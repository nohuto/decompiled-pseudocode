/*
 * XREFs of ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x140042A80
 * Callers:
 *     ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403F2DA0 (-GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$def.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_RemovePII(unsigned int a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // r9
  char v9; // al
  __int64 i; // rdx
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  if ( !a2 || a1 < 0x80 )
    return 3221225485LL;
  v12 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v11, a2, a1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 12) = 0;
    v4 = v3 + 59;
    v5 = 4LL;
    do
    {
      if ( !*(_WORD *)(v4 - 5) && !*(_BYTE *)(v4 - 3) && *(_BYTE *)(v4 - 2) == 0xFF )
      {
        *(_QWORD *)v4 = 0LL;
        *(_DWORD *)(v4 + 8) = 0;
        *(_BYTE *)(v4 + 12) = 0;
      }
      v4 += 18LL;
      --v5;
    }
    while ( v5 );
    v6 = v11;
    v7 = &v11[v12];
    if ( v11 != v7 )
    {
      do
      {
        v8 = *v6;
        v9 = 0;
        for ( i = 0LL; i < 127; ++i )
          v9 += *(_BYTE *)(v8 + i);
        ++v6;
        *(_BYTE *)(v8 + 127) = -v9;
      }
      while ( v6 != v7 );
    }
    return 0LL;
  }
  return result;
}
