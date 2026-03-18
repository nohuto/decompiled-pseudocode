/*
 * XREFs of MiWalkImageRemoveDebuggerPatchesFromPage @ 0x1406E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     MiApplyDebuggerPatches @ 0x14038C7F8 (MiApplyDebuggerPatches.c)
 */

__int64 __fastcall MiWalkImageRemoveDebuggerPatchesFromPage(__int64 a1)
{
  MiApplyDebuggerPatches(**(_QWORD **)a1, 0LL, *(_DWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 1);
  return 0LL;
}
