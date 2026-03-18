/*
 * XREFs of PrepareGammaRampData @ 0x1401522CC
 * Callers:
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PrepareGammaRampData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                           + 2304LL);
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return 3221225659LL;
}
