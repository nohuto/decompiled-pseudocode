/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x14008457C
 * Callers:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x140083B88 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 *     DereferenceW32Thread @ 0x140084240 (DereferenceW32Thread.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*GreIsCurrentProcessSystemCritical())(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2528LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
