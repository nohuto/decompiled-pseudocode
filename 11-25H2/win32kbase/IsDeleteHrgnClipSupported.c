/*
 * XREFs of IsDeleteHrgnClipSupported @ 0x14010B484
 * Callers:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsDeleteHrgnClipSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2624LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
