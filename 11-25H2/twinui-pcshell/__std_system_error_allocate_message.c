/*
 * XREFs of __std_system_error_allocate_message @ 0x1802D49D8
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180319250 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _std_system_error_allocate_message(DWORD dwMessageId, LPSTR lpBuffer)
{
  DWORD v4; // r9d
  DWORD v5; // eax
  __int64 v6; // rdx
  unsigned __int8 *v7; // r8
  DWORD LCData; // [rsp+60h] [rbp+18h] BYREF

  LCData = 0;
  if ( GetLocaleInfoEx(L"!x-sys-default-locale", 0x20000001u, (LPWSTR)&LCData, 2) )
  {
    v4 = LCData;
  }
  else
  {
    v4 = 0;
    LCData = 0;
  }
  v5 = FormatMessageA(0x1300u, 0LL, dwMessageId, v4, lpBuffer, 0, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int8 *)(v5 + *(_QWORD *)lpBuffer - 1LL);
    do
    {
      if ( !byte_180767690[*v7] )
        break;
      --v7;
      --v6;
    }
    while ( v6 );
  }
  return v6;
}
