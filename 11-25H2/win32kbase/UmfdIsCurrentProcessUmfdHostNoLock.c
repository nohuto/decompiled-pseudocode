/*
 * XREFs of UmfdIsCurrentProcessUmfdHostNoLock @ 0x1400C0A58
 * Callers:
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall UmfdIsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1392LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
