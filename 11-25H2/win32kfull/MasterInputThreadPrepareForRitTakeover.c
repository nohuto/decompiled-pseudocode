/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1402286D8
 * Callers:
 *     EditionDeactivateMitInput @ 0x140247350 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?RITORDIT@@YAPEADXZ @ 0x14027B8C4 (-RITORDIT@@YAPEADXZ.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x14027C330 (EditionPrepareHidForInputThreadMigration.c)
 */

__int64 MasterInputThreadPrepareForRitTakeover()
{
  bool v0; // di
  bool v1; // si
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v0 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v1 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v0 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v2 = RITORDIT();
    UserSessionState = W32GetUserSessionState(v4, v3);
    LOBYTE(v6) = v1;
    LOBYTE(v7) = v0;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      20,
      10,
      (__int64)&WPP_ac82db3257bc35250b2decbe0f7a69ed_Traceguids,
      (__int64)v2);
  }
  EditionPrepareHidForInputThreadMigration();
  return EtwTraceDitDisEngaged();
}
