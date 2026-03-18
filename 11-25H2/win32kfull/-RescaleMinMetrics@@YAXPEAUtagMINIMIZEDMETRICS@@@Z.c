/*
 * XREFs of ?RescaleMinMetrics@@YAXPEAUtagMINIMIZEDMETRICS@@@Z @ 0x14021B5D0
 * Callers:
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x14021B520 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 */

void __fastcall RescaleMinMetrics(struct tagMINIMIZEDMETRICS *a1)
{
  INT DpiForSystem; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  DpiForSystem = GetDpiForSystem();
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872);
  if ( DpiForSystem != *(unsigned __int16 *)(v5 + 6998) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    *((_DWORD *)a1 + 1) = EngMulDiv(
                            *((_DWORD *)a1 + 1),
                            *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL),
                            DpiForSystem);
    v10 = W32GetUserSessionState(v9, v8);
    *((_DWORD *)a1 + 2) = EngMulDiv(
                            *((_DWORD *)a1 + 2),
                            *(unsigned __int16 *)(*(_QWORD *)(v10 + 19872) + 6998LL),
                            DpiForSystem);
    v13 = W32GetUserSessionState(v12, v11);
    *((_DWORD *)a1 + 3) = EngMulDiv(
                            *((_DWORD *)a1 + 3),
                            *(unsigned __int16 *)(*(_QWORD *)(v13 + 19872) + 6998LL),
                            DpiForSystem);
  }
}
