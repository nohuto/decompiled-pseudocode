/*
 * XREFs of IsGetLayeredOrRedirectedParentSupported @ 0x1401224B0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsGetLayeredOrRedirectedParentSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2200LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
