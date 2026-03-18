/*
 * XREFs of IsGreIsCurrentProcessSystemCriticalSupported @ 0x1400842FC
 * Callers:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x140083B88 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 *     DereferenceW32Thread @ 0x140084240 (DereferenceW32Thread.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 IsGreIsCurrentProcessSystemCriticalSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2520LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
