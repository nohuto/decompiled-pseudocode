/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x14019FA30
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreatePhysicalMonitorWrap(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // rax

  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1032LL);
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return 3221225659LL;
}
