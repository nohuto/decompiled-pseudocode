/*
 * XREFs of EditionxxxReportMouseBreakToAccessibility @ 0x1401B3B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1401B3F68 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionxxxReportMouseBreakToAccessibility(__int64 a1, const struct tagUIPI_INFO_INT *a2, int a3)
{
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v5 = a1;
  v6 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20580);
  if ( (v6 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    *(_WORD *)(UserSessionState + 20604) &= ~v5;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v7, v6) + 20572) & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a3 != 0, a2) )
    return 1LL;
  MSGLUA_GPQFOREGROUND(v11, v10);
  return 0LL;
}
