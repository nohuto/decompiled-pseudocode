/*
 * XREFs of ?ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z @ 0x14010DFC4
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 * Callees:
 *     ?LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z @ 0x14033E96C (-LogFontLoadAttempt@@YAXPEAXW4FontSource@@PEBG_N@Z.c)
 */

__int64 __fastcall ScrutinizeProcessFontLoad(void *a1, unsigned int a2, const wchar_t *a3)
{
  NTSTATUS v6; // edi
  const wchar_t *v8; // r8
  const wchar_t *v9; // r8
  int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v11 = 0;
  v10 = 9;
  v6 = ZwQueryInformationProcess(a1, ProcessCookie|ProcessUserModeIOPL, &v10, 8u, 0LL);
  if ( v6 >= 0 )
  {
    if ( (v11 & 1) != 0 )
    {
      v8 = &pszFormat;
      if ( a3 )
        v8 = a3;
      LogFontLoadAttempt(a1, a2, v8);
      v6 = -1073741790;
    }
    else if ( (v11 & 2) != 0 )
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
