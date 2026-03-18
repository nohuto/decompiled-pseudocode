/*
 * XREFs of DwmSyncFlushAndWaitForBatch @ 0x1401D01A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmSyncFlushAndWaitForBatch(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rax

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4224LL);
  if ( v3 )
    return v3(a1, 0LL);
  else
    return 3221225659LL;
}
