/*
 * XREFs of UserJobCallout @ 0x14015E1E8
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 600LL);
  if ( v2 )
    return v2(a1);
  else
    return 3221225659LL;
}
