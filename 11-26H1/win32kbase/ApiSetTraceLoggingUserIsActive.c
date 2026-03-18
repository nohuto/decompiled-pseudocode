/*
 * XREFs of ApiSetTraceLoggingUserIsActive @ 0x1401A2668
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetTraceLoggingUserIsActive(__int64 a1, __int64 a2))(void)
{
  unsigned int v3; // edi
  __int64 (*result)(void); // rax
  __int64 v5; // rcx

  v3 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6816LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 6824LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, __int64))result)(v3, a2);
    }
  }
  return result;
}
