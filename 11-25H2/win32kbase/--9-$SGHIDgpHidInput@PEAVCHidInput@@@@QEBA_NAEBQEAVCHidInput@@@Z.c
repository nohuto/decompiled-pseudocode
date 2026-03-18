/*
 * XREFs of ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x14014E678
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012F640 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140148878 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     CHidInput_Destroy @ 0x140212CA0 (CHidInput_Destroy.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGHIDgpHidInput<CHidInput *>::operator!=(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16840) != *a2;
}
