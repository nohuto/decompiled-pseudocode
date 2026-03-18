/*
 * XREFs of NtGdiDDCCISaveCurrentSettings @ 0x140323950
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z @ 0x140323770 (-DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDDCCISaveCurrentSettings(void *a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  return CMonitorAPI::DdcciSaveCurrentSettings(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1);
}
