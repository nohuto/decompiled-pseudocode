/*
 * XREFs of DwmSyncFlushAndWaitForBatch @ 0x1401B6270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmSyncFlushAndWaitForBatch(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax

  v2 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3776LL);
  if ( v2 )
    return v2(a1, 0LL);
  else
    return 3221225659LL;
}
