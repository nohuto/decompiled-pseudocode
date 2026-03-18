/*
 * XREFs of RIMRegOpenLocalMachineKey @ 0x140120B94
 * Callers:
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1401EC394 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1401EC44C (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140120C84 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RIMRegOpenKey @ 0x14013BD10 (RIMRegOpenKey.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMRegOpenLocalMachineKey(unsigned __int16 *a1)
{
  __int64 v1; // rbx
  const WCHAR *v2; // r9
  _WORD *v3; // r10
  __int64 v5; // rdx
  __int16 v6; // ax
  __int64 v7; // r8
  int v8; // ecx
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-2E8h] BYREF
  _BYTE v11[704]; // [rsp+30h] [rbp-2D8h] BYREF

  v1 = 0LL;
  v2 = L"\\Registry\\Machine\\";
  *(_DWORD *)(&v10.MaximumLength + 1) = 0;
  v10.MaximumLength = 700;
  v3 = v11;
  v10.Buffer = (PWSTR)v11;
  v5 = 0x7FFFLL;
  v6 = 0;
  v7 = 350LL;
  v8 = 0;
  while ( v5 )
  {
    if ( *v2 )
    {
      *v3++ = *v2++;
      --v5;
      ++v6;
      if ( --v7 )
        continue;
    }
    if ( !v7 && v5 && *v2 )
      v8 = -2147483643;
    break;
  }
  v10.Length = 2 * v6;
  if ( v8 >= 0 && RtlUnicodeStringCatString(&v10, a1) >= 0 )
    return RIMRegOpenKey(&v10);
  return v1;
}
