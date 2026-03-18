/*
 * XREFs of UserJobCallout @ 0x14012222C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 608LL);
  if ( v3 )
    return v3(a1);
  else
    return 3221225659LL;
}
