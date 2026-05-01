/*
 * XREFs of ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x1800C2544
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800F1F4C (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x1800C37F8 (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 */

void __fastcall Theming::SetBackgroundsRedirectionPath(Theming *this, const unsigned __int16 *a2)
{
  DWORD v2; // eax
  __int64 v3; // rdx
  bool v4; // [rsp+38h] [rbp-10h]

  v2 = 0;
  if ( this )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)this + v3) );
    v2 = 2 * v3 + 2;
  }
  dynamic_config::SetRegValueAndLog(
    HKEY_LOCAL_MACHINE,
    (HKEY)L"Software\\Microsoft\\Windows\\CurrentVersion\\EditionOverrides",
    1u,
    L"packagebase2",
    (BYTE *)this,
    v2,
    this == 0LL,
    v4);
}
