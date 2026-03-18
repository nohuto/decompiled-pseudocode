/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x140173C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall GreDwmDesktopOverlaysEnabled(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2720LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
