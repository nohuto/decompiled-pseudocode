/*
 * XREFs of ExpVerifyWindowsOsOptions @ 0x140A2D310
 * Callers:
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 * Callees:
 *     ExpSafeWcslen @ 0x140A2D384 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140A2D82C (ExpVerifyFilePath.c)
 */

__int64 __fastcall ExpVerifyWindowsOsOptions(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v7; // rax

  v4 = (unsigned int)ExpSafeWcslen(a1 + 20, a1 + a2);
  v5 = v2[3];
  if ( v5 < 0x14 )
    return 3221225485LL;
  if ( v5 > v3 )
    return 3221225485LL;
  if ( v2[2] != 1 )
    return 3221225485LL;
  v7 = (unsigned int)v2[4];
  if ( (v7 & 3) != 0 || (unsigned int)v7 >= v3 || (_DWORD)v4 == -1 || (char *)v2 + 2 * v4 + 22 > (char *)v2 + v7 )
    return 3221225485LL;
  else
    return ExpVerifyFilePath((char *)v2 + v7);
}
