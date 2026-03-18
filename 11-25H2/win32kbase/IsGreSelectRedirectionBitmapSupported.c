/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1400E6BD8
 * Callers:
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsGreSelectRedirectionBitmapSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2584LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
