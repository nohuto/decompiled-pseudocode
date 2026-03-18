/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x140112394
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsxxxSetInformationThreadSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2096LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
