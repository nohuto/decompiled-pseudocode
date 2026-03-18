/*
 * XREFs of ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x14010A0FC
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pathwide::WIDENER::bValid(pathwide::WIDENER *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 142)
    && !*((_DWORD *)this + 312)
    && *((_QWORD *)this + 123)
    && !*((_DWORD *)this + 274)
    && *((_QWORD *)this + 103)
    && !*((_DWORD *)this + 234) )
  {
    return 1LL;
  }
  return result;
}
