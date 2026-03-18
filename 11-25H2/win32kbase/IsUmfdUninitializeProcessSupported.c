/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1401A2460
 * Callers:
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsUmfdUninitializeProcessSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1400LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
