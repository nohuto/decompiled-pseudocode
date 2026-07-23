/*
 * XREFs of ExpSafeWcslen @ 0x140A2D384
 * Callers:
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 *     ExpVerifyWindowsOsOptions @ 0x140A2D310 (ExpVerifyWindowsOsOptions.c)
 *     ExpVerifyFilePath @ 0x140A2D82C (ExpVerifyFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
