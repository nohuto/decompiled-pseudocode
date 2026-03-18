/*
 * XREFs of ?ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z @ 0x1400CEB94
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 * Callees:
 *     ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x140218D64 (-LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z.c)
 */

__int64 __fastcall ScrutinizeProcessFontLoad(void *a1, unsigned int a2, const wchar_t *a3)
{
  NTSTATUS v6; // edi
  const wchar_t *v8; // r8
  const wchar_t *v9; // r8
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 9LL;
  v6 = ZwQueryInformationProcess(a1, ProcessCookie|ProcessUserModeIOPL, &v10, 8u, 0LL);
  if ( v6 >= 0 )
  {
    if ( (v10 & 0x100000000LL) != 0 )
    {
      v8 = &pszFormat;
      if ( a3 )
        v8 = a3;
      LogFontLoadAttempt(a1, a2, v8);
      v6 = -1073741790;
    }
    else if ( (v10 & 0x200000000LL) != 0 )
    {
      v9 = &pszFormat;
      if ( a3 )
        v9 = a3;
      LogFontLoadAttempt(a1, a2, v9);
    }
  }
  ZwClose(a1);
  return (unsigned int)v6;
}
