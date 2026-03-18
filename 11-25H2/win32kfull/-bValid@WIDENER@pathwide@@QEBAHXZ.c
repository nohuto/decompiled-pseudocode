/*
 * XREFs of ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x1400A5420
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400A5C54 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
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
