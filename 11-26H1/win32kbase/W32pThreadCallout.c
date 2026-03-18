/*
 * XREFs of W32pThreadCallout @ 0x14014268C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v4)(__int64, _QWORD); // rax

  v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 584LL);
  if ( v4 )
    return v4(a1, a2);
  else
    return 3221225659LL;
}
