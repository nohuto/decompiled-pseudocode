/*
 * XREFs of PackPenSettings @ 0x140217190
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PackPenSettings(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 67120);
  a1[3] = v3;
  v5 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 67072);
  a1[4] = v5;
  result = W32GetUserSessionState(v6, v5);
  a1[5] = *(_DWORD *)(result + 67136);
  return result;
}
