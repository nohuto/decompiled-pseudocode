/*
 * XREFs of IsUMPDGetThreadClientPIDSupported @ 0x14014C554
 * Callers:
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsUMPDGetThreadClientPIDSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1544LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
