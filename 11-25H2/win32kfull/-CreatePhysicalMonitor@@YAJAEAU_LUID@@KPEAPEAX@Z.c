/*
 * XREFs of ?CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z @ 0x14020224C
 * Callers:
 *     CreatePhysicalMonitorWrap @ 0x140323930 (CreatePhysicalMonitorWrap.c)
 *     NtGdiGetPhysicalMonitorFromTarget @ 0x140323A80 (NtGdiGetPhysicalMonitorFromTarget.c)
 * Callees:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1402022A0 (-CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePhysicalMonitor(struct _LUID *a1, __int64 a2, void **a3)
{
  unsigned int v4; // edi
  __int64 SessionState; // rax

  v4 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  return CMonitorAPI::CreatePhysicalMonitor(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1, v4, a3);
}
