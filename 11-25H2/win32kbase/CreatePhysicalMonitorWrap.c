/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x14023E2FC
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x140139E70 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreatePhysicalMonitorWrap(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // rax

  v4 = a2;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24)
                                                          + 1032LL);
  if ( v6 )
    return v6(a1, v4, a3);
  else
    return 3221225659LL;
}
