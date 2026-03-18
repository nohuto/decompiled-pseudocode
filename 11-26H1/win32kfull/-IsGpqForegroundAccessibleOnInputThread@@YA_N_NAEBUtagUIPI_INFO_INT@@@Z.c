/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1401735F8
 * Callers:
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1401731F0 (EditionxxxReportMouseBreakToAccessibility.c)
 *     EditionLLMouseButtonHook @ 0x140173290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401734E0 (EditionLLMouseWheelHook.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsGpqForegroundAccessibleOnInputThread(__int64 a1, const struct tagUIPI_INFO_INT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v7; // r8

  if ( !(_BYTE)a1 || !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) || *((_DWORD *)a2 + 3) )
    return 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  return UIPrivilegeIsolation::CheckAccess(
           a2,
           (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18928) + 472LL),
           v7);
}
