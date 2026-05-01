/*
 * XREFs of ?SetStartupSoundDefaultKey@Theming@@YAX_N@Z @ 0x1802BE1C8
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x180123CB8 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x1800F874C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 */

void __fastcall Theming::SetStartupSoundDefaultKey(Theming *this)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = (unsigned __int8)this ^ 1;
  dynamic_config::SetRegValueAndLog(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\EditionOverrides",
    4u,
    L"Configuration",
    (BYTE *)&v1,
    4u,
    (unsigned __int8)this ^ 1);
}
