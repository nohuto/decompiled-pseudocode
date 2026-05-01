/*
 * XREFs of __std_system_error_allocate_message @ 0x1802CD35C
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1803154F0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _std_system_error_allocate_message(DWORD dwMessageId, LPSTR lpBuffer)
{
  DWORD v2; // edi
  int v3; // ebx
  DWORD v6; // r9d
  __int64 v7; // rdx
  unsigned __int8 *v8; // r8
  DWORD LCData; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  LCData = 0;
  v3 = 0;
  while ( !v2 )
  {
    if ( !v3 )
    {
      v6 = 1033;
LABEL_9:
      LCData = v6;
      goto LABEL_10;
    }
    if ( v3 != 1 )
    {
      v6 = 0;
      goto LABEL_9;
    }
    if ( GetLocaleInfoEx(L"!x-sys-default-locale", 0x20000001u, (LPWSTR)&LCData, 2) )
    {
      v6 = LCData;
LABEL_10:
      v2 = FormatMessageA(0x1300u, 0LL, dwMessageId, v6, lpBuffer, 0, 0LL);
    }
    if ( ++v3 >= 3 )
      break;
  }
  v7 = v2;
  if ( v2 )
  {
    v8 = (unsigned __int8 *)(v2 + *(_QWORD *)lpBuffer - 1LL);
    do
    {
      if ( !byte_1807923C0[*v8] )
        break;
      --v8;
      --v7;
    }
    while ( v7 );
  }
  return v7;
}
