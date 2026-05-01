/*
 * XREFs of ??$try_get_value@K@ShellProgramConfiguration@@QEBA?AV?$optional@K@std@@PEBG@Z @ 0x180458FB8
 * Callers:
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18045B640 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     ??$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z @ 0x180456348 (--$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z.c)
 */

__int64 __fastcall ShellProgramConfiguration::try_get_value<unsigned long>(HKEY *a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = *a1 == 0LL;
  LODWORD(v6) = 0;
  if ( v3 || ShellProgramConfiguration::get_value_nothrow<unsigned long>(a1, a2, &v6) < 0 )
  {
    *(_BYTE *)(a2 + 4) = 0;
  }
  else
  {
    *(_DWORD *)a2 = v6;
    *(_BYTE *)(a2 + 4) = 1;
  }
  return a2;
}
