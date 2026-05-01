/*
 * XREFs of ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x18020DC6C
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x180123CB8 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x1800F874C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 */

void __fastcall Theming::SetBackgroundsRedirectionPath(BYTE *this, const unsigned __int16 *a2)
{
  DWORD v2; // eax
  __int64 v3; // rdx

  v2 = 0;
  if ( this )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)&this[2 * v3] );
    v2 = 2 * v3 + 2;
  }
  dynamic_config::SetRegValueAndLog(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\EditionOverrides",
    1u,
    L"packagebase2",
    this,
    v2,
    this == 0LL);
}
