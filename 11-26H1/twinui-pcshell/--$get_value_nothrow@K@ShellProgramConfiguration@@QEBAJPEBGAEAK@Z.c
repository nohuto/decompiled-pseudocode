/*
 * XREFs of ??$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z @ 0x180456348
 * Callers:
 *     ??$try_get_value@K@ShellProgramConfiguration@@QEBA?AV?$optional@K@std@@PEBG@Z @ 0x180458FB8 (--$try_get_value@K@ShellProgramConfiguration@@QEBA-AV-$optional@K@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall ShellProgramConfiguration::get_value_nothrow<unsigned long>(HKEY *a1, __int64 a2, void *a3)
{
  HKEY v3; // rcx
  LSTATUS result; // eax
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3 = *a1;
  LODWORD(v5) = 4;
  result = RegGetValueW(v3, 0LL, L"PrelaunchOverride", 0x10u, 0LL, a3, (LPDWORD)&v5);
  if ( !result )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
