/*
 * XREFs of InitializeDefaultFamilyFonts @ 0x1403ED968
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BDD90 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x14010CF68 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x14021A79C (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

int InitializeDefaultFamilyFonts()
{
  int result; // eax
  __int64 v1; // rdx
  int v2; // ecx
  __int64 v3; // rbx
  char *v4; // rbp
  void **v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int16 *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  HANDLE Handle; // [rsp+20h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  int v13; // [rsp+34h] [rbp-74h]
  char v14[84]; // [rsp+3Ch] [rbp-6Ch] BYREF

  Handle = 0LL;
  result = GetGreRegKey(
             &Handle,
             0x20019u,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults");
  if ( result >= 0 )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v2, v1) + 96) + 4872LL;
    memset_0(KeyValueInformation, 0, 0x54uLL);
    v4 = (char *)&unk_14034C788 - v3;
    v5 = (void **)(v3 + 14872);
    v6 = 6LL;
    do
    {
      if ( bQueryValueKey(*(PCWSTR *)&v4[(_QWORD)v5 - 14872], Handle, KeyValueInformation, 0x54u) && v13 == 1 )
      {
        v7 = 33LL;
        v8 = (unsigned __int16 *)v14;
        do
        {
          if ( !*v8 )
            break;
          ++v8;
          --v7;
        }
        while ( v7 );
        v9 = (33 - v7) & -(__int64)(v7 != 0);
        if ( v7 )
        {
          v10 = (char *)PALLOCMEM(2 * (int)v9 + 2, 1717855815LL);
          *v5 = v10;
          if ( v10 )
          {
            if ( (int)StringCchCopyW(v10, v9 + 1, v14) < 0 )
            {
              Win32FreePool(*v5);
              *v5 = 0LL;
            }
          }
        }
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    return ZwClose(Handle);
  }
  return result;
}
