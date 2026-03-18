/*
 * XREFs of SepMatchCapability @ 0x1402AFC18
 * Callers:
 *     SepMaximumAccessCheckEx @ 0x1402ACD9C (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1402AF210 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 * Callees:
 *     RtlSidHashLookup @ 0x1402AFED0 (RtlSidHashLookup.c)
 */

__int64 __fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  __int64 result; // rax

  result = RtlSidHashLookup(a1 + 808, a3);
  if ( result )
  {
    result = *(unsigned int *)(result + 8);
    if ( (result & 4) != 0 )
    {
      *a6 |= a4 & a2;
      result = (__int64)a5;
      *a5 = 1;
    }
  }
  return result;
}
