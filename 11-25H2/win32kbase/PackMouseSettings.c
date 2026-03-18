/*
 * XREFs of PackMouseSettings @ 0x140217138
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     GetMouseSensitivity @ 0x140109100 (GetMouseSensitivity.c)
 */

__int64 __fastcall PackMouseSettings(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  *a1 = *(_DWORD *)(v3 + 1988);
  a1[1] = GetMouseSensitivity(0LL, v3);
  result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 4988LL);
  a1[2] = result;
  return result;
}
