/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x14016B1F4
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsxxxUserResetDisplayDeviceSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2144LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
