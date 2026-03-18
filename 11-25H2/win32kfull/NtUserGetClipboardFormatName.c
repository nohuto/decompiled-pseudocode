/*
 * XREFs of NtUserGetClipboardFormatName @ 0x1401BCB20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

__int64 __fastcall NtUserGetClipboardFormatName(unsigned __int16 a1, volatile void *a2, unsigned int a3)
{
  unsigned int v6; // ebx

  ProbeForWrite(a2, 2LL * a3, 2u);
  if ( a1 < 0xC000u )
  {
    v6 = 0;
    UserSetLastError(87);
  }
  else
  {
    return (unsigned int)UserGetAtomName(a1, a2, a3);
  }
  return v6;
}
